// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMPTW_TOP_H_
#define _VMPTW_TOP_H_  // guard

#include "verilated.h"

//==========

class Vmptw_top__Syms;
class Vmptw_top_VerilatedVcd;
class Vmptw_top_memory_read_stage__pi7;


//----------

VL_MODULE(Vmptw_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vmptw_top_memory_read_stage__pi7* __PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi7* __PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi7* __PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi7* __PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi7* __PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_all_i,0,0);
    VL_IN8(flush_spec_i,0,0);
    VL_IN8(stall_i,0,0);
    VL_OUT8(busy_o,0,0);
    VL_OUT8(stalled_o,0,0);
    VL_IN8(access_type_i,1,0);
    VL_IN8(speculative_i,0,0);
    VL_IN8(mptw_transaction_valid_i,0,0);
    VL_OUT8(mptw_ready_o,0,0);
    VL_OUT8(mptw_result_valid_o,0,0);
    VL_OUT8(access_page_fault_o,0,0);
    VL_OUT8(format_error_o,2,0);
    VL_OUT8(plb_master_mem_req,0,0);
    VL_IN8(plb_master_mem_gnt,0,0);
    VL_IN8(plb_master_mem_valid,0,0);
    VL_OUT8(plb_master_mem_we,0,0);
    VL_OUT8(plb_master_mem_be,7,0);
    VL_IN8(plb_master_mem_error,0,0);
    VL_IN64(spa_i,63,0);
    VL_IN64(mmpt_reg_i,63,0);
    VL_OUT64(plb_entry_o,63,0);
    VL_OUT64(plb_master_mem_addr,63,0);
    VL_IN64(plb_master_mem_rdata,63,0);
    VL_OUT64(plb_master_mem_wdata,63,0);
    VL_OUT8(walking_mem_master_mem_req[4],0,0);
    VL_IN8(walking_mem_master_mem_gnt[4],0,0);
    VL_IN8(walking_mem_master_mem_valid[4],0,0);
    VL_OUT64(walking_mem_master_mem_addr[4],63,0);
    VL_IN64(walking_mem_master_mem_rdata[4],63,0);
    VL_OUT64(walking_mem_master_mem_wdata[4],63,0);
    VL_OUT8(walking_mem_master_mem_we[4],0,0);
    VL_OUT8(walking_mem_master_mem_be[4],7,0);
    VL_IN8(walking_mem_master_mem_error[4],0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mptw_top__DOT__input_to_fetch_data_valid;
        CData/*0:0*/ mptw_top__DOT__fetch_to_issue_data_valid;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_to_demux_data_valid;
        CData/*0:0*/ mptw_top__DOT__commit_to_output_data_valid;
        CData/*0:0*/ mptw_top__DOT__commit_to_output_data_ready;
        CData/*2:0*/ mptw_top__DOT__control_unit_u__DOT__ctrl_status_q;
        CData/*2:0*/ mptw_top__DOT__control_unit_u__DOT__ctrl_status_d;
        IData/*17:0*/ mptw_top__DOT__control_unit_u__DOT__control_reg_q;
        IData/*17:0*/ mptw_top__DOT__control_unit_u__DOT__control_reg_d;
        IData/*17:0*/ mptw_top__DOT__control_unit_u__DOT__status_reg_q;
        IData/*17:0*/ mptw_top__DOT__control_unit_u__DOT__status_reg_d;
        CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT__flush_type;
        CData/*0:0*/ mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__flush_completed;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state;
        CData/*2:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o;
        CData/*2:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions;
        CData/*3:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__range_offset;
        CData/*0:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions;
        CData/*3:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions;
        CData/*3:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state;
    };
    struct {
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions;
        CData/*3:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled;
        CData/*2:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions;
        CData/*3:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state;
        CData/*0:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state;
        SData/*8:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number;
        SData/*8:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number;
        SData/*8:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number;
        SData/*8:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number;
        SData/*8:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number;
        IData/*31:0*/ mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i;
        WData/*279:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[9];
    };
    struct {
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[9];
        WData/*279:0*/ mptw_top__DOT__input_transaction[9];
        WData/*279:0*/ mptw_top__DOT__fetch_stage_u__DOT__output_transaction[9];
        WData/*279:0*/ mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[9];
        WData/*279:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[9];
        WData/*71:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[3];
        WData/*279:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[9];
        QData/*63:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address;
        QData/*63:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr;
        WData/*279:0*/ mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address;
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr;
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address;
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr;
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address;
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr;
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address;
        QData/*63:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr;
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[9];
        WData/*279:0*/ mptw_top__DOT__walking_output_transaction[4][9];
        CData/*0:0*/ mptw_top__DOT__retire_demux_select[4];
        WData/*279:0*/ mptw_top__DOT__to_walking_stage_data_data[5][9];
        CData/*0:0*/ mptw_top__DOT__to_walking_stage_data_valid[5];
        CData/*0:0*/ mptw_top__DOT__to_walking_stage_data_ready[5];
        WData/*279:0*/ mptw_top__DOT__walking_to_demux_data_data[5][9];
        CData/*0:0*/ mptw_top__DOT__walking_to_demux_data_valid[5];
        CData/*0:0*/ mptw_top__DOT__walking_to_demux_data_ready[5];
        WData/*279:0*/ mptw_top__DOT__walking_to_retire_data_data[5][9];
        CData/*0:0*/ mptw_top__DOT__walking_to_retire_data_valid[5];
        CData/*0:0*/ mptw_top__DOT__walking_to_retire_data_ready[5];
        CData/*1:0*/ mptw_top__DOT__system_control_flush[9];
        CData/*0:0*/ mptw_top__DOT__system_control_stall[9];
        CData/*0:0*/ mptw_top__DOT__system_status_busy[9];
        CData/*1:0*/ mptw_top__DOT__system_status_flushed[9];
        CData/*0:0*/ mptw_top__DOT__system_status_stalled[9];
        WData/*279:0*/ mptw_top__DOT__issue_stage_slave_data[2][9];
        CData/*0:0*/ mptw_top__DOT__issue_stage_slave_valid[2];
        CData/*0:0*/ mptw_top__DOT__issue_stage_slave_ready[2];
        WData/*279:0*/ mptw_top__DOT__issue_stage_master_data[2][9];
        CData/*0:0*/ mptw_top__DOT__issue_stage_master_valid[2];
        CData/*0:0*/ mptw_top__DOT__issue_stage_master_ready[2];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy;
    CData/*0:0*/ mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound1;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound2;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound3;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound4;
    CData/*1:0*/ mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__stage_master_valid;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid;
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[9];
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[9];
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
    WData/*279:0*/ __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[9];
    CData/*0:0*/ mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[9];
    CData/*1:0*/ mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[9];
    CData/*0:0*/ mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[9];
    CData/*0:0*/ mptw_top__DOT____Vcellout__control_unit_u__master_control_stall[9];
    CData/*1:0*/ mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[9];
    CData/*0:0*/ mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[2];
    CData/*0:0*/ mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[2];
    WData/*279:0*/ mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[2][9];
    CData/*0:0*/ mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[2];
    CData/*0:0*/ mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[2];
    WData/*279:0*/ mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[2][9];
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__issue_stage_master_ready[2];
    CData/*0:0*/ __Vm_traceActivity[5];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmptw_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmptw_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmptw_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmptw_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmptw_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmptw_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmptw_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmptw_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(Vmptw_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(Vmptw_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmptw_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__6(Vmptw_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vmptw_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(Vmptw_top__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
