// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpt64_top.h for the primary calling header

#include "Vmpt64_top.h"
#include "Vmpt64_top__Syms.h"

//==========

void Vmpt64_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmpt64_top::eval\n"); );
    Vmpt64_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/valerio/Desktop/RISC-V-Memory-Protection-Table/x64/rtl/mpt64_top.sv", 18, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmpt64_top::_eval_initial_loop(Vmpt64_top__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/valerio/Desktop/RISC-V-Memory-Protection-Table/x64/rtl/mpt64_top.sv", 18, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmpt64_top::_sequent__TOP__2(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_sequent__TOP__2\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__mpt64_top__DOT__curr_state_q;
    // Body
    __Vdly__mpt64_top__DOT__curr_state_q = vlTOPp->mpt64_top__DOT__curr_state_q;
    vlTOPp->mpt64_top__DOT__format_error_cause_q = 
        ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->mpt64_top__DOT__format_error_cause_d)
          : 0U);
    if (vlTOPp->rst_ni) {
        __Vdly__mpt64_top__DOT__curr_state_q = vlTOPp->mpt64_top__DOT__next_state_d;
        vlTOPp->mpt64_top__DOT__curr_lookup_state_q 
            = vlTOPp->mpt64_top__DOT__next_lookup_state_d;
        vlTOPp->mpt64_top__DOT__access_page_fault_q = 0U;
        if ((0U == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if (vlTOPp->addr_valid_i) {
                vlTOPp->mpt64_top__DOT__spa_q = vlTOPp->spa_i;
                vlTOPp->mpt64_top__DOT__mmpt_q = vlTOPp->mmpt_reg_i;
                vlTOPp->mpt64_top__DOT__access_type_q 
                    = vlTOPp->access_type_i;
            }
        } else {
            if ((3U == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                if (vlTOPp->m_mem_valid) {
                    vlTOPp->mpt64_top__DOT__mptl_entry_q 
                        = vlTOPp->m_mem_rdata;
                }
            } else {
                if ((4U == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                    vlTOPp->mpt64_top__DOT__plb_entry_q 
                        = vlTOPp->mpt64_top__DOT__plb_entry_d;
                    vlTOPp->mpt64_top__DOT__access_page_fault_q 
                        = vlTOPp->mpt64_top__DOT__access_page_fault_d;
                } else {
                    __Vdly__mpt64_top__DOT__curr_state_q 
                        = vlTOPp->mpt64_top__DOT__next_state_d;
                    vlTOPp->mpt64_top__DOT__curr_lookup_state_q 
                        = vlTOPp->mpt64_top__DOT__next_lookup_state_d;
                }
            }
        }
    } else {
        __Vdly__mpt64_top__DOT__curr_state_q = 0U;
        vlTOPp->mpt64_top__DOT__curr_lookup_state_q = 0U;
        vlTOPp->mpt64_top__DOT__spa_q = 0ULL;
        vlTOPp->mpt64_top__DOT__mmpt_q = 0ULL;
        vlTOPp->mpt64_top__DOT__mptl_entry_q = 0ULL;
        vlTOPp->mpt64_top__DOT__access_type_q = 0U;
        vlTOPp->mpt64_top__DOT__plb_entry_q = 0ULL;
        vlTOPp->mpt64_top__DOT__access_page_fault_q = 0U;
    }
    vlTOPp->mpt64_top__DOT__curr_state_q = __Vdly__mpt64_top__DOT__curr_state_q;
    vlTOPp->ptw_busy_o = 0U;
    vlTOPp->ptw_busy_o = (1U & (((IData)(vlTOPp->mpt64_top__DOT__curr_state_q) 
                                 >> 2U) | (((IData)(vlTOPp->mpt64_top__DOT__curr_state_q) 
                                            >> 1U) 
                                           | (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))));
    vlTOPp->ptw_valid_o = 0U;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            vlTOPp->ptw_valid_o = 1U;
        }
    }
    vlTOPp->allow_o = 0U;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                vlTOPp->allow_o = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->mpt64_top__DOT__curr_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)))) {
                vlTOPp->allow_o = 0U;
            }
        }
    }
    vlTOPp->m_mem_req = 0U;
    if ((1U & (~ ((IData)(vlTOPp->mpt64_top__DOT__curr_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)))) {
                vlTOPp->m_mem_req = 1U;
            }
        }
    }
    vlTOPp->format_error_o = 0U;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)))) {
                vlTOPp->format_error_o = vlTOPp->mpt64_top__DOT__format_error_cause_q;
            }
        }
    }
    vlTOPp->access_page_fault_o = 0U;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)))) {
                vlTOPp->access_page_fault_o = vlTOPp->mpt64_top__DOT__access_page_fault_q;
            }
        }
    }
    vlTOPp->plb_entry_o = 0ULL;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                vlTOPp->plb_entry_o = vlTOPp->mpt64_top__DOT__plb_entry_q;
            }
        }
    }
}

