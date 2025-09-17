// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top___024root.h"

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__5(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__5\n"); );
    // Body
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = (0xfff000U | vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if (((IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid = 1U;
        }
    }
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready)))));
        }
    } else if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = 1U;
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = 0U;
    }
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if (((IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                = ((0xfffU & vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
                   | (0xffffffU & ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d) 
                                   << 0xcU)));
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q)));
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[0U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[1U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[2U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[3U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[4U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[5U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[6U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[7U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in 
                = (0xfffU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                             >> 0xcU));
        }
    }
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))) {
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 1U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[9U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xaU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xbU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xcU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xcU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xdU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xdU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xeU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xeU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xfU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xfU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x10U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x10U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x11U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x11U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x12U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x12U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x13U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x13U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x14U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x14U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x15U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x15U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x16U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x16U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x17U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x17U];
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if (((IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push = 1U;
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop = 0U;
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d 
            = ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        if (((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop = 1U;
        }
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d 
            = (((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)) 
                | (((1U == (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
                    & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)) 
                   & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push))))
                ? 0U : 1U);
    }
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d 
            = (((0x3fU == (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
                & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d 
            = ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)
                ? 0U : 1U);
    }
    vlSelf->mptw_top__DOT__issue_stage_master_ready[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))) {
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
            }
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
        } else {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x40U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q)));
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound_h02bd00d5__0 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in;
        if ((0x2ffU >= (0x3ffU & ((IData)(0xcU) * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(768,12,(0x3ffU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))), vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound_h02bd00d5__0);
        }
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop) 
         & (0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)));
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x7fU & ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push) 
           & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)) 
          & (0x40U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    }
    vlSelf->mptw_top__DOT__issue_stage_slave_ready[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))) {
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            }
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))) {
                    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))))) {
                    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__input_to_fetch_data_valid) {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
        } else {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__system_status_busy[0U] = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy;
    vlSelf->mptw_ready_o = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    vlSelf->busy_o = 0U;
    if ((4U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            vlSelf->busy_o = 1U;
        }
    } else if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        vlSelf->busy_o = 1U;
    } else if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        vlSelf->busy_o = 1U;
    } else if ((0U == (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
        if (((IData)(vlSelf->mptw_transaction_valid_i) 
             & (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))) {
            vlSelf->busy_o = 1U;
        }
    }
    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 0U;
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlSelf->mptw_ready_o = 0U;
                if ((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlSelf->mptw_ready_o = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                        = ((IData)(vlSelf->mptw_transaction_valid_i)
                            ? 1U : 0U);
                } else {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                vlSelf->mptw_ready_o = 0U;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
            } else {
                vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 1U;
            }
        } else if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
            vlSelf->mptw_ready_o = 0U;
            vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
        } else {
            vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                = (((IData)(vlSelf->mptw_transaction_valid_i) 
                    & (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))
                    ? 1U : 0U);
        }
    }
}

