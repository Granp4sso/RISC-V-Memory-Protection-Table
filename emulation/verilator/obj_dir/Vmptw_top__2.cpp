// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

VL_INLINE_OPT void Vmptw_top::_combo__TOP__9(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__9\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [0U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [0U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [0U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [0U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U]) {
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [1U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [1U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [1U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [1U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U]) {
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [2U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [2U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [2U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [2U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U]) {
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [3U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [3U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [3U]) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [3U] & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U])))) {
                if (((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                      [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U]) | (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                                       [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U];
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U])))) {
                if (((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                      [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                     [1U])) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U]) | (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                                       [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U];
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                 [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][0U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][1U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][2U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][3U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][4U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][5U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][6U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][7U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][0U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][1U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][2U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][3U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][4U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][5U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][6U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][7U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][8U];
        }
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                 [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][0U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][1U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][2U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][3U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][4U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][5U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][6U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][7U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][0U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][1U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][2U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][3U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][4U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][5U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][6U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][7U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U])))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                               [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U])))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                               [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
    vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [0U] ? vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
           [0U] : vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
           [0U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[0U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
        [1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[1U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [1U] ? vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
           [1U] : vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
           [2U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[2U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [2U] ? vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
           [2U] : vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
           [3U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[3U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [3U] ? vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
           [3U] : vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
           [4U]);
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready)) 
                         | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [1U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [2U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [3U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [3U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [0U])))) {
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [1U])))) {
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [2U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [3U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__input_to_fetch_data_valid;
    }
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U])))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                     & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                     [1U])) {
                    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid;
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
            if (((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                 & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                 [0U])) {
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
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) {
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
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                 & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                     & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
        }
    }
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlTOPp->mptw_ready_o = 0U;
                if ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_ready_o = 0U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_ready_o = 0U;
                }
            }
        }
    }
    vlTOPp->busy_o = 0U;
    if ((4U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            vlTOPp->busy_o = 1U;
        }
    } else {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            vlTOPp->busy_o = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                vlTOPp->busy_o = 1U;
            } else {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    if (((IData)(vlTOPp->mptw_transaction_valid_i) 
                         & (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))) {
                        vlTOPp->busy_o = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 0U;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                    = ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)
                        ? ((IData)(vlTOPp->mptw_transaction_valid_i)
                            ? 1U : 0U) : 2U);
            }
        } else {
            vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                = ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))
                    ? ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))
                        ? 2U : 1U) : ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))
                                       ? 2U : (((IData)(vlTOPp->mptw_transaction_valid_i) 
                                                & (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))
                                                ? 1U
                                                : 0U)));
        }
    }
    vlTOPp->mptw_top__DOT__system_status_busy[0U] = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy;
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[8U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[7U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [7U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[6U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [6U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[5U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [5U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[4U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [4U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[3U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [3U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[2U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [2U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[1U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[0U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [0U];
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__11(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__11\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 0U;
    if ((2U & (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [8U])) {
                vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo 
                    = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                       [8U]);
            }
        }
    }
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__12(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__13(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__14(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__15(vlSymsp);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__21(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__22(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__23(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__24(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__26(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__27(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__28(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__29(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__30(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__7(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__8(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__9(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__10(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__36(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__37(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__38(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__39(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__40(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
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
    __req |= ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8])
         | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0])|| (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8])
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1])|| (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1])|| (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1])|| (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1])|| (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)
         | (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear)
         | (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready)
        || (vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid)
         | (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__stage_master_valid)
         | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid)
         | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid)
         | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid)
         | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7]) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/plb_lookup_stage.sv:64: mptw_top.plb_lookup_stage_u.input_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mpte_parsing_stage.sv:62: mptw_top.last_parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mpte_parsing_stage.sv:62: mptw_top.gen_walking_stages[0].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/forwarding_buffer.sv:86: mptw_top.gen_walking_stages[0].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mpte_parsing_stage.sv:62: mptw_top.gen_walking_stages[1].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/forwarding_buffer.sv:86: mptw_top.gen_walking_stages[1].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mpte_parsing_stage.sv:62: mptw_top.gen_walking_stages[2].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/forwarding_buffer.sv:86: mptw_top.gen_walking_stages[2].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mpte_parsing_stage.sv:62: mptw_top.gen_walking_stages[3].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/forwarding_buffer.sv:86: mptw_top.gen_walking_stages[3].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/retire_stage.sv:125: mptw_top.retire_stage_gen.retire_stage_u.rob_memory_clear\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/retire_stage.sv:144: mptw_top.retire_stage_gen.retire_stage_u.to_issue_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/retire_stage.sv:145: mptw_top.retire_stage_gen.retire_stage_u.to_commit_bus_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__stage_master_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/memory_read_stage.sv:40: stage_master_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/memory_read_stage.sv:40: stage_master_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/memory_read_stage.sv:40: stage_master_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/memory_read_stage.sv:40: stage_master_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/memory_read_stage.sv:40: stage_master_valid\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid 
        = vlTOPp->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__stage_master_valid 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
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
    if (VL_UNLIKELY((flush_all_i & 0xfeU))) {
        Verilated::overWidthError("flush_all_i");}
    if (VL_UNLIKELY((flush_spec_i & 0xfeU))) {
        Verilated::overWidthError("flush_spec_i");}
    if (VL_UNLIKELY((stall_i & 0xfeU))) {
        Verilated::overWidthError("stall_i");}
    if (VL_UNLIKELY((access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
    if (VL_UNLIKELY((speculative_i & 0xfeU))) {
        Verilated::overWidthError("speculative_i");}
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
