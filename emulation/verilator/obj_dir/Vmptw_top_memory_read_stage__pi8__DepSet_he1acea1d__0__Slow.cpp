// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top_memory_read_stage__pi8.h"

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___ctor_var_reset(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->stage_slave_data);
    vlSelf->stage_slave_valid = VL_RAND_RESET_I(1);
    vlSelf->stage_slave_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->stage_master_data);
    vlSelf->stage_master_valid = VL_RAND_RESET_I(1);
    vlSelf->stage_master_ready = VL_RAND_RESET_I(1);
    vlSelf->stage_ctrl_flush = VL_RAND_RESET_I(2);
    vlSelf->stage_ctrl_stall = VL_RAND_RESET_I(1);
    vlSelf->stage_status_busy = VL_RAND_RESET_I(1);
    vlSelf->stage_status_flushed = VL_RAND_RESET_I(2);
    vlSelf->stage_status_stalled = VL_RAND_RESET_I(1);
    vlSelf->memory_master_mem_req = VL_RAND_RESET_I(1);
    vlSelf->memory_master_mem_gnt = VL_RAND_RESET_I(1);
    vlSelf->memory_master_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->memory_master_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->memory_master_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__memory_master_mem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__memory_master_mem_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_master_mem_be = VL_RAND_RESET_I(8);
    vlSelf->memory_master_mem_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__PVT__to_output_bus_data);
    vlSelf->__PVT__to_output_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, vlSelf->__PVT__valid_fifo_to_master);
    vlSelf->__PVT__valid_do_walk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grant_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grant_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_counter_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__valid_counter_d = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spec_transaction_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spec_transaction_cnt_d = VL_RAND_RESET_I(6);
    vlSelf->__PVT__stage_usage = VL_RAND_RESET_I(6);
    vlSelf->__PVT__grant_fifo_status_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__grant_fifo_status_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__valid_fifo_status_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__valid_fifo_status_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flush_fifo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_grant_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_status_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flush_status_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(280, vlSelf->__Vcellout__grant_fifo_u__data_o);
    VL_RAND_RESET_W(280, vlSelf->__Vcellout__valid_fifo_u__data_o);
    VL_RAND_RESET_W(280, vlSelf->__Vcellinp__valid_fifo_u__data_i);
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(6);
    vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(8960, vlSelf->__PVT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(8960, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(280, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
    vlSelf->__PVT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(6);
    vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(8960, vlSelf->__PVT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(8960, vlSelf->__PVT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(280, vlSelf->valid_fifo_u__DOT____Vlvbound_h4b40406a__0);
}
