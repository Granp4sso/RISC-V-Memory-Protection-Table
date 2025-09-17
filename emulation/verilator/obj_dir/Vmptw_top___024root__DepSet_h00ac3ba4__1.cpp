// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top___024root.h"

extern const VlWide<24>/*767:0*/ Vmptw_top__ConstPool__CONST_hda9269f3_0;

VL_INLINE_OPT void Vmptw_top___024root___nba_sequent__TOP__1(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q = 0U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q = 0U;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q = 0U;
        } else {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n;
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n;
        }
        if ((1U & (~ (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock)))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[1U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[2U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[3U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[4U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[5U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[6U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[7U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[8U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[9U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xaU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xbU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xcU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xcU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xdU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xdU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xeU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xeU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xfU] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xfU];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x10U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x10U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x11U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x11U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x12U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x12U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x13U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x13U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x14U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x14U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x15U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x15U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x16U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x16U];
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x17U] 
                = vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0x17U];
        }
    } else {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q = 0U;
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[1U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[2U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[3U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[4U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[5U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[6U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[7U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[8U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[9U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xaU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xbU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xcU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xcU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xdU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xdU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xeU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xeU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xfU] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0xfU];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x10U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x10U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x11U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x11U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x12U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x12U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x13U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x13U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x14U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x14U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x15U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x15U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x16U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x16U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0x17U] 
            = Vmptw_top__ConstPool__CONST_hda9269f3_0[0x17U];
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q = 0U;
    }
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__0(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
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
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__1(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
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
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
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
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__3(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid 
        = ((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready) 
           & (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
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
}

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__5(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__5\n"); );
    // Body
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
    vlSelf->mptw_top__DOT__to_walking_stage_data_ready[4U] 
        = vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready;
}

VL_INLINE_OPT void Vmptw_top___024root___nba_sequent__TOP__2(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_sequent__TOP__2\n"); );
    // Body
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
    vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 0U;
    if ((2U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
            vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
        }
    } else if ((1U & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q))) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo = 1U;
    } else if ((0U != vlSelf->mptw_top__DOT__system_control_flush
                [8U])) {
        vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo 
            = (1U == vlSelf->mptw_top__DOT__system_control_flush
               [8U]);
    }
}

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;
extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h4d851b67_0;

VL_INLINE_OPT void Vmptw_top___024root___nba_comb__TOP__21(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___nba_comb__TOP__21\n"); );
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
}

void Vmptw_top___024root___eval_triggers__act(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___eval_act(Vmptw_top___024root* vlSelf);

bool Vmptw_top___024root___eval_phase__act(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<19> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmptw_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmptw_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmptw_top___024root___eval_nba(Vmptw_top___024root* vlSelf);

bool Vmptw_top___024root___eval_phase__nba(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmptw_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__ico(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vmptw_top___024root___eval_phase__ico(Vmptw_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__nba(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmptw_top___024root___dump_triggers__act(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmptw_top___024root___eval(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmptw_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/stefano/Desktop/workspace/unina/projects/smmpt/b_emu/rtl/mptw_top.sv", 22, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmptw_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmptw_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/stefano/Desktop/workspace/unina/projects/smmpt/b_emu/rtl/mptw_top.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmptw_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/stefano/Desktop/workspace/unina/projects/smmpt/b_emu/rtl/mptw_top.sv", 22, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmptw_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmptw_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmptw_top___024root___eval_debug_assertions(Vmptw_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->flush_all_i & 0xfeU))) {
        Verilated::overWidthError("flush_all_i");}
    if (VL_UNLIKELY((vlSelf->flush_spec_i & 0xfeU))) {
        Verilated::overWidthError("flush_spec_i");}
    if (VL_UNLIKELY((vlSelf->stall_i & 0xfeU))) {
        Verilated::overWidthError("stall_i");}
    if (VL_UNLIKELY((vlSelf->access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
    if (VL_UNLIKELY((vlSelf->speculative_i & 0xfeU))) {
        Verilated::overWidthError("speculative_i");}
    if (VL_UNLIKELY((vlSelf->mptw_transaction_valid_i 
                     & 0xfeU))) {
        Verilated::overWidthError("mptw_transaction_valid_i");}
    if (VL_UNLIKELY((vlSelf->plb_master_mem_gnt & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_gnt");}
    if (VL_UNLIKELY((vlSelf->plb_master_mem_valid & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_valid");}
    if (VL_UNLIKELY((vlSelf->plb_master_mem_error & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_error");}
}
#endif  // VL_DEBUG
