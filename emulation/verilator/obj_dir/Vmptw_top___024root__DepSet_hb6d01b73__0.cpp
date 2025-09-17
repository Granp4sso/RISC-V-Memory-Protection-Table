// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top__Syms.h"
#include "Vmptw_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__ico(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmptw_top___024root___eval_triggers__ico(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, ((IData)(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__1)));
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1)));
    vlSelf->__VicoTriggered.set(3U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1)));
    vlSelf->__VicoTriggered.set(4U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1)));
    vlSelf->__VicoTriggered.set(5U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1)));
    vlSelf->__VicoTriggered.set(6U, ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__1)));
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__1 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__1 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
        vlSelf->__VicoTriggered.set(4U, 1U);
        vlSelf->__VicoTriggered.set(5U, 1U);
        vlSelf->__VicoTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmptw_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;

VL_INLINE_OPT void Vmptw_top___024root___ico_sequent__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 = 0;
    // Body
    vlSelf->mptw_top__DOT__input_transaction[8U] = 
        ((0x1fU & vlSelf->mptw_top__DOT__input_transaction[8U]) 
         | (0xffffe0U & (0xfff000U | (((IData)(vlSelf->speculative_i) 
                                       << 0xbU) | ((IData)(vlSelf->mptw_transaction_valid_i) 
                                                   << 9U)))));
    vlSelf->mptw_top__DOT__input_transaction[0U] = (IData)(vlSelf->mmpt_reg_i);
    vlSelf->mptw_top__DOT__input_transaction[1U] = (IData)(
                                                           (vlSelf->mmpt_reg_i 
                                                            >> 0x20U));
    vlSelf->mptw_top__DOT__input_transaction[2U] = (IData)(vlSelf->spa_i);
    vlSelf->mptw_top__DOT__input_transaction[3U] = (IData)(
                                                           (vlSelf->spa_i 
                                                            >> 0x20U));
    vlSelf->mptw_top__DOT__input_transaction[4U] = vlSelf->access_type_i;
    vlSelf->mptw_top__DOT__input_transaction[5U] = 0U;
    vlSelf->mptw_top__DOT__input_transaction[6U] = 0U;
    vlSelf->mptw_top__DOT__input_transaction[7U] = 0U;
    vlSelf->mptw_top__DOT__input_transaction[8U] = 
        (0xfffff0U & vlSelf->mptw_top__DOT__input_transaction[8U]);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 0U;
    if (vlSelf->flush_spec_i) {
        vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 2U;
    }
    if (vlSelf->flush_all_i) {
        vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 1U;
    }
    vlSelf->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
            }
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__backend_to_issue_data_valid) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
        } else {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U] 
        = vlSelf->mptw_top__DOT__input_transaction[0U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U] 
        = vlSelf->mptw_top__DOT__input_transaction[1U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U] 
        = vlSelf->mptw_top__DOT__input_transaction[2U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U] 
        = vlSelf->mptw_top__DOT__input_transaction[3U];
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSelf->mptw_top__DOT__input_transaction[4U]) 
           | (3U & vlSelf->mptw_top__DOT__input_transaction[4U]));
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSelf->mptw_top__DOT__input_transaction[5U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__input_transaction[5U]));
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSelf->mptw_top__DOT__input_transaction[6U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__input_transaction[6U]));
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSelf->mptw_top__DOT__input_transaction[7U]) 
           | (0xfffffff0U & vlSelf->mptw_top__DOT__input_transaction[7U]));
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0xfffe00U & vlSelf->mptw_top__DOT__input_transaction[8U]) 
           | (((IData)((0x300U == (0x300U & vlSelf->mptw_top__DOT__input_transaction[8U]))) 
               << 8U) | ((0xfU & vlSelf->mptw_top__DOT__input_transaction[8U]) 
                         | (0x10U & vlSelf->mptw_top__DOT__input_transaction[8U]))));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fffcU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | (IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fff3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 2U));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3ffcfU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 4U));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3ff3fU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 6U));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fcffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 8U));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3f3ffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 0xaU));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3cfffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 0xcU));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x33fffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 0xeU));
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 
        = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0xffffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0) 
              << 0x10U));
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d = 0U;
    vlSelf->mptw_top__DOT__input_to_fetch_data_valid 
        = vlSelf->mptw_transaction_valid_i;
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i = 9U;
                }
            }
        }
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlSelf->mptw_top__DOT__input_to_fetch_data_valid = 0U;
                if ((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d = 0U;
                    vlSelf->mptw_top__DOT__input_to_fetch_data_valid 
                        = vlSelf->mptw_transaction_valid_i;
                } else {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q))
                            ? 0U : (3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fffcU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 2U))) ? 0U
                            : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 2U)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fff3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 2U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 4U))) ? 0U
                            : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 4U)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ffcfU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 4U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 6U))) ? 0U
                            : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 6U)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ff3fU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 6U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 8U))) ? 0U
                            : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 8U)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fcffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 8U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xaU)))
                            ? 0U : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xaU)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3f3ffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 0xaU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xcU)))
                            ? 0U : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xcU)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3cfffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 0xcU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xeU)))
                            ? 0U : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xeU)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x33fffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 0xeU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0x10U)))
                            ? 0U : (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0x10U)));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0xffffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0) 
                              << 0x10U));
                }
            }
        } else if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3fffcU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3fff3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 2U));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3ffcfU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 4U));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3ff3fU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 6U));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3fcffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 8U));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3f3ffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 0xaU));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x3cfffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 0xcU));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0x33fffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 0xeU));
                vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 
                    = vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type;
                vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                    = ((0xffffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                       | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0) 
                          << 0x10U));
                vlSelf->mptw_top__DOT__input_to_fetch_data_valid = 0U;
            }
        } else if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
            vlSelf->mptw_top__DOT__input_to_fetch_data_valid = 0U;
        }
    }
    vlSelf->mptw_top__DOT__issue_stage_slave_ready[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
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
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [0U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
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
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
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
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
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
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
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
    } else if (vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
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
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
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
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
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
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
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
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [2U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
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
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
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
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
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
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
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
    } else if (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
               [3U]) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 1U;
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
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
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
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = 0U;
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

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U] 
        = (0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[4U]);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (((IData)((0U != (((QData)((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                >> 4U))))) 
               << 0xaU) | ((0x3e0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
                           | ((IData)((0U != (((QData)((IData)(
                                                               vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                    >> 4U))))) 
                              << 4U))));
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready)) 
                   || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready)))));
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))) {
                    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))) {
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__1(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__1\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [1U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [1U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [1U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [1U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [1U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__3(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__3\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [2U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [2U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [2U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [2U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [2U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___ico_comb__TOP__4(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ico_comb__TOP__4\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [3U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [3U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [3U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [3U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [3U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

void Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top_memory_read_stage__pi8* vlSelf);
void Vmptw_top___024root___ico_comb__TOP__5(Vmptw_top___024root* vlSelf);

void Vmptw_top___024root___eval_ico(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top_memory_read_stage__pi8___ico_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        Vmptw_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vmptw_top___024root___ico_comb__TOP__0(vlSelf);
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vmptw_top___024root___ico_comb__TOP__1(vlSelf);
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vmptw_top___024root___ico_comb__TOP__2(vlSelf);
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vmptw_top___024root___ico_comb__TOP__3(vlSelf);
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x21ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vmptw_top___024root___ico_comb__TOP__4(vlSelf);
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmptw_top___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__act(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmptw_top___024root___eval_triggers__act(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__2)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear__1)));
    vlSelf->__VactTriggered.set(2U, (0U != ((((((((
                                                   (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[0U]) 
                                                   | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[1U])) 
                                                  | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[2U])) 
                                                 | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[3U])) 
                                                | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[4U])) 
                                               | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[5U])) 
                                              | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[6U])) 
                                             | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[7U])) 
                                            | (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[8U]))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1)));
    vlSelf->__VactTriggered.set(4U, (0U != ((((((((
                                                   (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U]) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U])) 
                                                  | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U])) 
                                                 | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U])) 
                                                | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U])) 
                                               | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U])) 
                                              | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U])) 
                                             | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U])) 
                                            | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U]))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1)));
    vlSelf->__VactTriggered.set(7U, (0U != ((((((((
                                                   (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U]) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U])) 
                                                  | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U])) 
                                                 | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U])) 
                                                | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U])) 
                                               | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U])) 
                                              | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U])) 
                                             | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U])) 
                                            | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U]))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2)));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1)));
    vlSelf->__VactTriggered.set(0xaU, (0U != ((((((
                                                   (((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U]) 
                                                     | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U])) 
                                                    | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U])) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U])) 
                                                  | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U])) 
                                                 | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U])) 
                                                | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U])) 
                                               | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U])) 
                                              | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U]))));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2)));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1)));
    vlSelf->__VactTriggered.set(0xdU, (0U != ((((((
                                                   (((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U]) 
                                                     | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U])) 
                                                    | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U])) 
                                                   | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U])) 
                                                  | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U])) 
                                                 | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U])) 
                                                | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U])) 
                                               | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U])) 
                                              | (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U]))));
    vlSelf->__VactTriggered.set(0xeU, ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2)));
    vlSelf->__VactTriggered.set(0xfU, ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__2)));
    vlSelf->__VactTriggered.set(0x10U, ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready__1)));
    vlSelf->__VactTriggered.set(0x11U, ((IData)(vlSelf->clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(0x12U, (((IData)(vlSelf->clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__2 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear__1 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1[8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__2 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready__1 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
        vlSelf->__VactTriggered.set(0xcU, 1U);
        vlSelf->__VactTriggered.set(0xdU, 1U);
        vlSelf->__VactTriggered.set(0xeU, 1U);
        vlSelf->__VactTriggered.set(0xfU, 1U);
        vlSelf->__VactTriggered.set(0x10U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmptw_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                               [0U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__3(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__walking_to_demux_data_ready[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__4(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                               [2U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__5(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                if ((1U & (~ ((~ vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                               [3U]) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__10(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__10\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__11(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__11\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__12(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__12\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__13(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__13\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U]) 
           | ((((1U == (3U & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                              >> 2U))) ? 0U : (3U & 
                                               (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U))) 
               << 2U) | (3U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U]));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (0xfffff0U & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U]));
    if (((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
         & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
            >> 9U))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid 
        = ((IData)(((0U == (0xcU & vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U])) 
                    & (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                       >> 9U))) && (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] = 0U;
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q)));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[8U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[7U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                                       >> 4U))) >> 0x20U));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U] 
            = (IData)((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                                   >> 4U))));
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[6U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[5U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data[4U])) 
                                       >> 4U))) >> 0x20U));
        VL_ASSIGNSEL_WW(16384,128,(0x3fffU & VL_SHIFTL_III(14,32,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q), 7U)), vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = 0U;
        if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                    (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0) 
                                        << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
        }
        if ((0x80U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)) {
            if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                               >> 4U))) 
                  == ((0x3fffU >= ((IData)(0x40U) + 
                                   (0x3fffU & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))
                       ? (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                           (((IData)(0x7fU) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x40U) 
                                                + (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                          | (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x3fffU 
                                                  & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x5fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x40U) 
                                                   + 
                                                   (0x3fffU 
                                                    & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))))))) 
                             | ((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                (((IData)(0x40U) 
                                                  + 
                                                  (0x3fffU 
                                                   & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U))) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x40U) 
                                             + (0x3fffU 
                                                & VL_SHIFTL_III(14,32,32, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i, 7U)))))))
                       : 0ULL)) & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = 1U;
                if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                            & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                            (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                   >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1) 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
                }
            }
        } else if ((((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                       << 0x3cU) | (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                                                  >> 4U))) 
                     == (((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[2U])))) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = 1U;
            if (VL_LIKELY((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[(7U 
                                                                                & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i))) 
                        & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                        (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
                               >> 5U))]) | ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2) 
                                            << (0x1fU 
                                                & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i)));
            }
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0U;
    while ((0x81U > vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) {
        if (((~ (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)) 
             & ((0x80U >= (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)) 
                && (1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[
                          (7U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i)))))) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr 
                = (0xffU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = 1U;
        }
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i);
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_sequent__TOP__14(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_sequent__TOP__14\n"); );
    // Body
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U] 
        = (0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[4U]);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U] = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U] 
        = ((0xfff800U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
           | (((IData)((0U != (((QData)((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                << 0x3cU) | (((QData)((IData)(
                                                              vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                >> 4U))))) 
               << 0xaU) | ((0x3e0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U]) 
                           | ((IData)((0U != (((QData)((IData)(
                                                               vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                    >> 4U))))) 
                              << 4U))));
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__6(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready)))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready))) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__9(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__9\n"); );
    // Body
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready)) 
                   || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready)))));
            vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))) {
                    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))))) {
                    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready))) {
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__10(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [1U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [1U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [1U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [1U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [1U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__11(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__11\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [2U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [2U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [2U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [2U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [2U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

VL_INLINE_OPT void Vmptw_top___024root___act_comb__TOP__12(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                    & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                    [3U]) || (1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                       & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                                       [3U]))));
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                     [3U])) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [3U])))) {
                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                 [3U])) {
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = 0U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
            = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
    }
}

void Vmptw_top___024root___act_sequent__TOP__0(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__6(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__7(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__8(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__9(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_sequent__TOP__15(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__0(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__1(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__2(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__3(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__4(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__5(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__7(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___act_comb__TOP__8(Vmptw_top___024root* vlSelf);

void Vmptw_top___024root___eval_act(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        Vmptw_top___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x10002ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0xc0ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x124aULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((0x600ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x3000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x60ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x10006ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x18002ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x124bULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u));
    }
    if ((0x134aULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x1a4aULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
    if ((0x524aULL & vlSelf->__VactTriggered.word(0U))) {
        Vmptw_top___024root___act_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        Vmptw_top_memory_read_stage__pi8___ico_comb__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__1((&vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u));
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> Vmptw_top__ConstPool__TABLE_h8b9dbe66_0;

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__10(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__10\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id = 0U;
    if ((0U != (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
        if ((1U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id 
                = ((0x2ffU >= (0x3ffU & ((IData)(0xcU) 
                                         * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))
                    ? (0x7fU & (((0U == (0x1fU & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))
                                  ? 0U : (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[
                                          (((IData)(0xbU) 
                                            + (0x3ffU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)))))) 
                                | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[
                                   (0x1fU & (((IData)(0xcU) 
                                              * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                   >> (0x1fU & ((IData)(0xcU) 
                                                * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))))
                    : 0U);
        }
    }
    vlSelf->mptw_top__DOT__system_status_flushed[2U] 
        = (((3U == ((0U != vlSelf->mptw_top__DOT__system_control_flush
                     [2U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
            ? 3U : (((0U != ((0U != vlSelf->mptw_top__DOT__system_control_flush
                              [2U]) ? 3U : 0U)) | (0U 
                                                   != (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                     ? 1U : 0U));
    vlSelf->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlSelf->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlSelf->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                    & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                   || (1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                                & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
            if (((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
                vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
            }
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
            if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                     & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->mptw_top__DOT__backend_to_issue_data_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 0U;
                }
            }
        }
    } else {
        if (vlSelf->mptw_top__DOT__backend_to_issue_data_valid) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
        } else {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = 0U;
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[0U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[1U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[2U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[3U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[4U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[5U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[6U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[7U];
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = Vmptw_top__ConstPool__CONST_h083ec1be_0[8U];
        }
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
    }
    __Vtableidx1 = ((((0U != vlSelf->mptw_top__DOT__system_control_flush
                       [3U]) ? 3U : 0U) << 6U) | (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed) 
                                                   << 4U) 
                                                  | ((((0U 
                                                        != 
                                                        vlSelf->mptw_top__DOT__system_control_flush
                                                        [3U])
                                                        ? 3U
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((0U 
                                                         != 
                                                         vlSelf->mptw_top__DOT__system_control_flush
                                                         [3U])
                                                         ? 3U
                                                         : 0U))));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_flushed 
        = Vmptw_top__ConstPool__TABLE_h8b9dbe66_0[__Vtableidx1];
    vlSelf->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlSelf->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    __Vtableidx2 = ((((0U != vlSelf->mptw_top__DOT__system_control_flush
                       [4U]) ? 3U : 0U) << 6U) | (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed) 
                                                   << 4U) 
                                                  | ((((0U 
                                                        != 
                                                        vlSelf->mptw_top__DOT__system_control_flush
                                                        [4U])
                                                        ? 3U
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((0U 
                                                         != 
                                                         vlSelf->mptw_top__DOT__system_control_flush
                                                         [4U])
                                                         ? 3U
                                                         : 0U))));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_flushed 
        = Vmptw_top__ConstPool__TABLE_h8b9dbe66_0[__Vtableidx2];
    vlSelf->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlSelf->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    __Vtableidx3 = ((((0U != vlSelf->mptw_top__DOT__system_control_flush
                       [5U]) ? 3U : 0U) << 6U) | (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed) 
                                                   << 4U) 
                                                  | ((((0U 
                                                        != 
                                                        vlSelf->mptw_top__DOT__system_control_flush
                                                        [5U])
                                                        ? 3U
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((0U 
                                                         != 
                                                         vlSelf->mptw_top__DOT__system_control_flush
                                                         [5U])
                                                         ? 3U
                                                         : 0U))));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_flushed 
        = Vmptw_top__ConstPool__TABLE_h8b9dbe66_0[__Vtableidx3];
    vlSelf->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlSelf->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    __Vtableidx4 = ((((0U != vlSelf->mptw_top__DOT__system_control_flush
                       [6U]) ? 3U : 0U) << 6U) | (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed) 
                                                   << 4U) 
                                                  | ((((0U 
                                                        != 
                                                        vlSelf->mptw_top__DOT__system_control_flush
                                                        [6U])
                                                        ? 3U
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((0U 
                                                         != 
                                                         vlSelf->mptw_top__DOT__system_control_flush
                                                         [6U])
                                                         ? 3U
                                                         : 0U))));
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_flushed 
        = Vmptw_top__ConstPool__TABLE_h8b9dbe66_0[__Vtableidx4];
    vlSelf->walking_mem_master_mem_addr[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlSelf->walking_mem_master_mem_req[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlSelf->mptw_top__DOT__issue_stage_slave_ready[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
    vlSelf->mptw_top__DOT__system_status_flushed[3U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_flushed;
    vlSelf->mptw_top__DOT__system_status_flushed[4U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_flushed;
    vlSelf->mptw_top__DOT__system_status_flushed[5U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_flushed;
    vlSelf->mptw_top__DOT__system_status_flushed[6U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_flushed;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d = 0U;
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d = 0U;
                } else {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q))
                            ? 3U : vlSelf->mptw_top__DOT__system_status_flushed
                           [0U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fffcU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 2U))) ? 3U
                            : vlSelf->mptw_top__DOT__system_status_flushed
                           [1U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fff3U & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 2U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 4U))) ? 3U
                            : vlSelf->mptw_top__DOT__system_status_flushed
                           [2U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3ffcfU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 4U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 6U))) ? 3U
                            : vlSelf->mptw_top__DOT__system_status_flushed
                           [3U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3ff3fU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 6U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 8U))) ? 3U
                            : vlSelf->mptw_top__DOT__system_status_flushed
                           [4U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fcffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 8U));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xaU)))
                            ? 3U : vlSelf->mptw_top__DOT__system_status_flushed
                           [5U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3f3ffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 0xaU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xcU)))
                            ? 3U : vlSelf->mptw_top__DOT__system_status_flushed
                           [6U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3cfffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 0xcU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xeU)))
                            ? 3U : vlSelf->mptw_top__DOT__system_status_flushed
                           [7U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x33fffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 0xeU));
                    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 
                        = ((3U == (3U & (vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0x10U)))
                            ? 3U : vlSelf->mptw_top__DOT__system_status_flushed
                           [8U]);
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0xffffU & vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0) 
                              << 0x10U));
                }
            }
        }
    }
}
