// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpt64_top.h for the primary calling header

#include "Vmpt64_top.h"
#include "Vmpt64_top__Syms.h"

//==========

VL_CTOR_IMP(Vmpt64_top) {
    Vmpt64_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmpt64_top__Syms(this, name());
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmpt64_top::__Vconfigure(Vmpt64_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmpt64_top::~Vmpt64_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmpt64_top::_settle__TOP__1(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_settle__TOP__1\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_mem_wdata = 0ULL;
    vlTOPp->m_mem_we = 0U;
    vlTOPp->m_mem_be = 0U;
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

void Vmpt64_top::_eval_initial(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_eval_initial\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vmpt64_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::final\n"); );
    // Variables
    Vmpt64_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmpt64_top::_eval_settle(Vmpt64_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_eval_settle\n"); );
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmpt64_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmpt64_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    flush_i = VL_RAND_RESET_I(1);
    ptw_enable_i = VL_RAND_RESET_I(1);
    spa_i = VL_RAND_RESET_Q(56);
    addr_valid_i = VL_RAND_RESET_I(1);
    mmpt_reg_i = VL_RAND_RESET_Q(64);
    access_page_fault_o = VL_RAND_RESET_I(1);
    format_error_o = VL_RAND_RESET_I(3);
    m_mem_req = VL_RAND_RESET_I(1);
    m_mem_gnt = VL_RAND_RESET_I(1);
    m_mem_valid = VL_RAND_RESET_I(1);
    m_mem_addr = VL_RAND_RESET_Q(64);
    m_mem_rdata = VL_RAND_RESET_Q(64);
    m_mem_wdata = VL_RAND_RESET_Q(64);
    m_mem_we = VL_RAND_RESET_I(1);
    m_mem_be = VL_RAND_RESET_I(8);
    m_mem_error = VL_RAND_RESET_I(1);
    ptw_busy_o = VL_RAND_RESET_I(1);
    ptw_valid_o = VL_RAND_RESET_I(1);
    access_type_i = VL_RAND_RESET_I(2);
    plb_entry_o = VL_RAND_RESET_Q(64);
    allow_o = VL_RAND_RESET_I(1);
    mpt64_top__DOT__next_state_d = VL_RAND_RESET_I(3);
    mpt64_top__DOT__curr_state_q = VL_RAND_RESET_I(3);
    mpt64_top__DOT__next_lookup_state_d = VL_RAND_RESET_I(2);
    mpt64_top__DOT__curr_lookup_state_q = VL_RAND_RESET_I(2);
    mpt64_top__DOT__spa_q = VL_RAND_RESET_Q(56);
    mpt64_top__DOT__mmpt_q = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__access_type_q = VL_RAND_RESET_I(2);
    mpt64_top__DOT__mptl_entry_q = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__plb_entry_d = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__plb_entry_q = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__access_page_fault_d = VL_RAND_RESET_I(1);
    mpt64_top__DOT__access_page_fault_q = VL_RAND_RESET_I(1);
    mpt64_top__DOT__format_error_cause_d = VL_RAND_RESET_I(3);
    mpt64_top__DOT__format_error_cause_q = VL_RAND_RESET_I(3);
    mpt64_top__DOT__next_look_up_addr = VL_RAND_RESET_Q(44);
    mpt64_top__DOT__mptl3_entry = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__mptl2_entry = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__mptl1_entry = VL_RAND_RESET_Q(64);
    mpt64_top__DOT__permissions = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
