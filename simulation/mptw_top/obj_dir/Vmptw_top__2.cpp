// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

VL_INLINE_OPT void Vmptw_top::_combo__TOP__9(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__9\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                                [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_valid
            [0U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                               [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                 [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__to_walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                                [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_valid
            [1U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                               [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                 [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__to_walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                                [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_valid
            [2U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                               [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                 [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__to_walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                                [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_valid
            [3U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_valid
                               [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
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
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_valid
                 [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__to_walking_stage_valid
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
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffbffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0xfffffc00U & ((IData)((0U != (((QData)((IData)(
                                                              vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                   >> 4U))))) 
                             << 0xaU)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0x7ff800U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U]) 
           | ((0xfffffffcU & ((((0U != (7U & (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U] 
                                              >> 5U))) 
                                | ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U] 
                                    >> 9U) & (0U != 
                                              (((QData)((IData)(
                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                     >> 4U))))))
                                ? 3U : (3U & ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U] 
                                               << 0x1eU) 
                                              | (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U] 
                                                 >> 2U)))) 
                              << 2U)) | (3U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U])));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffc00U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | ((0x3e0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]) 
              | ((0xfffffff0U & ((IData)((0U != (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                       >> 4U))))) 
                                 << 4U)) | (0xfU & 
                                            vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]))));
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_ready[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_ready[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_ready[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_ready[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [0U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [0U] ? vlTOPp->mptw_top__DOT__walking_to_retire_ready
           [0U] : vlTOPp->mptw_top__DOT__to_walking_stage_ready
           [0U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_ready[0U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_ready
        [1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_ready[1U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [1U] ? vlTOPp->mptw_top__DOT__walking_to_retire_ready
           [1U] : vlTOPp->mptw_top__DOT__to_walking_stage_ready
           [2U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_ready[2U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [2U] ? vlTOPp->mptw_top__DOT__walking_to_retire_ready
           [2U] : vlTOPp->mptw_top__DOT__to_walking_stage_ready
           [3U]);
    vlTOPp->mptw_top__DOT__walking_to_demux_ready[3U] 
        = (vlTOPp->mptw_top__DOT__retire_demux_select
           [3U] ? vlTOPp->mptw_top__DOT__walking_to_retire_ready
           [3U] : vlTOPp->mptw_top__DOT__to_walking_stage_ready
           [4U]);
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
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready)) 
                         | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
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
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_demux_ready))) {
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
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_ready
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
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_ready
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
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [2U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_ready
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
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [3U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                              [3U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [0U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [1U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [2U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                          [3U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                                      [3U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
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
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
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
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
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
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                 [2U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_to_demux_ready
                 [3U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
        }
    }
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [0U];
    if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
    }
    if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid;
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
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                 & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
                vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
            vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__10(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__10(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__10(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__10(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__16(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__17(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__18(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__19(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__20(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
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
    __req |= ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)
         | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8])
        || (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
        || (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
        || (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
        || (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8])
        || (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear)
         | (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready)
         | (vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/plb_lookup_stage.sv:71: mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/parsing_stage.sv:53: mptw_top.last_parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/parsing_stage.sv:53: mptw_top.gen_walking_stages[0].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/parsing_stage.sv:53: mptw_top.gen_walking_stages[1].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/parsing_stage.sv:53: mptw_top.gen_walking_stages[2].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7]) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8] ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8]))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/parsing_stage.sv:53: mptw_top.gen_walking_stages[3].walking_stage_u.parsing_stage_u.output_transaction\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/retire_stage.sv:114: mptw_top.genblk1.retire_stage_u.rob_memory_clear\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/retire_stage.sv:127: mptw_top.genblk1.retire_stage_u.to_issue_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/retire_stage.sv:128: mptw_top.genblk1.retire_stage_u.to_commit_bus_valid\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
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
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
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
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
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
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
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
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
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
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__rob_memory_clear;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_issue_bus_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid 
        = vlTOPp->mptw_top__DOT__genblk1__DOT__retire_stage_u__DOT__to_commit_bus_valid;
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