VL_INLINE_OPT void Vmpt64_top::_combo__TOP__3(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_combo__TOP__3\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mpt64_top__DOT__access_page_fault_d = 0U;
    vlTOPp->mpt64_top__DOT__format_error_cause_d = 0U;
    if ((4U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            vlTOPp->mpt64_top__DOT__next_state_d = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                if (vlTOPp->m_mem_valid) {
                    vlTOPp->mpt64_top__DOT__next_state_d = 0U;
                }
            } else {
                if ((0U == (IData)(vlTOPp->mpt64_top__DOT__curr_lookup_state_q))) {
                    vlTOPp->mpt64_top__DOT__mptl3_entry 
                        = vlTOPp->mpt64_top__DOT__mptl_entry_q;
                    if ((1U & (IData)((vlTOPp->mpt64_top__DOT__mptl3_entry 
                                       >> 0x2cU)))) {
                        if ((0U != (0x7ffffU & (IData)(
                                                       (vlTOPp->mpt64_top__DOT__mptl3_entry 
                                                        >> 0x2dU))))) {
                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 1U;
                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                        } else {
                            vlTOPp->mpt64_top__DOT__next_look_up_addr 
                                = (0xfffffffffffULL 
                                   & ((QData)((IData)(
                                                      (0x1fffffU 
                                                       & (IData)(
                                                                 (vlTOPp->mpt64_top__DOT__spa_q 
                                                                  >> 0x19U))))) 
                                      + vlTOPp->mpt64_top__DOT__mptl3_entry));
                            vlTOPp->mpt64_top__DOT__next_state_d = 2U;
                            vlTOPp->mpt64_top__DOT__next_lookup_state_d = 1U;
                        }
                    } else {
                        vlTOPp->mpt64_top__DOT__format_error_cause_d = 2U;
                        vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->mpt64_top__DOT__curr_lookup_state_q))) {
                        vlTOPp->mpt64_top__DOT__mptl2_entry 
                            = vlTOPp->mpt64_top__DOT__mptl_entry_q;
                        if ((0U != (0x1ffffU & (IData)(
                                                       (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                        >> 0x2fU))))) {
                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 1U;
                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                        } else {
                            if ((1U & (IData)((vlTOPp->mpt64_top__DOT__mptl2_entry 
                                               >> 0x2eU)))) {
                                if ((1U & (IData)((vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                   >> 0x2dU)))) {
                                    vlTOPp->mpt64_top__DOT__format_error_cause_d = 4U;
                                    vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                } else {
                                    if ((1U & (IData)(
                                                      (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                       >> 0x2cU)))) {
                                        if ((0U != 
                                             (0xfffU 
                                              & (IData)(
                                                        (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                         >> 0x20U))))) {
                                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 1U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                        } else {
                                            vlTOPp->mpt64_top__DOT__permissions 
                                                = (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->mpt64_top__DOT__spa_q 
                                                                  >> 0x18U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->mpt64_top__DOT__spa_q 
                                                                   >> 0x17U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x16U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x1eU))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x1cU)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x1aU))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x18U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x16U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x16U))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x14U)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x12U))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0x10U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->mpt64_top__DOT__spa_q 
                                                                   >> 0x17U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x16U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0xeU))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0xcU)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 0xaU))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x16U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 6U))
                                                          : (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 4U)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__spa_q 
                                                                     >> 0x15U)))
                                                          ? (IData)(
                                                                    (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                                     >> 2U))
                                                          : (IData)(vlTOPp->mpt64_top__DOT__mptl2_entry))))));
                                            if ((((
                                                   (1U 
                                                    == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                   & (((1U 
                                                        == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                                       | (2U 
                                                          == (IData)(vlTOPp->mpt64_top__DOT__permissions))) 
                                                      | (3U 
                                                         == (IData)(vlTOPp->mpt64_top__DOT__permissions)))) 
                                                  | ((2U 
                                                      == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                     & ((2U 
                                                         == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                                        | (3U 
                                                           == (IData)(vlTOPp->mpt64_top__DOT__permissions))))) 
                                                 | ((3U 
                                                     == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                    & ((1U 
                                                        == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                                       | (3U 
                                                          == (IData)(vlTOPp->mpt64_top__DOT__permissions)))))) {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                                                vlTOPp->mpt64_top__DOT__plb_entry_d 
                                                    = 
                                                    (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                                                >> 0x36U))))) 
                                                      << 0x3aU) 
                                                     | ((vlTOPp->mpt64_top__DOT__spa_q 
                                                         << 2U) 
                                                        | (QData)((IData)(vlTOPp->mpt64_top__DOT__permissions))));
                                            } else {
                                                vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                                vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->mpt64_top__DOT__next_look_up_addr 
                                            = (0xfffffffffffULL 
                                               & ((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlTOPp->mpt64_top__DOT__spa_q 
                                                                              >> 0x10U))))) 
                                                  + vlTOPp->mpt64_top__DOT__mptl2_entry));
                                        vlTOPp->mpt64_top__DOT__next_state_d = 2U;
                                        vlTOPp->mpt64_top__DOT__next_lookup_state_d = 2U;
                                    }
                                }
                            } else {
                                if ((1U & (IData)((vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                   >> 0x2dU)))) {
                                    if ((1U & (IData)(
                                                      (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                       >> 0x2cU)))) {
                                        if ((0ULL != 
                                             (0xfffffffffffULL 
                                              & vlTOPp->mpt64_top__DOT__mptl2_entry))) {
                                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 5U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                        } else {
                                            if ((((1U 
                                                   == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                  | (2U 
                                                     == (IData)(vlTOPp->mpt64_top__DOT__access_type_q))) 
                                                 | (3U 
                                                    == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)))) {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                                                vlTOPp->mpt64_top__DOT__permissions = 3U;
                                                vlTOPp->mpt64_top__DOT__plb_entry_d 
                                                    = 
                                                    (3ULL 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                                                >> 0x36U))))) 
                                                         << 0x3aU) 
                                                        | (vlTOPp->mpt64_top__DOT__spa_q 
                                                           << 2U)));
                                            } else {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                                vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0ULL != 
                                             (0xfffffffffffULL 
                                              & vlTOPp->mpt64_top__DOT__mptl2_entry))) {
                                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 5U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                        } else {
                                            if (((1U 
                                                  == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                 | (2U 
                                                    == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)))) {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                                                vlTOPp->mpt64_top__DOT__permissions = 2U;
                                                vlTOPp->mpt64_top__DOT__plb_entry_d 
                                                    = 
                                                    (2ULL 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                                                >> 0x36U))))) 
                                                         << 0x3aU) 
                                                        | (vlTOPp->mpt64_top__DOT__spa_q 
                                                           << 2U)));
                                            } else {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                                vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U & (IData)(
                                                      (vlTOPp->mpt64_top__DOT__mptl2_entry 
                                                       >> 0x2cU)))) {
                                        if ((0ULL != 
                                             (0xfffffffffffULL 
                                              & vlTOPp->mpt64_top__DOT__mptl2_entry))) {
                                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 5U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                        } else {
                                            if (((1U 
                                                  == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                                 | (3U 
                                                    == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)))) {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                                                vlTOPp->mpt64_top__DOT__permissions = 1U;
                                                vlTOPp->mpt64_top__DOT__plb_entry_d 
                                                    = 
                                                    (1ULL 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                                                >> 0x36U))))) 
                                                         << 0x3aU) 
                                                        | (vlTOPp->mpt64_top__DOT__spa_q 
                                                           << 2U)));
                                            } else {
                                                vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                                vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                            }
                                        }
                                    } else {
                                        if ((0ULL != 
                                             (0xfffffffffffULL 
                                              & vlTOPp->mpt64_top__DOT__mptl2_entry))) {
                                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 5U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                        } else {
                                            vlTOPp->mpt64_top__DOT__permissions = 0U;
                                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                            vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->mpt64_top__DOT__curr_lookup_state_q))) {
                            vlTOPp->mpt64_top__DOT__mptl1_entry 
                                = vlTOPp->mpt64_top__DOT__mptl_entry_q;
                            if ((0U != (IData)((vlTOPp->mpt64_top__DOT__mptl1_entry 
                                                >> 0x20U)))) {
                                vlTOPp->mpt64_top__DOT__format_error_cause_d = 1U;
                                vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                            } else {
                                vlTOPp->mpt64_top__DOT__permissions 
                                    = (3U & (IData)(
                                                    (vlTOPp->mpt64_top__DOT__mptl1_entry 
                                                     >> 
                                                     (0x1eU 
                                                      & ((IData)(
                                                                 (vlTOPp->mpt64_top__DOT__spa_q 
                                                                  >> 0xcU)) 
                                                         << 1U)))));
                                if (((((1U == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                       & (((1U == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                           | (2U == (IData)(vlTOPp->mpt64_top__DOT__permissions))) 
                                          | (3U == (IData)(vlTOPp->mpt64_top__DOT__permissions)))) 
                                      | ((2U == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                         & ((2U == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                            | (3U == (IData)(vlTOPp->mpt64_top__DOT__permissions))))) 
                                     | ((3U == (IData)(vlTOPp->mpt64_top__DOT__access_type_q)) 
                                        & ((1U == (IData)(vlTOPp->mpt64_top__DOT__permissions)) 
                                           | (3U == (IData)(vlTOPp->mpt64_top__DOT__permissions)))))) {
                                    vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                                    vlTOPp->mpt64_top__DOT__plb_entry_d 
                                        = (((QData)((IData)(
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                                        >> 0x36U))))) 
                                            << 0x3aU) 
                                           | ((vlTOPp->mpt64_top__DOT__spa_q 
                                               << 2U) 
                                              | (QData)((IData)(vlTOPp->mpt64_top__DOT__permissions))));
                                } else {
                                    vlTOPp->mpt64_top__DOT__access_page_fault_d = 1U;
                                    vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                                }
                            }
                        } else {
                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 6U;
                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
            if ((1U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                if (vlTOPp->m_mem_valid) {
                    vlTOPp->mpt64_top__DOT__next_state_d = 4U;
                }
            } else {
                vlTOPp->m_mem_addr = vlTOPp->mpt64_top__DOT__next_look_up_addr;
                if (vlTOPp->m_mem_gnt) {
                    vlTOPp->mpt64_top__DOT__next_state_d = 3U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) {
                if ((0U == (0xfU & (IData)((vlTOPp->mpt64_top__DOT__mmpt_q 
                                            >> 0x3cU))))) {
                    vlTOPp->mpt64_top__DOT__next_state_d = 7U;
                } else {
                    if ((1U == (0xfU & (IData)((vlTOPp->mpt64_top__DOT__mmpt_q 
                                                >> 0x3cU))))) {
                        if ((0x400000000000ULL <= vlTOPp->mpt64_top__DOT__spa_q)) {
                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 3U;
                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                        } else {
                            vlTOPp->mpt64_top__DOT__next_look_up_addr 
                                = (0xfffffffffffULL 
                                   & (vlTOPp->mpt64_top__DOT__mmpt_q 
                                      + (QData)((IData)(
                                                        (0x1fffffU 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x19U)))))));
                            vlTOPp->mpt64_top__DOT__next_state_d = 2U;
                            vlTOPp->mpt64_top__DOT__next_lookup_state_d = 1U;
                        }
                    } else {
                        if ((2U == (0xfU & (IData)(
                                                   (vlTOPp->mpt64_top__DOT__mmpt_q 
                                                    >> 0x3cU))))) {
                            vlTOPp->mpt64_top__DOT__next_look_up_addr 
                                = (0xfffffffffffULL 
                                   & (vlTOPp->mpt64_top__DOT__mmpt_q 
                                      + (QData)((IData)(
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->mpt64_top__DOT__spa_q 
                                                                    >> 0x2eU)))))));
                            vlTOPp->mpt64_top__DOT__next_state_d = 2U;
                            vlTOPp->mpt64_top__DOT__next_lookup_state_d = 0U;
                        } else {
                            vlTOPp->mpt64_top__DOT__format_error_cause_d = 1U;
                            vlTOPp->mpt64_top__DOT__next_state_d = 6U;
                        }
                    }
                }
            } else {
                if (((IData)(vlTOPp->ptw_enable_i) 
                     & (IData)(vlTOPp->addr_valid_i))) {
                    vlTOPp->mpt64_top__DOT__next_state_d = 1U;
                }
            }
        }
    }
    if (vlTOPp->flush_i) {
        vlTOPp->mpt64_top__DOT__next_state_d = ((((
                                                   (3U 
                                                    == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)) 
                                                   | (5U 
                                                      == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q))) 
                                                  & (~ (IData)(vlTOPp->m_mem_valid))) 
                                                 | ((2U 
                                                     == (IData)(vlTOPp->mpt64_top__DOT__curr_state_q)) 
                                                    & (IData)(vlTOPp->m_mem_gnt)))
                                                 ? 5U
                                                 : 0U);
    }
}

void Vmpt64_top::_eval(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_eval\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vmpt64_top::_change_request(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_change_request\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmpt64_top::_change_request_1(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_change_request_1\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmpt64_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((ptw_enable_i & 0xfeU))) {
        Verilated::overWidthError("ptw_enable_i");}
    if (VL_UNLIKELY((addr_valid_i & 0xfeU))) {
        Verilated::overWidthError("addr_valid_i");}
    if (VL_UNLIKELY((m_mem_gnt & 0xfeU))) {
        Verilated::overWidthError("m_mem_gnt");}
    if (VL_UNLIKELY((m_mem_valid & 0xfeU))) {
        Verilated::overWidthError("m_mem_valid");}
    if (VL_UNLIKELY((m_mem_error & 0xfeU))) {
        Verilated::overWidthError("m_mem_error");}
    if (VL_UNLIKELY((access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
}
#endif  // VL_DEBUG