void Vmptw_top___024root___eval_triggers__ico(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___eval_ico(Vmptw_top___024root* vlSelf);

bool Vmptw_top___024root___eval_phase__ico(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmptw_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmptw_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h4d851b67_0;

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__0\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_19;
    // Body
    vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0U] 
        = (1U & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear)));
    vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1U] 
        = (1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 1U)));
    vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2U] 
        = (1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 2U)));
    vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3U] 
        = (1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 3U)));
    vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4U] 
        = (1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 4U)));
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[0U] 
        = (((0x7fU == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)) 
            | (0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))
            ? 0U : (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                [0U])))) {
        __Vtemp_3[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(1U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][(0x3ffU & (((IData)(0x118U) 
                                             * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                             [0U]) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(2U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(1U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(3U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(2U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(4U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(3U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(5U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(4U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(6U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(5U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(7U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(6U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(8U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(7U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
        __Vtemp_3[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(9U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(8U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [0U]))));
    } else {
        __Vtemp_3[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_3[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_3[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_3[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_3[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_3[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_3[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_3[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_3[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_3[0U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_3[1U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_3[2U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_3[3U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_3[4U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_3[5U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_3[6U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_3[7U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[0U][8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_3[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask 
        = ((0x1eU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
           | (1U & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                    [0U][8U] >> 0xaU)));
    if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                    [0U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                  [0U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [0U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[1U] 
        = (((0x7fU == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)) 
            | (0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))
            ? 0U : (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                [1U])))) {
        __Vtemp_7[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(1U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][(0x3ffU & (((IData)(0x118U) 
                                             * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                             [1U]) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(2U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(1U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(3U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(2U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(4U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(3U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(5U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(4U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(6U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(5U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(7U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(6U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(8U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(7U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
        __Vtemp_7[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(9U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(8U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                         [1U]))));
    } else {
        __Vtemp_7[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_7[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_7[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_7[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_7[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_7[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_7[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_7[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_7[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_7[0U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_7[1U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_7[2U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_7[3U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_7[4U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_7[5U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_7[6U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_7[7U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[1U][8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_7[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask 
        = ((0x1dU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
           | (2U & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                    [1U][8U] >> 9U)));
    if ((2U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                    [1U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                  [1U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [1U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[2U] 
        = (((0x7fU == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)) 
            | (0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))
            ? 0U : (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                [2U])))) {
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(1U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][(0x3ffU & (((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                              [2U]) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(2U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(1U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(3U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(2U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(4U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(3U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(5U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(4U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(6U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(5U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(7U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(6U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(8U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(7U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
        __Vtemp_11[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [2U][((IData)(9U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [2U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [2U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [2U][((IData)(8U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [2U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [2U]))));
    } else {
        __Vtemp_11[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_11[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_11[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_11[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_11[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_11[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_11[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_11[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_11[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_11[0U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_11[1U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_11[2U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_11[3U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_11[4U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_11[5U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_11[6U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_11[7U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[2U][8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_11[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask 
        = ((0x1bU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
           | (4U & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                    [2U][8U] >> 8U)));
    if ((4U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                    [2U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                  [2U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [2U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[3U] 
        = (((0x7fU == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)) 
            | (0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))
            ? 0U : (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                [3U])))) {
        __Vtemp_15[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(1U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][(0x3ffU & (((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                              [3U]) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(2U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(1U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(3U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(2U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(4U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(3U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(5U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(4U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(6U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(5U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(7U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(6U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(8U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(7U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
        __Vtemp_15[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(9U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(8U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [3U]))));
    } else {
        __Vtemp_15[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_15[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_15[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_15[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_15[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_15[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_15[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_15[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_15[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_15[0U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_15[1U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_15[2U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_15[3U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_15[4U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_15[5U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_15[6U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_15[7U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[3U][8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_15[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask 
        = ((0x17U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
           | (8U & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                    [3U][8U] >> 7U)));
    if ((8U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                    [3U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                  [3U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [3U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[4U] 
        = (((0x7fU == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)) 
            | (0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))
            ? 0U : (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id)));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                [4U])))) {
        __Vtemp_19[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(1U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][(0x3ffU & (((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                              [4U]) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(2U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(1U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(3U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(2U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(4U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(3U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(5U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(4U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(6U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(5U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(7U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(6U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(8U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(7U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
        __Vtemp_19[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(9U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(8U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                          [4U]))));
    } else {
        __Vtemp_19[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_19[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_19[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_19[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_19[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_19[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_19[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_19[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_19[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_19[0U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_19[1U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_19[2U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_19[3U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_19[4U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_19[5U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_19[6U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_19[7U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[4U][8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_19[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask 
        = ((0xfU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
           | (0x10U & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                       [4U][8U] >> 6U)));
    if ((0x10U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                    [4U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr
                                                  [4U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [4U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0);
        }
    }
    if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [4U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                     >> 4U)))))) {
                if ((1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                               [4U]) & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                           >> 4U)))))) {
                    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [0U][8U];
    }
    if ((2U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [1U][8U];
    }
    if ((4U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [2U][8U];
    }
    if ((8U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [3U][8U];
    }
    if ((0x10U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
            [4U][8U];
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready;
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__1(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__1\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[4U] = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                      << 4U) | ((((0x400U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                                   ? 2U : (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                 >> 2U))) 
                                 << 2U) | (3U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = __Vtemp_1[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
            >> 0x1cU) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) << 4U));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U]) 
           | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                       >> 0x20U)) >> 0x1cU));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U]) 
           | ((0x400U & ((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                          << 5U) | vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])) 
              | ((0x200U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U]) 
                 | (((IData)((0x300U == (0x300U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U]))) 
                     << 8U) | ((((0x200U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])
                                  ? (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                           >> 5U)) : 0U) 
                                << 5U) | ((0xfU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U]) 
                                          | (0x10U 
                                             & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])))))));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__6(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__6\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[8U] = ((0x200U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [4U][8U]) | ((0x100U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                [4U][8U] 
                                                >> 1U) 
                                               & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                               [4U][8U])) 
                                    | ((((0x200U & 
                                          vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                          [4U][8U])
                                          ? (7U & (
                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                   [4U][8U] 
                                                   >> 5U))
                                          : 0U) << 5U) 
                                       | ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [4U][8U]) 
                                          | (0x10U 
                                             & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                             [4U][8U])))));
    __Vtemp_1[4U] = (((IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr) 
                      << 4U) | ((((0x400U & vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U])
                                   ? 2U : (3U & (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [4U][4U] 
                                                 >> 2U))) 
                                 << 2U) | (3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [4U][4U])));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [4U][0U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [4U][1U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [4U][2U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [4U][3U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
        = __Vtemp_1[4U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U] 
        = (((IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr) 
            >> 0x1cU) | ((IData)((vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) << 4U));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [4U][6U]) | ((IData)((vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [4U][7U]) | (0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [4U][7U]));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = (0x400U | ((0xfff800U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                      [4U][8U]) | __Vtemp_13[8U]));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o 
        = (7U & (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__7(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__7\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[8U] = ((0x200U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [0U][8U]) | ((0x100U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                [0U][8U] 
                                                >> 1U) 
                                               & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                               [0U][8U])) 
                                    | ((((0x200U & 
                                          vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                          [0U][8U])
                                          ? (7U & (
                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                   [0U][8U] 
                                                   >> 5U))
                                          : 0U) << 5U) 
                                       | ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [0U][8U]) 
                                          | (0x10U 
                                             & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                             [0U][8U])))));
    __Vtemp_1[4U] = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                      << 4U) | ((((0x400U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                                   ? 2U : (3U & (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [0U][4U] 
                                                 >> 2U))) 
                                 << 2U) | (3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [0U][4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [0U][0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [0U][1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [0U][2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [0U][3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = __Vtemp_1[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
            >> 0x1cU) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) << 4U));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [0U][6U]) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [0U][7U]) | (0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [0U][7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [0U][8U]) | ((0x400U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][6U] << 5U) 
                                    | vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [0U][8U])) | __Vtemp_13[8U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__8(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__8\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[8U] = ((0x200U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [2U][8U]) | ((0x100U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][8U] 
                                                >> 1U) 
                                               & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                               [2U][8U])) 
                                    | ((((0x200U & 
                                          vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                          [2U][8U])
                                          ? (7U & (
                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                   [2U][8U] 
                                                   >> 5U))
                                          : 0U) << 5U) 
                                       | ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [2U][8U]) 
                                          | (0x10U 
                                             & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                             [2U][8U])))));
    __Vtemp_1[4U] = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                      << 4U) | ((((0x400U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                                   ? 2U : (3U & (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [2U][4U] 
                                                 >> 2U))) 
                                 << 2U) | (3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [2U][4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [2U][0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [2U][1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [2U][2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [2U][3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = __Vtemp_1[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
            >> 0x1cU) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) << 4U));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [2U][6U]) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [2U][7U]) | (0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [2U][7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [2U][8U]) | ((0x400U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][6U] << 5U) 
                                    | vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][8U])) | __Vtemp_13[8U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__9(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__9\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[8U] = ((0x200U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [3U][8U]) | ((0x100U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                [3U][8U] 
                                                >> 1U) 
                                               & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                               [3U][8U])) 
                                    | ((((0x200U & 
                                          vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                          [3U][8U])
                                          ? (7U & (
                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                   [3U][8U] 
                                                   >> 5U))
                                          : 0U) << 5U) 
                                       | ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [3U][8U]) 
                                          | (0x10U 
                                             & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                             [3U][8U])))));
    __Vtemp_1[4U] = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                      << 4U) | ((((0x400U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                                   ? 2U : (3U & (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [3U][4U] 
                                                 >> 2U))) 
                                 << 2U) | (3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                           [3U][4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [3U][0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [3U][1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [3U][2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__to_walking_stage_data_data
        [3U][3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = __Vtemp_1[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
            >> 0x1cU) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) << 4U));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [3U][6U]) | ((IData)((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [3U][7U]) | (0xfffffff0U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [3U][7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
            [3U][8U]) | ((0x400U & ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][6U] << 5U) 
                                    | vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][8U])) | __Vtemp_13[8U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__15(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__15\n"); );
    // Body
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = (0xfff000U | vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U]);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready = 0U;
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if (((IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid = 1U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                = ((0xfffU & vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
                   | (0xffffffU & ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d) 
                                   << 0xcU)));
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q)));
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[0U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[1U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[2U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[3U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[4U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[5U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[6U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[7U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in 
                = (0xfffU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                             >> 0xcU));
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push = 1U;
        }
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
            }
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready))) {
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
            }
        }
    } else if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 1U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[9U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xaU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xbU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xcU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xcU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xdU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xdU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xeU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xeU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xfU] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xfU];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x10U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x10U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x11U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x11U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x12U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x12U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x13U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x13U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x14U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x14U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x15U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x15U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x16U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x16U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x17U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x17U];
    if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x40U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q)));
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound_h02bd00d5__0 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in;
        if ((0x2ffU >= (0x3ffU & ((IData)(0xcU) * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(768,12,(0x3ffU & ((IData)(0xcU) 
                                              * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))), vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound_h02bd00d5__0);
        }
    }
    vlSelf->mptw_top__DOT__issue_stage_master_ready[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))) {
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
            }
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready))))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__fetch_to_issue_data_valid) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
        } else {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
    }
    vlSelf->mptw_top__DOT__issue_stage_slave_ready[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))) {
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            }
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))) {
                    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready))))) {
                    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__input_to_fetch_data_valid) {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
        } else {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__system_status_busy[0U] = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy;
    vlSelf->mptw_ready_o = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    vlSelf->busy_o = 0U;
    if ((4U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            vlSelf->busy_o = 1U;
        }
    } else if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        vlSelf->busy_o = 1U;
    } else if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        vlSelf->busy_o = 1U;
    } else if ((0U == (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
        if (((IData)(vlSelf->mptw_transaction_valid_i) 
             & (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))) {
            vlSelf->busy_o = 1U;
        }
    }
    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 0U;
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlSelf->mptw_ready_o = 0U;
                if ((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlSelf->mptw_ready_o = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                        = ((IData)(vlSelf->mptw_transaction_valid_i)
                            ? 1U : 0U);
                } else {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                vlSelf->mptw_ready_o = 0U;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
            } else {
                vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 1U;
            }
        } else if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
            vlSelf->mptw_ready_o = 0U;
            vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 2U;
        } else {
            vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                = (((IData)(vlSelf->mptw_transaction_valid_i) 
                    & (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))
                    ? 1U : 0U);
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__0\n"); );
    // Init
    VlWide<9>/*279:0*/ mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0;
    VL_ZERO_W(280, mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0);
    VlWide<9>/*279:0*/ mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0;
    VL_ZERO_W(280, mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0);
    VlWide<9>/*279:0*/ mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0;
    VL_ZERO_W(280, mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0);
    VlWide<9>/*279:0*/ mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0;
    VL_ZERO_W(280, mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0);
    VlWide<9>/*279:0*/ mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0;
    VL_ZERO_W(280, mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0);
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<9>/*287:0*/ __Vtemp_9;
    VlWide<9>/*287:0*/ __Vtemp_12;
    VlWide<9>/*287:0*/ __Vtemp_15;
    // Body
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear = 0U;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy = 0U;
    if ((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
            if (((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
                 & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready))) {
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid = 1U;
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear = 0x1fU;
            }
        }
    }
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                    [4U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                               >> 4U))) || (1U & (~ 
                                                  ((~ 
                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                                    [4U]) 
                                                   & (~ 
                                                      ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                                       >> 4U))))));
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [4U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                     >> 4U)))))) {
                if ((1U & ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                            [4U]) & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                        >> 4U))))) {
                    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [4U]) {
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
    } else {
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[0U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [0U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[0U] 
        = (0x3fU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                    [0U][8U] >> 0xcU));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [0U])))) {
        __Vtemp_3[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(1U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][(0x3ffU & (((IData)(0x118U) 
                                             * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                             [0U]) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(2U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(1U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(3U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(2U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(4U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(3U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(5U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(4U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(6U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(5U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(7U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(6U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(8U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(7U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
        __Vtemp_3[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [0U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [0U][((IData)(9U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [0U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [0U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [0U][((IData)(8U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [0U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [0U]))));
    } else {
        __Vtemp_3[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_3[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_3[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_3[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_3[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_3[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_3[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_3[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_3[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_3[0U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_3[1U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_3[2U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_3[3U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_3[4U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_3[5U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_3[6U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_3[7U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0[8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_3[8U]);
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [0U])))) {
        VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [0U])), 
                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                        [0U], mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__0);
    }
    if ((vlSelf->mptw_top__DOT__walking_to_retire_data_valid
         [0U] & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [0U][8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                    [0U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                  [0U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [0U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[1U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [1U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[1U] 
        = (0x3fU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                    [1U][8U] >> 0xcU));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [1U])))) {
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(1U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][(0x3ffU & (((IData)(0x118U) 
                                             * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                             [1U]) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(2U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(1U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(3U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(2U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(4U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(3U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(5U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(4U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(6U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(5U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(7U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(6U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(8U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(7U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
        __Vtemp_6[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [1U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [1U][((IData)(9U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [1U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [1U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [1U][((IData)(8U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [1U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [1U]))));
    } else {
        __Vtemp_6[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_6[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_6[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_6[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_6[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_6[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_6[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_6[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_6[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_6[0U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_6[1U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_6[2U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_6[3U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_6[4U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_6[5U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_6[6U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_6[7U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0[8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_6[8U]);
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [1U])))) {
        VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [1U])), 
                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                        [1U], mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__0);
    }
    if ((vlSelf->mptw_top__DOT__walking_to_retire_data_valid
         [1U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 1U)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [1U][8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                    [1U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                  [1U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [1U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[2U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [2U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[2U] 
        = (0x3fU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                    [2U][8U] >> 0xcU));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [2U])))) {
        __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(1U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][(0x3ffU & (((IData)(0x118U) 
                                             * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                             [2U]) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(2U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(1U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(3U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(2U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(4U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(3U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(5U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(4U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(6U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(5U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(7U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(6U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(8U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(7U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
        __Vtemp_9[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                           * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                           [2U]))) ? 0U
                           : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                              [2U][((IData)(9U) + (0x3ffU 
                                                   & (((IData)(0x118U) 
                                                       * 
                                                       vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                       [2U]) 
                                                      >> 5U)))] 
                              << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [2U]))))) 
                         | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                            [2U][((IData)(8U) + (0x3ffU 
                                                 & (((IData)(0x118U) 
                                                     * 
                                                     vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                     [2U]) 
                                                    >> 5U)))] 
                            >> (0x1fU & ((IData)(0x118U) 
                                         * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                         [2U]))));
    } else {
        __Vtemp_9[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_9[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_9[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_9[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_9[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_9[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_9[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_9[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_9[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_9[0U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_9[1U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_9[2U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_9[3U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_9[4U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_9[5U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_9[6U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_9[7U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0[8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_9[8U]);
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [2U])))) {
        VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [2U])), 
                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                        [2U], mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__0);
    }
    if ((vlSelf->mptw_top__DOT__walking_to_retire_data_valid
         [2U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 2U)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [2U][8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                    [2U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                  [2U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [2U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[3U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [3U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[3U] 
        = (0x3fU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                    [3U][8U] >> 0xcU));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [3U])))) {
        __Vtemp_12[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(1U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][(0x3ffU & (((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [3U]) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(2U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(1U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(3U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(2U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(4U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(3U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(5U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(4U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(6U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(5U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(7U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(6U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(8U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(7U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
        __Vtemp_12[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [3U][((IData)(9U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [3U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [3U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [3U][((IData)(8U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [3U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [3U]))));
    } else {
        __Vtemp_12[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_12[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_12[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_12[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_12[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_12[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_12[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_12[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_12[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_12[0U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_12[1U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_12[2U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_12[3U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_12[4U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_12[5U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_12[6U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_12[7U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0[8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_12[8U]);
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [3U])))) {
        VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [3U])), 
                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                        [3U], mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__0);
    }
    if ((vlSelf->mptw_top__DOT__walking_to_retire_data_valid
         [3U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 3U)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [3U][8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                    [3U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                  [3U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [3U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[4U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
        [4U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[4U] 
        = (0x3fU & (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                    [4U][8U] >> 0xcU));
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [4U])))) {
        __Vtemp_15[0U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(1U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][(0x3ffU & (((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [4U]) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[1U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(2U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(1U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[2U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(3U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(2U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[3U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(4U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(3U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[4U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(5U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(4U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[5U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(6U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(5U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[6U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(7U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(6U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[7U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(8U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(7U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
        __Vtemp_15[8U] = (((0U == (0x1fU & ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U])))
                            ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                    [4U][((IData)(9U) 
                                          + (0x3ffU 
                                             & (((IData)(0x118U) 
                                                 * 
                                                 vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                 [4U]) 
                                                >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x118U) 
                                            * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                            [4U]))))) 
                          | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                             [4U][((IData)(8U) + (0x3ffU 
                                                  & (((IData)(0x118U) 
                                                      * 
                                                      vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                      [4U]) 
                                                     >> 5U)))] 
                             >> (0x1fU & ((IData)(0x118U) 
                                          * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                          [4U]))));
    } else {
        __Vtemp_15[0U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        __Vtemp_15[1U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        __Vtemp_15[2U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        __Vtemp_15[3U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        __Vtemp_15[4U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        __Vtemp_15[5U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        __Vtemp_15[6U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        __Vtemp_15[7U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        __Vtemp_15[8U] = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[0U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
           & __Vtemp_15[0U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[1U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
           & __Vtemp_15[1U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[2U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
           & __Vtemp_15[2U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[3U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
           & __Vtemp_15[3U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[4U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
           & __Vtemp_15[4U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[5U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
           & __Vtemp_15[5U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[6U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
           & __Vtemp_15[6U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[7U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
           & __Vtemp_15[7U]);
    mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0[8U] 
        = (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
           & __Vtemp_15[8U]);
    if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                [4U])))) {
        VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                              * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                              [4U])), 
                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                        [4U], mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__0);
    }
    if ((vlSelf->mptw_top__DOT__walking_to_retire_data_valid
         [4U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                    >> 4U)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
            [4U][8U];
        if ((0x45ffU >= (0x7fffU & ((IData)(0x118U) 
                                    * vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                    [4U])))) {
            VL_ASSIGNSEL_WW(17920,280,(0x7fffU & ((IData)(0x118U) 
                                                  * 
                                                  vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr
                                                  [4U])), 
                            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                            [4U], vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1);
        }
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[0U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[1U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[2U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[3U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[4U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[5U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[6U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[7U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[8U] 
        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready = 1U;
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid)))) {
                if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid)))) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
                if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid) {
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state = 1U;
        } else {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state = 0U;
        }
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready = 1U;
    }
    if ((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
            if (((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
                 & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready))) {
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[0U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[1U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[2U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[3U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[4U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[5U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[6U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[7U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction[8U];
            }
        }
    }
    vlSelf->mptw_top__DOT__system_status_busy[7U] = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
            if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid) {
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[0U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[1U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[2U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[3U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[4U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[5U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[6U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[7U];
                vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[0U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[1U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[2U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[3U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[4U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[5U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[6U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[7U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__1(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if (((IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [0U] ? vlSelf->mptw_top__DOT__walking_to_retire_data_ready
           [0U] : vlSelf->mptw_top__DOT__to_walking_stage_data_ready
           [0U]);
    vlSelf->mptw_top__DOT__walking_to_demux_data_ready[1U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [1U] ? vlSelf->mptw_top__DOT__walking_to_retire_data_ready
           [1U] : vlSelf->mptw_top__DOT__to_walking_stage_data_ready
           [2U]);
    vlSelf->mptw_top__DOT__walking_to_demux_data_ready[2U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [2U] ? vlSelf->mptw_top__DOT__walking_to_retire_data_ready
           [2U] : vlSelf->mptw_top__DOT__to_walking_stage_data_ready
           [3U]);
    vlSelf->mptw_top__DOT__walking_to_demux_data_ready[3U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [3U] ? vlSelf->mptw_top__DOT__walking_to_retire_data_ready
           [3U] : vlSelf->mptw_top__DOT__to_walking_stage_data_ready
           [4U]);
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__3(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                 [0U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
            [0U]) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__4(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                 [2U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
            [2U]) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__5(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                 [3U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
            [3U]) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__7(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                 [4U] & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                            >> 4U)))) {
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
            [4U]) {
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__8(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop = 0U;
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d 
            = ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        if (((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask)) 
             & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop = 1U;
        }
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d 
            = (((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)) 
                | (((1U == (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
                    & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)) 
                   & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push))))
                ? 0U : 1U);
    }
    if ((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d 
            = (((0x3fU == (0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
                & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d 
            = ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)
                ? 0U : 1U);
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x40U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop) 
         & (0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)));
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x7fU & ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push) 
           & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop)) 
          & (0x40U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    }
}

extern const VlWide<512>/*16383:0*/ Vmptw_top__ConstPool__CONST_h848c803d_0;
extern const VlWide<560>/*17919:0*/ Vmptw_top__ConstPool__CONST_h362a8eda_0;

VL_INLINE_OPT void Vmptw_top___024root___nba_sequent__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 = 0;
    VlWide<560>/*17919:0*/ __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v0;
    VL_ZERO_W(17920, __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v0);
    VlWide<560>/*17919:0*/ __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v1;
    VL_ZERO_W(17920, __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v1);
    VlWide<560>/*17919:0*/ __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v2;
    VL_ZERO_W(17920, __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v2);
    VlWide<560>/*17919:0*/ __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v3;
    VL_ZERO_W(17920, __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v3);
    VlWide<560>/*17919:0*/ __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v4;
    VL_ZERO_W(17920, __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v4);
    // Body
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo)))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q = 0U;
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q 
            = ((0x40U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d))
                ? 0U : (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d));
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d;
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state));
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [6U])))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = 0U;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, Vmptw_top__ConstPool__CONST_h848c803d_0);
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    }
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [5U])))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = 0U;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, Vmptw_top__ConstPool__CONST_h848c803d_0);
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    }
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [4U])))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = 0U;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, Vmptw_top__ConstPool__CONST_h848c803d_0);
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    }
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [3U])))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = 0U;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, Vmptw_top__ConstPool__CONST_h848c803d_0);
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d;
        VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state));
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [0U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [0U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [1U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [1U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [6U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [6U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [5U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [5U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [3U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [3U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [4U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [4U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [1U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [1U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [6U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [6U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [5U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [5U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [4U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [4U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [3U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [3U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [7U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [7U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [3U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [3U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [2U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [2U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [6U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [6U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [5U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [5U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
        = ((IData)(vlSelf->rst_ni) && ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                        [4U]) ? ((1U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [4U]) 
                                                 && ((~ 
                                                      (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                                       >> 0xbU)) 
                                                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                                        : (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)));
    if (vlSelf->rst_ni) {
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v0, 
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                    [0U]);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v1, 
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                    [1U]);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v2, 
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                    [2U]);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v3, 
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                    [3U]);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v4, 
                    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                    [4U]);
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
        vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
            = vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d;
        vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q 
            = vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d;
        vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
            = vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q 
            = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d;
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [0U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [0U])) {
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else if ((0x800U & vlSelf->mptw_top__DOT__fetch_to_issue_data_data[8U])) {
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U];
                vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                    = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U];
            }
        } else {
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [1U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [1U])) {
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                if ((0x800U & vlSelf->mptw_top__DOT__issue_to_backend_data_data[8U])) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[8U])) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
                }
            }
        } else {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [6U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [6U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
                }
            }
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [5U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [5U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
                }
            }
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [3U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [3U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
                }
            }
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [4U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [4U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
                }
                if ((0x800U & vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[8U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
                } else {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
                }
            }
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d[8U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [7U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [7U])) {
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else if ((0x800U & vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[8U])) {
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
            }
        } else {
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        }
        if ((0U != vlSelf->mptw_top__DOT__system_control_flush
             [2U])) {
            if ((1U == vlSelf->mptw_top__DOT__system_control_flush
                 [2U])) {
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else if ((0x800U & vlSelf->mptw_top__DOT__plb_output_transaction[8U])) {
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                    = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            } else {
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U];
            }
        } else {
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U];
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U];
        }
    } else {
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v0, Vmptw_top__ConstPool__CONST_h362a8eda_0);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v1, Vmptw_top__ConstPool__CONST_h362a8eda_0);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v2, Vmptw_top__ConstPool__CONST_h362a8eda_0);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v3, Vmptw_top__ConstPool__CONST_h362a8eda_0);
        VL_ASSIGN_W(17920,__Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v4, Vmptw_top__ConstPool__CONST_h362a8eda_0);
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q = 0U;
        vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q = 0U;
        vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q = 0U;
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    VL_ASSIGN_W(17920,vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                [0U], __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v0);
    VL_ASSIGN_W(17920,vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                [1U], __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v1);
    VL_ASSIGN_W(17920,vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                [2U], __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v2);
    VL_ASSIGN_W(17920,vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                [3U], __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v3);
    VL_ASSIGN_W(17920,vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                [4U], __Vdlyvval__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q__v4);
    vlSelf->plb_entry_o = (((QData)((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[2U])));
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][0U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][1U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][2U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][3U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][4U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][5U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][6U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][7U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[1U][8U] 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_to_commit_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__retire_to_commit_data_valid = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((1U & (~ (IData)((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q))))) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i = 9U;
                }
            }
        }
    }
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__backend_to_issue_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__backend_to_issue_data_valid = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk2__DOT__i = 5U;
        }
    }
    if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__fetch_to_issue_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__fetch_to_issue_data_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    vlSelf->mptw_result_valid_o = vlSelf->mptw_top__DOT__retire_to_commit_data_valid;
    vlSelf->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlSelf->mptw_top__DOT__backend_to_issue_data_valid;
    vlSelf->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlSelf->mptw_top__DOT__fetch_to_issue_data_valid;
    vlSelf->mptw_top__DOT__issue_stage_master_valid[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
    vlSelf->mptw_top__DOT__issue_stage_master_valid[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[4U] 
        = vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[1U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[0U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[3U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[2U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[1U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q);
    vlSelf->mptw_top__DOT__system_control_flush[0U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 2U));
    vlSelf->mptw_top__DOT__system_control_flush[1U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 4U));
    vlSelf->mptw_top__DOT__system_control_flush[2U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 6U));
    vlSelf->mptw_top__DOT__system_control_flush[3U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 8U));
    vlSelf->mptw_top__DOT__system_control_flush[4U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xaU));
    vlSelf->mptw_top__DOT__system_control_flush[5U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xcU));
    vlSelf->mptw_top__DOT__system_control_flush[6U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xeU));
    vlSelf->mptw_top__DOT__system_control_flush[7U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 
        = (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0x10U));
    vlSelf->mptw_top__DOT__system_control_flush[8U] 
        = mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[0U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[1U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[2U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[3U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[4U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[5U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[6U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[7U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__fetch_to_issue_data_data[8U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][0U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][1U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][2U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][3U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][4U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][5U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][6U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][7U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_slave_data[0U][8U] 
        = vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_to_backend_data_data[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[0U][8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[4U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[4U]) 
           | (0xfU & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U]));
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[6U] 
        = ((0xfU & vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[6U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U]));
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U]));
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0xfff800U & vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0xffffffU & ((0xfU & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U]) 
                           | (0x7f0U & vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U]))));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_master_data[1U][8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data[8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[4U][8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_to_retire_data_data[4U][8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_output_transaction[0U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                  >> 5U)))) {
        if ((1U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    >> 0x1cU))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
                = VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U])))), 0xcU);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
                = (0x1ffU & ((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                              << 0x1eU) | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                           >> 2U)));
        } else {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
                = VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U])) 
                                                    >> 0xeU)))), 0xcU);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
                = (0x1ffU & ((2U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                     >> 0x1cU)) ? (
                                                   (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                      >> 2U))
                              : ((3U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                         >> 0x1cU))
                                  ? ((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                      << 0x1eU) | (
                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                   >> 2U))
                                  : 0U)));
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)), 3U));
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__to_walking_stage_data_data[1U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[0U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__plb_output_transaction[0U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__plb_output_transaction[1U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__plb_output_transaction[2U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__plb_output_transaction[3U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__plb_output_transaction[4U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__plb_output_transaction[5U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__plb_output_transaction[6U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__plb_output_transaction[7U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__plb_output_transaction[8U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_demux_select[0U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_output_transaction[3U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[3U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_demux_select[3U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_output_transaction[2U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[2U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_demux_select[2U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q;
    vlSelf->mptw_top__DOT__system_status_flushed[0U] 
        = ((0U != vlSelf->mptw_top__DOT__system_control_flush
            [0U]) ? 3U : 0U);
    vlSelf->mptw_top__DOT__system_status_flushed[1U] 
        = (((3U == ((0U != vlSelf->mptw_top__DOT__system_control_flush
                     [1U]) ? 3U : 0U)) & (3U == ((0U 
                                                  != 
                                                  vlSelf->mptw_top__DOT__system_control_flush
                                                  [1U])
                                                  ? 3U
                                                  : 0U)))
            ? 3U : (((0U != ((0U != vlSelf->mptw_top__DOT__system_control_flush
                              [1U]) ? 3U : 0U)) | (0U 
                                                   != 
                                                   ((0U 
                                                     != 
                                                     vlSelf->mptw_top__DOT__system_control_flush
                                                     [1U])
                                                     ? 3U
                                                     : 0U)))
                     ? 1U : 0U));
    vlSelf->mptw_top__DOT__system_status_flushed[7U] 
        = ((0U != vlSelf->mptw_top__DOT__system_control_flush
            [7U]) ? 3U : 0U);
    vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk3__DOT__i = 5U;
            vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0U] = 0U;
            vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1U] = 0U;
            vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2U] = 0U;
            vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3U] = 0U;
            vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4U] = 0U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d 
                = ((0U != vlSelf->mptw_top__DOT__system_control_flush
                    [8U]) ? 3U : 0U);
            vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 3U;
        }
    } else if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4U] = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 3U;
        vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 3U;
    } else if ((0U != vlSelf->mptw_top__DOT__system_control_flush
                [8U])) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d 
            = ((1U == vlSelf->mptw_top__DOT__system_control_flush
                [8U]) ? 1U : 2U);
        vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 1U;
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 0U;
    }
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_output_transaction[1U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__walking_to_demux_data_data[1U][8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlSelf->mptw_top__DOT__retire_demux_select[1U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U])) {
        if ((1U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    >> 0x1cU))) {
            if ((2U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        >> 0x1cU))) {
                if ((3U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                            >> 0x1cU))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                       >> 0x1cU)) ? 0U : (0xfU & ((2U 
                                                   == 
                                                   (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                    >> 0x1cU))
                                                   ? 
                                                  ((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                    << 0x19U) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                      >> 7U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                     >> 0x1cU))
                                                    ? 
                                                   ((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                     << 0x19U) 
                                                    | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                       >> 7U))
                                                    : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[
                                   (((IData)(0xd0U) 
                                     + (0x3fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xceU) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[
                            (((IData)(0xceU) + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0xceU) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    } else if ((1U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                       >> 0x1cU))) {
        if ((2U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                    >> 0x1cU))) {
            if ((3U != (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        >> 0x1cU))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
            }
        }
    }
    vlSelf->mptw_top__DOT__system_status_flushed[8U] 
        = vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed;
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[0U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [0U] && (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid));
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[1U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [1U] && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [1U]);
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[2U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [2U] && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [2U]);
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[3U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [3U] && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [3U]);
    if (vlSelf->mptw_top__DOT__retire_demux_select[0U]) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][0U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][1U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][2U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][3U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][4U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][5U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][6U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][7U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][8U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    } else {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][0U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][1U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][2U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][3U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][4U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][5U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][6U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][7U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[0U][8U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[0U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    if (vlSelf->mptw_top__DOT__retire_demux_select[1U]) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][8U];
    } else {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[2U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [1U][8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[1U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    if (vlSelf->mptw_top__DOT__retire_demux_select[2U]) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][8U];
    } else {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[3U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [2U][8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[2U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    if (vlSelf->mptw_top__DOT__retire_demux_select[3U]) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][8U];
    } else {
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][0U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][0U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][1U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][1U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][2U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][2U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][3U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][3U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][4U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][4U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][5U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][5U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][6U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][6U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][7U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][7U];
        vlSelf->mptw_top__DOT__to_walking_stage_data_data[4U][8U] 
            = vlSelf->mptw_top__DOT__walking_to_demux_data_data
            [3U][8U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__walking_to_retire_data_data[3U][8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[0U] 
        = ((1U & (~ vlSelf->mptw_top__DOT__retire_demux_select
                  [0U])) && (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid));
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[2U] 
        = ((1U & (~ vlSelf->mptw_top__DOT__retire_demux_select
                  [1U])) && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [1U]);
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[3U] 
        = ((1U & (~ vlSelf->mptw_top__DOT__retire_demux_select
                  [2U])) && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [2U]);
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[4U] 
        = ((1U & (~ vlSelf->mptw_top__DOT__retire_demux_select
                  [3U])) && vlSelf->mptw_top__DOT__walking_to_demux_data_valid
           [3U]);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                  [4U][6U] >> 5U)))) {
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address 
            = VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                           [4U][8U])) 
                                           << 0x32U) 
                                          | (((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [4U][7U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [4U][6U])) 
                                                >> 0xeU)))), 0xcU);
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = 0U;
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
            = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                  [0U][6U] >> 5U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [0U][1U] >> 0x1cU)) ? VL_SHIFTL_QQI(64,64,32, 
                                                           (0xfffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                                [0U][0U])))), 0xcU)
                : VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                               [0U][8U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                  [0U][7U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                    [0U][6U])) 
                                                    >> 0xeU)))), 0xcU));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [0U][1U] >> 0x1cU)) ? 0U : (0x1ffU 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                        [0U][1U] 
                                                        >> 0x1cU))
                                                       ? 
                                                      ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                        [0U][3U] 
                                                        << 0x15U) 
                                                       | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                          [0U][3U] 
                                                          >> 0xbU))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                         [0U][1U] 
                                                         >> 0x1cU))
                                                        ? 
                                                       ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                         [0U][3U] 
                                                         << 0x15U) 
                                                        | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                           [0U][3U] 
                                                           >> 0xbU))
                                                        : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)), 3U));
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                  [2U][6U] >> 5U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                           [2U][8U])) 
                                           << 0x32U) 
                                          | (((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [2U][7U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [2U][6U])) 
                                                >> 0xeU)))), 0xcU);
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][1U] >> 0x1cU))
                          ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                              [2U][3U] << 7U) | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [2U][2U] 
                                                 >> 0x19U))
                          : ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][1U] >> 0x1cU))
                              ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [2U][3U] << 7U) | 
                                 (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [2U][2U] >> 0x19U))
                              : ((3U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                         [2U][1U] >> 0x1cU))
                                  ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][3U] << 7U) 
                                     | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                        [2U][2U] >> 0x19U))
                                  : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)), 3U));
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                  [3U][6U] >> 5U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = VL_SHIFTL_QQI(64,64,32, (0xfffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                           [3U][8U])) 
                                           << 0x32U) 
                                          | (((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [3U][7U])) 
                                              << 0x12U) 
                                             | ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [3U][6U])) 
                                                >> 0xeU)))), 0xcU);
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][1U] >> 0x1cU))
                          ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                              [3U][2U] << 0x10U) | 
                             (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                              [3U][2U] >> 0x10U)) : 
                         ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [3U][1U] >> 0x1cU))
                           ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [3U][2U] << 0x10U) | 
                              (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [3U][2U] >> 0x10U)) : 
                          ((3U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [3U][1U] >> 0x1cU))
                            ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [3U][2U] << 0x10U) 
                               | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [3U][2U] >> 0x10U))
                            : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)), 3U));
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][0U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][1U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][2U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][3U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][4U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][5U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][6U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][7U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[0U][8U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [0U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][0U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][1U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][2U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][3U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][4U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][5U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][6U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][7U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[1U][8U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [1U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][0U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][1U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][2U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][3U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][4U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][5U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][6U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][7U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[2U][8U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [2U][8U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][0U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][0U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][1U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][1U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][2U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][2U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][3U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][3U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][4U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][4U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][5U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][5U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][6U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][6U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][7U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][7U];
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[3U][8U] 
        = vlSelf->mptw_top__DOT__walking_to_retire_data_data
        [3U][8U];
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
         [4U][6U])) {
        if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [4U][1U] >> 0x1cU))) {
            if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [4U][1U] >> 0x1cU))) {
                if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [4U][1U] >> 0x1cU))) {
                    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [4U][1U] >> 0x1cU)) ? 
                       ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [4U][2U] << 0x14U) | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                               [4U][2U] 
                                               >> 0xcU))
                        : ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [4U][1U] >> 0x1cU))
                            ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [4U][2U] << 0x14U) 
                               | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [4U][2U] >> 0xcU))
                            : ((3U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                       [4U][1U] >> 0x1cU))
                                ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][2U] << 0x14U) 
                                   | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                      [4U][2U] >> 0xcU))
                                : 0U))));
        vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [4U][(((IData)(0xd0U) 
                                          + (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))) 
                                         >> 5U)] << 
                                   ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0xceU) 
                                                + (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [4U][(((IData)(0xceU) + 
                                   (0x3fU & ((IData)(3U) 
                                             * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(0xceU) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    } else if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [4U][1U] >> 0x1cU))) {
        if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [4U][1U] >> 0x1cU))) {
            if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [4U][1U] >> 0x1cU))) {
                vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = 6U;
            }
        }
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
         [0U][6U])) {
        if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [0U][1U] >> 0x1cU))) {
            if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [0U][1U] >> 0x1cU))) {
                if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [0U][1U] >> 0x1cU))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [0U][1U] >> 0x1cU)) ? 0U : (
                                                   (2U 
                                                    == 
                                                    (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [0U][1U] 
                                                     >> 0x1cU))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                      [0U][1U] 
                                                      >> 0x1cU))
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                        [0U][3U] 
                                                        >> 0x10U))
                                                     : 0U)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [0U][(((IData)(0xd0U) 
                                          + (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                         >> 5U)] << 
                                   ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0xceU) 
                                                + (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [0U][(((IData)(0xceU) + 
                                   (0x3fU & ((IData)(3U) 
                                             * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(0xceU) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    } else if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [0U][1U] >> 0x1cU))) {
        if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [0U][1U] >> 0x1cU))) {
            if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [0U][1U] >> 0x1cU))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
            }
        }
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
         [2U][6U])) {
        if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [2U][1U] >> 0x1cU))) {
            if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [2U][1U] >> 0x1cU))) {
                if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [2U][1U] >> 0x1cU))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [2U][1U] >> 0x1cU)) ? 
                       ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [2U][3U] << 2U) | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                            [2U][2U] 
                                            >> 0x1eU))
                        : ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [2U][1U] >> 0x1cU))
                            ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [2U][3U] << 2U) | (
                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                   [2U][2U] 
                                                   >> 0x1eU))
                            : ((3U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                       [2U][1U] >> 0x1cU))
                                ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][3U] << 2U) 
                                   | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][2U] >> 0x1eU))
                                : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [2U][(((IData)(0xd0U) 
                                          + (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                         >> 5U)] << 
                                   ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0xceU) 
                                                + (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [2U][(((IData)(0xceU) + 
                                   (0x3fU & ((IData)(3U) 
                                             * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(0xceU) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    } else if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [2U][1U] >> 0x1cU))) {
        if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [2U][1U] >> 0x1cU))) {
            if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [2U][1U] >> 0x1cU))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
            }
        }
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
         [3U][6U])) {
        if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [3U][1U] >> 0x1cU))) {
            if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [3U][1U] >> 0x1cU))) {
                if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [3U][1U] >> 0x1cU))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [3U][1U] >> 0x1cU)) ? 
                       ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                         [3U][2U] << 0xbU) | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                              [3U][2U] 
                                              >> 0x15U))
                        : ((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [3U][1U] >> 0x1cU))
                            ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [3U][2U] << 0xbU) | 
                               (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [3U][2U] >> 0x15U))
                            : ((3U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                       [3U][1U] >> 0x1cU))
                                ? ((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][2U] << 0xbU) 
                                   | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                      [3U][2U] >> 0x15U))
                                : 0U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [3U][(((IData)(0xd0U) 
                                          + (0x3fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                         >> 5U)] << 
                                   ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0xceU) 
                                                + (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                            [3U][(((IData)(0xceU) + 
                                   (0x3fU & ((IData)(3U) 
                                             * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(0xceU) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    } else if ((1U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                       [3U][1U] >> 0x1cU))) {
        if ((2U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                    [3U][1U] >> 0x1cU))) {
            if ((3U != (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                        [3U][1U] >> 0x1cU))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
            }
        }
    }
}
