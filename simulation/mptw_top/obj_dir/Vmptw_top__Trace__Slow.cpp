// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmptw_top__Syms.h"


//======================

void Vmptw_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmptw_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmptw_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmptw_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmptw_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+326,"clk_i", false,-1);
        tracep->declBit(c+327,"rst_ni", false,-1);
        tracep->declBit(c+328,"flush_i", false,-1);
        tracep->declBit(c+329,"mptw_enable_i", false,-1);
        tracep->declQuad(c+330,"spa_i", false,-1, 63,0);
        tracep->declQuad(c+332,"mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+334,"access_type_i", false,-1, 1,0);
        tracep->declBit(c+335,"mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+336,"mptw_ready_o", false,-1);
        tracep->declBit(c+337,"access_page_fault_o", false,-1);
        tracep->declBus(c+338,"format_error_o", false,-1, 2,0);
        tracep->declBit(c+339,"plb_master_mem_req", false,-1);
        tracep->declBit(c+340,"plb_master_mem_gnt", false,-1);
        tracep->declBit(c+341,"plb_master_mem_valid", false,-1);
        tracep->declQuad(c+342,"plb_master_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+344,"plb_master_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+346,"plb_master_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+348,"plb_master_mem_we", false,-1);
        tracep->declBus(c+349,"plb_master_mem_be", false,-1, 7,0);
        tracep->declBit(c+350,"plb_master_mem_error", false,-1);
        tracep->declBus(c+351,"mptw_top NUM_STAGES", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top rst_ni", false,-1);
        tracep->declBit(c+328,"mptw_top flush_i", false,-1);
        tracep->declBit(c+329,"mptw_top mptw_enable_i", false,-1);
        tracep->declQuad(c+330,"mptw_top spa_i", false,-1, 63,0);
        tracep->declQuad(c+332,"mptw_top mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+334,"mptw_top access_type_i", false,-1, 1,0);
        tracep->declBit(c+335,"mptw_top mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+336,"mptw_top mptw_ready_o", false,-1);
        tracep->declBit(c+337,"mptw_top access_page_fault_o", false,-1);
        tracep->declBus(c+338,"mptw_top format_error_o", false,-1, 2,0);
        tracep->declBit(c+339,"mptw_top plb_master_mem_req", false,-1);
        tracep->declBit(c+340,"mptw_top plb_master_mem_gnt", false,-1);
        tracep->declBit(c+341,"mptw_top plb_master_mem_valid", false,-1);
        tracep->declQuad(c+342,"mptw_top plb_master_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+344,"mptw_top plb_master_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+346,"mptw_top plb_master_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+348,"mptw_top plb_master_mem_we", false,-1);
        tracep->declBus(c+349,"mptw_top plb_master_mem_be", false,-1, 7,0);
        tracep->declBit(c+350,"mptw_top plb_master_mem_error", false,-1);
        tracep->declBus(c+353,"mptw_top fetch_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+353,"mptw_top plb_lookup_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+353,"mptw_top walking_stage_datawidth", false,-1, 31,0);
        tracep->declArray(c+1,"mptw_top input_transaction", false,-1, 195,0);
        tracep->declBus(c+8,"mptw_top fetch_exception_cause", false,-1, 2,0);
        tracep->declArray(c+1,"mptw_top input_to_fetch_data", false,-1, 195,0);
        tracep->declBit(c+335,"mptw_top input_to_fetch_valid", false,-1);
        tracep->declBit(c+9,"mptw_top input_to_fetch_ready", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_to_pipe_data", false,-1, 195,0);
        tracep->declBit(c+335,"mptw_top fetch_to_pipe_valid", false,-1);
        tracep->declBit(c+9,"mptw_top fetch_to_pipe_ready", false,-1);
        tracep->declArray(c+231,"mptw_top pipe_to_plb_lookup_data", false,-1, 195,0);
        tracep->declBit(c+238,"mptw_top pipe_to_plb_lookup_valid", false,-1);
        tracep->declBit(c+10,"mptw_top pipe_to_plb_lookup_ready", false,-1);
        tracep->declArray(c+11,"mptw_top plb_lookup_to_pipe_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_to_pipe_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_to_pipe_ready", false,-1);
        tracep->declArray(c+239,"mptw_top pipe_to_walking_data", false,-1, 195,0);
        tracep->declBit(c+246,"mptw_top pipe_to_walking_valid", false,-1);
        tracep->declBit(c+20,"mptw_top pipe_to_walking_ready", false,-1);
        tracep->declBit(c+247,"mptw_top fetch_pipe_status_busy", false,-1);
        tracep->declBit(c+248,"mptw_top plb_lookup_pipe_status_busy", false,-1);
        tracep->declArray(c+249,"mptw_top walking_stage_data", false,-1, 783,0);
        tracep->declBus(c+274,"mptw_top walking_stage_valid", false,-1, 3,0);
        tracep->declBus(c+21,"mptw_top walking_stage_ready", false,-1, 3,0);
        tracep->declBus(c+354,"mptw_top fetch_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+354,"mptw_top fetch_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top fetch_stage_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top fetch_stage_u rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u fetch_slave_data", false,-1, 195,0);
        tracep->declBit(c+335,"mptw_top fetch_stage_u fetch_slave_valid", false,-1);
        tracep->declBit(c+9,"mptw_top fetch_stage_u fetch_slave_ready", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u fetch_master_data", false,-1, 195,0);
        tracep->declBit(c+335,"mptw_top fetch_stage_u fetch_master_valid", false,-1);
        tracep->declBit(c+9,"mptw_top fetch_stage_u fetch_master_ready", false,-1);
        tracep->declBit(c+355,"mptw_top fetch_stage_u fetch_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top fetch_stage_u fetch_ctrl_stall", false,-1);
        tracep->declBus(c+8,"mptw_top fetch_stage_u exception_cause_o", false,-1, 2,0);
        tracep->declBit(c+335,"mptw_top fetch_stage_u stage_active", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u transaction_i", false,-1, 195,0);
        tracep->declArray(c+356,"mptw_top fetch_stage_u transaction_o", false,-1, 195,0);
        tracep->declQuad(c+22,"mptw_top fetch_stage_u mmpt", false,-1, 63,0);
        tracep->declQuad(c+24,"mptw_top fetch_stage_u spa", false,-1, 63,0);
        tracep->declBus(c+354,"mptw_top fetch_to_plb_lookup_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top fetch_to_plb_lookup_reg_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top fetch_to_plb_lookup_reg_u rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_to_plb_lookup_reg_u s_data_data", false,-1, 195,0);
        tracep->declBit(c+335,"mptw_top fetch_to_plb_lookup_reg_u s_data_valid", false,-1);
        tracep->declBit(c+9,"mptw_top fetch_to_plb_lookup_reg_u s_data_ready", false,-1);
        tracep->declArray(c+231,"mptw_top fetch_to_plb_lookup_reg_u m_data_data", false,-1, 195,0);
        tracep->declBit(c+238,"mptw_top fetch_to_plb_lookup_reg_u m_data_valid", false,-1);
        tracep->declBit(c+10,"mptw_top fetch_to_plb_lookup_reg_u m_data_ready", false,-1);
        tracep->declBit(c+355,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+247,"mptw_top fetch_to_plb_lookup_reg_u s_status_busy", false,-1);
        tracep->declBit(c+247,"mptw_top fetch_to_plb_lookup_reg_u current_state", false,-1);
        tracep->declBit(c+26,"mptw_top fetch_to_plb_lookup_reg_u next_state", false,-1);
        tracep->declArray(c+231,"mptw_top fetch_to_plb_lookup_reg_u reg_data_q", false,-1, 195,0);
        tracep->declArray(c+27,"mptw_top fetch_to_plb_lookup_reg_u reg_data_d", false,-1, 195,0);
        tracep->declBit(c+363,"mptw_top fetch_to_plb_lookup_reg_u dummy", false,-1);
        tracep->declBus(c+354,"mptw_top plb_lookup_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+354,"mptw_top plb_lookup_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+364,"mptw_top plb_lookup_stage_u TRANSACTION_FIFO_DEPTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top plb_lookup_stage_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top plb_lookup_stage_u rst_ni", false,-1);
        tracep->declArray(c+231,"mptw_top plb_lookup_stage_u stage_slave_data", false,-1, 195,0);
        tracep->declBit(c+238,"mptw_top plb_lookup_stage_u stage_slave_valid", false,-1);
        tracep->declBit(c+10,"mptw_top plb_lookup_stage_u stage_slave_ready", false,-1);
        tracep->declArray(c+11,"mptw_top plb_lookup_stage_u stage_master_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_stage_u stage_master_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_stage_u stage_master_ready", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_stall", false,-1);
        tracep->declBit(c+339,"mptw_top plb_lookup_stage_u plb_master_mem_req", false,-1);
        tracep->declBit(c+340,"mptw_top plb_lookup_stage_u plb_master_mem_gnt", false,-1);
        tracep->declBit(c+341,"mptw_top plb_lookup_stage_u plb_master_mem_valid", false,-1);
        tracep->declQuad(c+342,"mptw_top plb_lookup_stage_u plb_master_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+344,"mptw_top plb_lookup_stage_u plb_master_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+346,"mptw_top plb_lookup_stage_u plb_master_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+348,"mptw_top plb_lookup_stage_u plb_master_mem_we", false,-1);
        tracep->declBus(c+349,"mptw_top plb_lookup_stage_u plb_master_mem_be", false,-1, 7,0);
        tracep->declBit(c+350,"mptw_top plb_lookup_stage_u plb_master_mem_error", false,-1);
        tracep->declArray(c+34,"mptw_top plb_lookup_stage_u pre_local_transaction", false,-1, 195,0);
        tracep->declArray(c+11,"mptw_top plb_lookup_stage_u post_local_transaction", false,-1, 195,0);
        tracep->declArray(c+365,"mptw_top plb_lookup_stage_u plb_tag_req", false,-1, 71,0);
        tracep->declArray(c+34,"mptw_top plb_lookup_stage_u mem_to_local_bus_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_stage_u mem_to_local_bus_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_stage_u mem_to_local_bus_ready", false,-1);
        tracep->declArray(c+368,"mptw_top plb_lookup_stage_u local_to_master_bus_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_stage_u local_to_master_bus_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_stage_u local_to_master_bus_ready", false,-1);
        tracep->declBus(c+354,"mptw_top plb_lookup_stage_u mem_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+354,"mptw_top plb_lookup_stage_u mem_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+364,"mptw_top plb_lookup_stage_u mem_stage_u TRANSACTION_FIFO_DEPTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top plb_lookup_stage_u mem_stage_u MEMORY_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+352,"mptw_top plb_lookup_stage_u mem_stage_u MEMORY_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top plb_lookup_stage_u mem_stage_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top plb_lookup_stage_u mem_stage_u rst_ni", false,-1);
        tracep->declArray(c+231,"mptw_top plb_lookup_stage_u mem_stage_u stage_slave_data", false,-1, 195,0);
        tracep->declBit(c+238,"mptw_top plb_lookup_stage_u mem_stage_u stage_slave_valid", false,-1);
        tracep->declBit(c+10,"mptw_top plb_lookup_stage_u mem_stage_u stage_slave_ready", false,-1);
        tracep->declArray(c+34,"mptw_top plb_lookup_stage_u mem_stage_u stage_master_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_stage_u mem_stage_u stage_master_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_stage_u mem_stage_u stage_master_ready", false,-1);
        tracep->declBit(c+339,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_req", false,-1);
        tracep->declBit(c+340,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_gnt", false,-1);
        tracep->declBit(c+341,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_valid", false,-1);
        tracep->declQuad(c+342,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+344,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+346,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+348,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_we", false,-1);
        tracep->declBus(c+349,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_be", false,-1, 7,0);
        tracep->declBit(c+350,"mptw_top plb_lookup_stage_u mem_stage_u memory_master_mem_error", false,-1);
        tracep->declArray(c+231,"mptw_top plb_lookup_stage_u mem_stage_u slave_to_grant_fifo", false,-1, 195,0);
        tracep->declArray(c+41,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_to_valid_fifo", false,-1, 195,0);
        tracep->declArray(c+34,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_to_master", false,-1, 195,0);
        tracep->declBit(c+155,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_full", false,-1);
        tracep->declBit(c+156,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_empty", false,-1);
        tracep->declBit(c+48,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_push", false,-1);
        tracep->declBit(c+49,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_pop", false,-1);
        tracep->declArray(c+231,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_data_in", false,-1, 195,0);
        tracep->declArray(c+157,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_data_out", false,-1, 195,0);
        tracep->declBit(c+164,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_full", false,-1);
        tracep->declBit(c+165,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_empty", false,-1);
        tracep->declBit(c+50,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_push", false,-1);
        tracep->declBit(c+51,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_pop", false,-1);
        tracep->declArray(c+52,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_data_in", false,-1, 195,0);
        tracep->declArray(c+166,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_data_out", false,-1, 195,0);
        tracep->declBit(c+375,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u FALL_THROUGH", false,-1);
        tracep->declBus(c+376,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+377,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u DEPTH", false,-1, 31,0);
        tracep->declBus(c+378,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u ADDR_DEPTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u rst_ni", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u flush_i", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u testmode_i", false,-1);
        tracep->declBit(c+155,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u full_o", false,-1);
        tracep->declBit(c+156,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u empty_o", false,-1);
        tracep->declBus(c+173,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u usage_o", false,-1, 1,0);
        tracep->declArray(c+231,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u data_i", false,-1, 195,0);
        tracep->declBit(c+48,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u push_i", false,-1);
        tracep->declArray(c+157,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u data_o", false,-1, 195,0);
        tracep->declBit(c+49,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u pop_i", false,-1);
        tracep->declBus(c+377,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u FifoDepth", false,-1, 31,0);
        tracep->declBit(c+59,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u gate_clock", false,-1);
        tracep->declBus(c+60,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u read_pointer_n", false,-1, 1,0);
        tracep->declBus(c+174,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u read_pointer_q", false,-1, 1,0);
        tracep->declBus(c+61,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u write_pointer_n", false,-1, 1,0);
        tracep->declBus(c+175,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u write_pointer_q", false,-1, 1,0);
        tracep->declBus(c+62,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u status_cnt_n", false,-1, 2,0);
        tracep->declBus(c+176,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u status_cnt_q", false,-1, 2,0);
        tracep->declArray(c+63,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u mem_n", false,-1, 783,0);
        tracep->declArray(c+177,"mptw_top plb_lookup_stage_u mem_stage_u grant_fifo_u mem_q", false,-1, 783,0);
        tracep->declBit(c+375,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u FALL_THROUGH", false,-1);
        tracep->declBus(c+376,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+377,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u DEPTH", false,-1, 31,0);
        tracep->declBus(c+378,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u ADDR_DEPTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u rst_ni", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u flush_i", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u testmode_i", false,-1);
        tracep->declBit(c+164,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u full_o", false,-1);
        tracep->declBit(c+165,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u empty_o", false,-1);
        tracep->declBus(c+202,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u usage_o", false,-1, 1,0);
        tracep->declArray(c+52,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u data_i", false,-1, 195,0);
        tracep->declBit(c+50,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u push_i", false,-1);
        tracep->declArray(c+166,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u data_o", false,-1, 195,0);
        tracep->declBit(c+51,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u pop_i", false,-1);
        tracep->declBus(c+377,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u FifoDepth", false,-1, 31,0);
        tracep->declBit(c+88,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u gate_clock", false,-1);
        tracep->declBus(c+89,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u read_pointer_n", false,-1, 1,0);
        tracep->declBus(c+203,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u read_pointer_q", false,-1, 1,0);
        tracep->declBus(c+90,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u write_pointer_n", false,-1, 1,0);
        tracep->declBus(c+204,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u write_pointer_q", false,-1, 1,0);
        tracep->declBus(c+91,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u status_cnt_n", false,-1, 2,0);
        tracep->declBus(c+205,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u status_cnt_q", false,-1, 2,0);
        tracep->declArray(c+92,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u mem_n", false,-1, 783,0);
        tracep->declArray(c+206,"mptw_top plb_lookup_stage_u mem_stage_u valid_fifo_u mem_q", false,-1, 783,0);
        tracep->declBus(c+354,"mptw_top plb_lookup_to_walking_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top plb_lookup_to_walking_reg_u clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top plb_lookup_to_walking_reg_u rst_ni", false,-1);
        tracep->declArray(c+11,"mptw_top plb_lookup_to_walking_reg_u s_data_data", false,-1, 195,0);
        tracep->declBit(c+18,"mptw_top plb_lookup_to_walking_reg_u s_data_valid", false,-1);
        tracep->declBit(c+19,"mptw_top plb_lookup_to_walking_reg_u s_data_ready", false,-1);
        tracep->declArray(c+239,"mptw_top plb_lookup_to_walking_reg_u m_data_data", false,-1, 195,0);
        tracep->declBit(c+246,"mptw_top plb_lookup_to_walking_reg_u m_data_valid", false,-1);
        tracep->declBit(c+20,"mptw_top plb_lookup_to_walking_reg_u m_data_ready", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+248,"mptw_top plb_lookup_to_walking_reg_u s_status_busy", false,-1);
        tracep->declBit(c+248,"mptw_top plb_lookup_to_walking_reg_u current_state", false,-1);
        tracep->declBit(c+117,"mptw_top plb_lookup_to_walking_reg_u next_state", false,-1);
        tracep->declArray(c+239,"mptw_top plb_lookup_to_walking_reg_u reg_data_q", false,-1, 195,0);
        tracep->declArray(c+118,"mptw_top plb_lookup_to_walking_reg_u reg_data_d", false,-1, 195,0);
        tracep->declBit(c+379,"mptw_top plb_lookup_to_walking_reg_u dummy", false,-1);
        tracep->declBus(c+354,"mptw_top gen_walking_stages[0] walking_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top gen_walking_stages[0] walking_reg clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top gen_walking_stages[0] walking_reg rst_ni", false,-1);
        tracep->declArray(c+275,"mptw_top gen_walking_stages[0] walking_reg s_data_data", false,-1, 195,0);
        tracep->declBit(c+282,"mptw_top gen_walking_stages[0] walking_reg s_data_valid", false,-1);
        tracep->declBit(c+125,"mptw_top gen_walking_stages[0] walking_reg s_data_ready", false,-1);
        tracep->declArray(c+283,"mptw_top gen_walking_stages[0] walking_reg m_data_data", false,-1, 195,0);
        tracep->declBit(c+290,"mptw_top gen_walking_stages[0] walking_reg m_data_valid", false,-1);
        tracep->declBit(c+126,"mptw_top gen_walking_stages[0] walking_reg m_data_ready", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[0] walking_reg s_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[0] walking_reg s_ctrl_stall", false,-1);
        tracep->declBit(c+291,"mptw_top gen_walking_stages[0] walking_reg s_status_busy", false,-1);
        tracep->declBit(c+291,"mptw_top gen_walking_stages[0] walking_reg current_state", false,-1);
        tracep->declBit(c+127,"mptw_top gen_walking_stages[0] walking_reg next_state", false,-1);
        tracep->declArray(c+283,"mptw_top gen_walking_stages[0] walking_reg reg_data_q", false,-1, 195,0);
        tracep->declArray(c+128,"mptw_top gen_walking_stages[0] walking_reg reg_data_d", false,-1, 195,0);
        tracep->declBit(c+380,"mptw_top gen_walking_stages[0] walking_reg dummy", false,-1);
        tracep->declBus(c+354,"mptw_top gen_walking_stages[1] walking_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top gen_walking_stages[1] walking_reg clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top gen_walking_stages[1] walking_reg rst_ni", false,-1);
        tracep->declArray(c+292,"mptw_top gen_walking_stages[1] walking_reg s_data_data", false,-1, 195,0);
        tracep->declBit(c+299,"mptw_top gen_walking_stages[1] walking_reg s_data_valid", false,-1);
        tracep->declBit(c+135,"mptw_top gen_walking_stages[1] walking_reg s_data_ready", false,-1);
        tracep->declArray(c+300,"mptw_top gen_walking_stages[1] walking_reg m_data_data", false,-1, 195,0);
        tracep->declBit(c+307,"mptw_top gen_walking_stages[1] walking_reg m_data_valid", false,-1);
        tracep->declBit(c+136,"mptw_top gen_walking_stages[1] walking_reg m_data_ready", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[1] walking_reg s_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[1] walking_reg s_ctrl_stall", false,-1);
        tracep->declBit(c+308,"mptw_top gen_walking_stages[1] walking_reg s_status_busy", false,-1);
        tracep->declBit(c+308,"mptw_top gen_walking_stages[1] walking_reg current_state", false,-1);
        tracep->declBit(c+137,"mptw_top gen_walking_stages[1] walking_reg next_state", false,-1);
        tracep->declArray(c+300,"mptw_top gen_walking_stages[1] walking_reg reg_data_q", false,-1, 195,0);
        tracep->declArray(c+138,"mptw_top gen_walking_stages[1] walking_reg reg_data_d", false,-1, 195,0);
        tracep->declBit(c+381,"mptw_top gen_walking_stages[1] walking_reg dummy", false,-1);
        tracep->declBus(c+354,"mptw_top gen_walking_stages[2] walking_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+326,"mptw_top gen_walking_stages[2] walking_reg clk_i", false,-1);
        tracep->declBit(c+327,"mptw_top gen_walking_stages[2] walking_reg rst_ni", false,-1);
        tracep->declArray(c+309,"mptw_top gen_walking_stages[2] walking_reg s_data_data", false,-1, 195,0);
        tracep->declBit(c+316,"mptw_top gen_walking_stages[2] walking_reg s_data_valid", false,-1);
        tracep->declBit(c+145,"mptw_top gen_walking_stages[2] walking_reg s_data_ready", false,-1);
        tracep->declArray(c+317,"mptw_top gen_walking_stages[2] walking_reg m_data_data", false,-1, 195,0);
        tracep->declBit(c+324,"mptw_top gen_walking_stages[2] walking_reg m_data_valid", false,-1);
        tracep->declBit(c+146,"mptw_top gen_walking_stages[2] walking_reg m_data_ready", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[2] walking_reg s_ctrl_flush", false,-1);
        tracep->declBit(c+355,"mptw_top gen_walking_stages[2] walking_reg s_ctrl_stall", false,-1);
        tracep->declBit(c+325,"mptw_top gen_walking_stages[2] walking_reg s_status_busy", false,-1);
        tracep->declBit(c+325,"mptw_top gen_walking_stages[2] walking_reg current_state", false,-1);
        tracep->declBit(c+147,"mptw_top gen_walking_stages[2] walking_reg next_state", false,-1);
        tracep->declArray(c+317,"mptw_top gen_walking_stages[2] walking_reg reg_data_q", false,-1, 195,0);
        tracep->declArray(c+148,"mptw_top gen_walking_stages[2] walking_reg reg_data_d", false,-1, 195,0);
        tracep->declBit(c+382,"mptw_top gen_walking_stages[2] walking_reg dummy", false,-1);
        tracep->declBus(c+383,"mpt_pkg PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+384,"mpt_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+385,"mpt_pkg MPTSIZE", false,-1, 31,0);
        tracep->declBus(c+384,"mpt_pkg NUMPGINRANGE", false,-1, 31,0);
        tracep->declBus(c+386,"mpt_pkg SDID_LEN", false,-1, 31,0);
        tracep->declBus(c+387,"mpt_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+388,"mpt_pkg PAGESIZE", false,-1, 31,0);
        tracep->declBus(c+389,"mpt_pkg BARE_MODE", false,-1, 3,0);
        tracep->declBus(c+390,"mpt_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+391,"mpt_pkg SMMPT43_MODE", false,-1, 3,0);
        tracep->declBus(c+392,"mpt_pkg SMMPT52_MODE", false,-1, 3,0);
        tracep->declBus(c+393,"mpt_pkg SMMPT64_MODE", false,-1, 3,0);
    }
}

void Vmptw_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmptw_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmptw_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp130[7];
    WData/*223:0*/ __Vtemp136[7];
    WData/*223:0*/ __Vtemp139[7];
    WData/*223:0*/ __Vtemp142[7];
    WData/*223:0*/ __Vtemp145[7];
    // Body
    {
        tracep->fullWData(oldp+1,(vlTOPp->mptw_top__DOT__input_transaction),196);
        tracep->fullCData(oldp+8,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
        tracep->fullBit(oldp+9,(vlTOPp->mptw_top__DOT__fetch_to_pipe_ready));
        tracep->fullBit(oldp+10,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
        tracep->fullWData(oldp+11,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction),196);
        tracep->fullBit(oldp+18,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid));
        tracep->fullBit(oldp+19,(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
        tracep->fullBit(oldp+20,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))));
        tracep->fullCData(oldp+21,(vlTOPp->mptw_top__DOT__walking_stage_ready),4);
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+24,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                                     >> 4U)))),64);
        tracep->fullBit(oldp+26,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state));
        tracep->fullWData(oldp+27,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d),196);
        tracep->fullWData(oldp+34,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master),196);
        tracep->fullWData(oldp+41,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
        tracep->fullBit(oldp+48,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push));
        tracep->fullBit(oldp+49,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop));
        tracep->fullBit(oldp+50,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
        tracep->fullBit(oldp+51,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
        tracep->fullWData(oldp+52,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in),196);
        tracep->fullBit(oldp+59,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
        tracep->fullCData(oldp+60,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
        tracep->fullCData(oldp+61,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
        tracep->fullCData(oldp+62,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
        tracep->fullWData(oldp+63,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
        tracep->fullBit(oldp+88,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
        tracep->fullCData(oldp+89,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
        tracep->fullCData(oldp+90,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
        tracep->fullCData(oldp+91,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
        tracep->fullWData(oldp+92,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
        tracep->fullBit(oldp+117,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state));
        tracep->fullWData(oldp+118,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d),196);
        tracep->fullBit(oldp+125,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready));
        tracep->fullBit(oldp+126,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                         >> 1U))));
        tracep->fullBit(oldp+127,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__next_state));
        tracep->fullWData(oldp+128,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d),196);
        tracep->fullBit(oldp+135,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready));
        tracep->fullBit(oldp+136,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                         >> 2U))));
        tracep->fullBit(oldp+137,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__next_state));
        tracep->fullWData(oldp+138,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d),196);
        tracep->fullBit(oldp+145,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready));
        tracep->fullBit(oldp+146,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                         >> 3U))));
        tracep->fullBit(oldp+147,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__next_state));
        tracep->fullWData(oldp+148,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d),196);
        tracep->fullBit(oldp+155,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
        tracep->fullBit(oldp+156,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
            __Vtemp130[0U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[1U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(2U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(1U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[2U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(3U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(2U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[3U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(4U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(3U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[4U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(5U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(4U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[5U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(6U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(5U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
            __Vtemp130[6U] = (0xfU & (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                ((IData)(7U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
        } else {
            __Vtemp130[0U] = 0U;
            __Vtemp130[1U] = 0U;
            __Vtemp130[2U] = 0U;
            __Vtemp130[3U] = 0U;
            __Vtemp130[4U] = 0U;
            __Vtemp130[5U] = 0U;
            __Vtemp130[6U] = 0U;
        }
        tracep->fullWData(oldp+157,(__Vtemp130),196);
        tracep->fullBit(oldp+164,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
        tracep->fullBit(oldp+165,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
            __Vtemp136[0U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[1U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(2U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 ((IData)(1U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[2U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(3U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 ((IData)(2U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[3U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(4U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 ((IData)(3U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[4U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(5U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 ((IData)(4U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[5U] = (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(6U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                 ((IData)(5U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
            __Vtemp136[6U] = (0xfU & (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(7U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))));
        } else {
            __Vtemp136[0U] = 0U;
            __Vtemp136[1U] = 0U;
            __Vtemp136[2U] = 0U;
            __Vtemp136[3U] = 0U;
            __Vtemp136[4U] = 0U;
            __Vtemp136[5U] = 0U;
            __Vtemp136[6U] = 0U;
        }
        tracep->fullWData(oldp+166,(__Vtemp136),196);
        tracep->fullCData(oldp+173,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
        tracep->fullCData(oldp+174,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
        tracep->fullCData(oldp+175,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
        tracep->fullCData(oldp+176,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
        tracep->fullWData(oldp+177,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
        tracep->fullCData(oldp+202,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
        tracep->fullCData(oldp+203,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
        tracep->fullCData(oldp+204,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
        tracep->fullCData(oldp+205,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
        tracep->fullWData(oldp+206,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
        tracep->fullWData(oldp+231,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),196);
        tracep->fullBit(oldp+238,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
        tracep->fullWData(oldp+239,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),196);
        tracep->fullBit(oldp+246,(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
        tracep->fullBit(oldp+247,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state));
        tracep->fullBit(oldp+248,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state));
        tracep->fullWData(oldp+249,(vlTOPp->mptw_top__DOT__walking_stage_data),784);
        tracep->fullCData(oldp+274,(vlTOPp->mptw_top__DOT__walking_stage_valid),4);
        __Vtemp139[0U] = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
        __Vtemp139[1U] = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
        __Vtemp139[2U] = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
        __Vtemp139[3U] = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
        __Vtemp139[4U] = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
        __Vtemp139[5U] = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
        __Vtemp139[6U] = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
        tracep->fullWData(oldp+275,(__Vtemp139),196);
        tracep->fullBit(oldp+282,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))));
        tracep->fullWData(oldp+283,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q),196);
        tracep->fullBit(oldp+290,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__m_data_valid));
        tracep->fullBit(oldp+291,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state));
        __Vtemp142[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                        >> 4U));
        __Vtemp142[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                        >> 4U));
        __Vtemp142[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                        >> 4U));
        __Vtemp142[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                        >> 4U));
        __Vtemp142[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                        >> 4U));
        __Vtemp142[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                           << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                        >> 4U));
        __Vtemp142[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                   << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                >> 4U)));
        tracep->fullWData(oldp+292,(__Vtemp142),196);
        tracep->fullBit(oldp+299,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                         >> 1U))));
        tracep->fullWData(oldp+300,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q),196);
        tracep->fullBit(oldp+307,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__m_data_valid));
        tracep->fullBit(oldp+308,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state));
        __Vtemp145[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                        >> 8U));
        __Vtemp145[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                        >> 8U));
        __Vtemp145[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                        >> 8U));
        __Vtemp145[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                        >> 8U));
        __Vtemp145[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                        >> 8U));
        __Vtemp145[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                           << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                        >> 8U));
        __Vtemp145[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                   << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                >> 8U)));
        tracep->fullWData(oldp+309,(__Vtemp145),196);
        tracep->fullBit(oldp+316,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                         >> 2U))));
        tracep->fullWData(oldp+317,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q),196);
        tracep->fullBit(oldp+324,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__m_data_valid));
        tracep->fullBit(oldp+325,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state));
        tracep->fullBit(oldp+326,(vlTOPp->clk_i));
        tracep->fullBit(oldp+327,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+328,(vlTOPp->flush_i));
        tracep->fullBit(oldp+329,(vlTOPp->mptw_enable_i));
        tracep->fullQData(oldp+330,(vlTOPp->spa_i),64);
        tracep->fullQData(oldp+332,(vlTOPp->mmpt_reg_i),64);
        tracep->fullCData(oldp+334,(vlTOPp->access_type_i),2);
        tracep->fullBit(oldp+335,(vlTOPp->mptw_transaction_valid_i));
        tracep->fullBit(oldp+336,(vlTOPp->mptw_ready_o));
        tracep->fullBit(oldp+337,(vlTOPp->access_page_fault_o));
        tracep->fullCData(oldp+338,(vlTOPp->format_error_o),3);
        tracep->fullBit(oldp+339,(vlTOPp->plb_master_mem_req));
        tracep->fullBit(oldp+340,(vlTOPp->plb_master_mem_gnt));
        tracep->fullBit(oldp+341,(vlTOPp->plb_master_mem_valid));
        tracep->fullQData(oldp+342,(vlTOPp->plb_master_mem_addr),64);
        tracep->fullQData(oldp+344,(vlTOPp->plb_master_mem_rdata),64);
        tracep->fullQData(oldp+346,(vlTOPp->plb_master_mem_wdata),64);
        tracep->fullBit(oldp+348,(vlTOPp->plb_master_mem_we));
        tracep->fullCData(oldp+349,(vlTOPp->plb_master_mem_be),8);
        tracep->fullBit(oldp+350,(vlTOPp->plb_master_mem_error));
        tracep->fullIData(oldp+351,(3U),32);
        tracep->fullIData(oldp+352,(0x40U),32);
        tracep->fullIData(oldp+353,(0xc4U),32);
        tracep->fullIData(oldp+354,(0xc4U),32);
        tracep->fullBit(oldp+355,(0U));
        tracep->fullWData(oldp+356,(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__transaction_o),196);
        tracep->fullBit(oldp+363,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__dummy));
        tracep->fullIData(oldp+364,(4U),32);
        tracep->fullWData(oldp+365,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
        tracep->fullWData(oldp+368,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_master_bus_data),196);
        tracep->fullBit(oldp+375,(0U));
        tracep->fullIData(oldp+376,(0xc4U),32);
        tracep->fullIData(oldp+377,(4U),32);
        tracep->fullIData(oldp+378,(2U),32);
        tracep->fullBit(oldp+379,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__dummy));
        tracep->fullBit(oldp+380,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__dummy));
        tracep->fullBit(oldp+381,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__dummy));
        tracep->fullBit(oldp+382,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__dummy));
        tracep->fullIData(oldp+383,(0x34U),32);
        tracep->fullIData(oldp+384,(4U),32);
        tracep->fullIData(oldp+385,(8U),32);
        tracep->fullIData(oldp+386,(6U),32);
        tracep->fullIData(oldp+387,(2U),32);
        tracep->fullIData(oldp+388,(0x1000U),32);
        tracep->fullCData(oldp+389,(0U),4);
        tracep->fullIData(oldp+390,(0x40U),32);
        tracep->fullCData(oldp+391,(1U),4);
        tracep->fullCData(oldp+392,(2U),4);
        tracep->fullCData(oldp+393,(3U),4);
    }
}
