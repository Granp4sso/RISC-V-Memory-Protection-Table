// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top___024root.h"

VL_ATTR_COLD void Vmptw_top___024root___eval_static(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmptw_top___024root___eval_initial__TOP(Vmptw_top___024root* vlSelf);

VL_ATTR_COLD void Vmptw_top___024root___eval_initial(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_initial\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    Vmptw_top___024root___eval_initial__TOP(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__0 
        = vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear__0 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[0U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[1U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[2U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[3U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[5U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[6U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[7U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0[8U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[0U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[1U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[2U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[3U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[4U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[5U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[6U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[7U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0[8U] 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 
        = vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__0 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready__0 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready;
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
}

VL_ATTR_COLD void Vmptw_top___024root___eval_initial__TOP(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->stalled_o = 0U;
    vlSelf->walking_mem_master_mem_wdata[0U] = 0ULL;
    vlSelf->walking_mem_master_mem_wdata[1U] = 0ULL;
    vlSelf->walking_mem_master_mem_wdata[2U] = 0ULL;
    vlSelf->walking_mem_master_mem_wdata[3U] = 0ULL;
    vlSelf->walking_mem_master_mem_we[0U] = 0U;
    vlSelf->walking_mem_master_mem_we[1U] = 0U;
    vlSelf->walking_mem_master_mem_we[2U] = 0U;
    vlSelf->walking_mem_master_mem_we[3U] = 0U;
    vlSelf->walking_mem_master_mem_be[0U] = 0U;
    vlSelf->walking_mem_master_mem_be[1U] = 0U;
    vlSelf->walking_mem_master_mem_be[2U] = 0U;
    vlSelf->walking_mem_master_mem_be[3U] = 0U;
    vlSelf->mptw_top__DOT__system_status_stalled[0U] = 0U;
    vlSelf->mptw_top__DOT__system_status_stalled[7U] = 0U;
    vlSelf->plb_master_mem_be = 0U;
    vlSelf->plb_master_mem_we = 0U;
    vlSelf->plb_master_mem_wdata = 0ULL;
}

VL_ATTR_COLD void Vmptw_top___024root___eval_final(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__stl(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmptw_top___024root___eval_phase__stl(Vmptw_top___024root* vlSelf);

VL_ATTR_COLD void Vmptw_top___024root___eval_settle(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmptw_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/stefano/Desktop/workspace/unina/projects/smmpt/b_emu/rtl/mptw_top.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmptw_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__stl(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.rob_memory_clear)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] mptw_top.last_parsing_stage_u.output_transaction)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_issue_bus_valid)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_commit_bus_ready)\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;

VL_ATTR_COLD void Vmptw_top___024root___stl_sequent__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h9afdd32e__0 = 0;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound_h4ac0538a__0 = 0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk2__DOT__i = 5U;
        }
    }
    vlSelf->plb_entry_o = (((QData)((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q[2U])));
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
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_ASSIGN_W(16384,vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
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
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__retire_to_commit_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__retire_to_commit_data_valid = 0U;
    }
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
    vlSelf->mptw_top__DOT__system_status_stalled[1U] 
        = vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[2U] 
        = vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[3U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[4U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[5U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[6U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_stalled[8U] 
        = vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_stalled;
    vlSelf->mptw_top__DOT__system_status_busy[1U] = vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[2U] = vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[3U] = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[4U] = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[5U] = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[6U] = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy;
    vlSelf->mptw_top__DOT__system_status_busy[8U] = vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_busy;
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
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
    }
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 0U;
    if ((IData)(((0U == (0xcU & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U])) 
                 & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                    >> 9U)))) {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = 1U;
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
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__fetch_to_issue_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__fetch_to_issue_data_valid = 0U;
    }
    vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 0U;
    if (vlSelf->flush_spec_i) {
        vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 2U;
    }
    if (vlSelf->flush_all_i) {
        vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = 1U;
    }
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 0U;
    }
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
    if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 0U;
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
    if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__backend_to_issue_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__backend_to_issue_data_valid = 0U;
    }
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
    if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = 0U;
    }
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
    if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid = 0U;
    }
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
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    vlSelf->mptw_top__DOT__retire_demux_select[0U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT__retire_demux_select[1U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT__retire_demux_select[2U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_top__DOT__retire_demux_select[3U] 
        = (IData)((0x600U == (0x600U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])));
    vlSelf->mptw_result_valid_o = vlSelf->mptw_top__DOT__retire_to_commit_data_valid;
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
    vlSelf->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlSelf->mptw_top__DOT__fetch_to_issue_data_valid;
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
        if ((2U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((1U & (~ (IData)((0x3ffffU == vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q))))) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i = 9U;
                }
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
        if ((1U & (~ ((IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i = 9U;
                }
            }
        }
    }
    vlSelf->mptw_top__DOT__issue_stage_master_valid[0U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[4U] 
        = vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlSelf->mptw_top__DOT__backend_to_issue_data_valid;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d 
        = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 0U;
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
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
            vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 3U;
        }
    } else if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3U] = 0U;
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4U] = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 3U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
        vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 3U;
    } else if ((0U != vlSelf->mptw_top__DOT__system_control_flush
                [8U])) {
        if ((1U == vlSelf->mptw_top__DOT__system_control_flush
             [8U])) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 1U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
        } else {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 2U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 0U;
        }
        vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = 1U;
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = 0U;
    }
    vlSelf->mptw_top__DOT__issue_stage_master_valid[1U] 
        = vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[1U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[2U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[3U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__to_walking_stage_data_valid[1U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_demux_data_valid[0U] 
        = vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlSelf->mptw_top__DOT__walking_to_retire_data_valid[0U] 
        = (vlSelf->mptw_top__DOT__retire_demux_select
           [0U] && (IData)(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid));
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
    vlSelf->mptw_top__DOT__system_status_flushed[8U] 
        = vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed;
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

VL_ATTR_COLD void Vmptw_top___024root___stl_sequent__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___stl_sequent__TOP__2\n"); );
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
}

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h4d851b67_0;

VL_ATTR_COLD void Vmptw_top___024root___stl_comb__TOP__5(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___stl_comb__TOP__5\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<9>/*287:0*/ __Vtemp_15;
    VlWide<9>/*287:0*/ __Vtemp_19;
    // Body
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

VL_ATTR_COLD void Vmptw_top___024root___eval_triggers__stl(Vmptw_top___024root* vlSelf);
VL_ATTR_COLD void Vmptw_top___024root___eval_stl(Vmptw_top___024root* vlSelf);

VL_ATTR_COLD bool Vmptw_top___024root___eval_phase__stl(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmptw_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmptw_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__ico(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((8ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x20ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x40ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_issue_bus_valid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__act(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.rob_memory_clear)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] mptw_top.last_parsing_stage_u.output_transaction)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_issue_bus_valid)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_commit_bus_ready)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge clk_i)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__nba(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.rob_memory_clear)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] mptw_top.last_parsing_stage_u.output_transaction)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.gen_forwarding_buffer.forwarding_buffer_u.to_mem_bus_ready)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.parsing_stage_u.output_transaction)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_issue_bus_valid)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] mptw_top.retire_stage_gen.retire_stage_u.to_commit_bus_ready)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge clk_i)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmptw_top___024root___ctor_var_reset(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->flush_all_i = VL_RAND_RESET_I(1);
    vlSelf->flush_spec_i = VL_RAND_RESET_I(1);
    vlSelf->stall_i = VL_RAND_RESET_I(1);
    vlSelf->busy_o = VL_RAND_RESET_I(1);
    vlSelf->stalled_o = VL_RAND_RESET_I(1);
    vlSelf->spa_i = VL_RAND_RESET_Q(64);
    vlSelf->mmpt_reg_i = VL_RAND_RESET_Q(64);
    vlSelf->access_type_i = VL_RAND_RESET_I(2);
    vlSelf->speculative_i = VL_RAND_RESET_I(1);
    vlSelf->mptw_transaction_valid_i = VL_RAND_RESET_I(1);
    vlSelf->mptw_ready_o = VL_RAND_RESET_I(1);
    vlSelf->mptw_result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->plb_entry_o = VL_RAND_RESET_Q(64);
    vlSelf->access_page_fault_o = VL_RAND_RESET_I(1);
    vlSelf->format_error_o = VL_RAND_RESET_I(3);
    vlSelf->plb_master_mem_req = VL_RAND_RESET_I(1);
    vlSelf->plb_master_mem_gnt = VL_RAND_RESET_I(1);
    vlSelf->plb_master_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->plb_master_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->plb_master_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->plb_master_mem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->plb_master_mem_we = VL_RAND_RESET_I(1);
    vlSelf->plb_master_mem_be = VL_RAND_RESET_I(8);
    vlSelf->plb_master_mem_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_rdata[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_wdata[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_be[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->walking_mem_master_mem_error[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__input_transaction);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__plb_output_transaction);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__walking_output_transaction[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mptw_top__DOT__retire_demux_select[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mptw_top__DOT__input_to_fetch_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__fetch_to_issue_data_data);
    vlSelf->mptw_top__DOT__fetch_to_issue_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_to_backend_data_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_to_plb_lookup_data_data);
    vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__to_walking_stage_data_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__to_walking_stage_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__walking_to_demux_data_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__walking_to_demux_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__walking_to_demux_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__walking_to_retire_data_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__walking_to_retire_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__walking_to_retire_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mptw_top__DOT__backend_to_issue_data_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_to_commit_data_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__commit_to_output_data_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__commit_to_output_data_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mptw_top__DOT__system_control_flush[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mptw_top__DOT__system_control_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mptw_top__DOT__system_status_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mptw_top__DOT__system_status_flushed[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->mptw_top__DOT__system_status_stalled[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_slave_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mptw_top__DOT__issue_stage_slave_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mptw_top__DOT__issue_stage_slave_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_master_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mptw_top__DOT__issue_stage_master_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mptw_top__DOT__issue_stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_data);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT____Vcellinp__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_data);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_data);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_data);
    vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q = VL_RAND_RESET_I(18);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d = VL_RAND_RESET_I(18);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q = VL_RAND_RESET_I(18);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d = VL_RAND_RESET_I(18);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h59518542__0 = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_h78fd4593__0 = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__control_unit_u__DOT____Vlvbound_ha28745a8__0 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(72, vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__flush_completed = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    VL_RAND_RESET_W(129, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = VL_RAND_RESET_I(8);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    VL_RAND_RESET_W(129, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = VL_RAND_RESET_I(8);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    VL_RAND_RESET_W(129, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = VL_RAND_RESET_I(8);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q);
    VL_RAND_RESET_W(16384, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d);
    VL_RAND_RESET_W(129, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr = VL_RAND_RESET_I(8);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__0 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__1 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT____Vlvbound_h5a1f7f41__2 = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus[__Vi0]);
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(17920, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(17920, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata[__Vi0]);
    }
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear = VL_RAND_RESET_I(5);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask = VL_RAND_RESET_I(5);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d = VL_RAND_RESET_I(2);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk3__DOT__i = 0;
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h5522eaa3__1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h921d250f__0);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h30ed7198__1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf3a0f21__0);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hce62f654__1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hfdc2c4bc__0);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h6a4a5faa__1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hd5dca648__0);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_h411eaf0b__1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT____Vlvbound_hcf7ed4fd__0);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(6);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(6);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(6);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(6);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(7);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(768, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(768, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound_h02bd00d5__0 = VL_RAND_RESET_I(12);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear__0 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__0);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__0);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear__1 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction__1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction__1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 66; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
