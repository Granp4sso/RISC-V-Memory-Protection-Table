// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top__Syms.h"
#include "Vmptw_top___024root.h"

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__13(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 1U;
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 0U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                      [0U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                    [0U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                   || (1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [0U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [0U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__15(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 1U;
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 0U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else if (vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__17(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 1U;
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 0U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                      [2U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                    [2U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                   || (1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [2U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [2U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__19(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 1U;
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = 0U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = 1U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if (((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                      [3U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                    [3U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)) 
                   || (1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [3U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready)))));
        }
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [3U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data[8U];
        }
    }
}

void Vmptw_top___024root___nba_sequent__TOP__0(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___nba_sequent__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__0(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__2(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__3(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__5(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__6(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__7(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__8(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__9(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_sequent__TOP__2(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__2(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__10(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__2(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__14(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__10(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__11(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__12(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__13(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___nba_comb__TOP__21(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__15(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__9(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_comb__TOP__3(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__6(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_comb__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__10(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_comb__TOP__4(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__11(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_comb__TOP__5(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__12(Vmptw_top___024root* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___act_comb__TOP__0(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__7(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__8(Vmptw_top___024root* vlSelf);

void Vmptw_top___024root___eval_nba(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_nba\n"); );
    // Body
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x21000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x20200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x20008ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x20040ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x20080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((0x20002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x20004ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((0x20010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((0x20400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    if ((0x22000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__2((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__2((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__2((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__2((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x60000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
        Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___nba_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x2124aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x60001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
        Vmptw_top___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x60008ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    }
    if ((0x60020ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
        Vmptw_top___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x60040ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    }
    if ((0x60100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x30U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x60200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x31U] = 1U;
    }
    if ((0x60800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x32U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x61000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x33U] = 1U;
    }
    if ((0x64000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x34U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((0x60002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___nba_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x35U] = 1U;
    }
    if ((0x68000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
    }
    if ((0x6124bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
    }
    if ((0x60018ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
    }
    if ((0x60060ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x39U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x600c0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x3aU] = 1U;
    }
    if ((0x6134aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x3bU] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x60600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x3cU] = 1U;
    }
    if ((0x61a4aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x3dU] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x63000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x3eU] = 1U;
    }
    if ((0x6524aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x3fU] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x70002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x40U] = 1U;
    }
    if ((0x70006ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x41U] = 1U;
    }
    if ((0x78002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__8(vlSelf);
    }
}
