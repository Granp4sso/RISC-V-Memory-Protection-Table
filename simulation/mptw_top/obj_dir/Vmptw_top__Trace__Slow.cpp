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
        tracep->declBit(c+53,"clk_i", false,-1);
        tracep->declBit(c+54,"rst_ni", false,-1);
        tracep->declBit(c+55,"flush_i", false,-1);
        tracep->declBit(c+56,"mptw_enable_i", false,-1);
        tracep->declQuad(c+57,"spa_i", false,-1, 63,0);
        tracep->declQuad(c+59,"mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+61,"access_type_i", false,-1, 1,0);
        tracep->declBit(c+62,"mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+63,"mptw_ready_o", false,-1);
        tracep->declBit(c+64,"access_page_fault_o", false,-1);
        tracep->declBus(c+65,"format_error_o", false,-1, 2,0);
        tracep->declBit(c+66,"plb_cache_mem_req", false,-1);
        tracep->declBit(c+67,"plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+68,"plb_cache_mem_valid", false,-1);
        tracep->declArray(c+69,"plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+72,"plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+73,"plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+74,"plb_cache_mem_we", false,-1);
        tracep->declBus(c+75,"plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+76,"plb_cache_mem_error", false,-1);
        tracep->declBus(c+80,"mptw_top PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+81,"mptw_top PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top rst_ni", false,-1);
        tracep->declBit(c+55,"mptw_top flush_i", false,-1);
        tracep->declBit(c+56,"mptw_top mptw_enable_i", false,-1);
        tracep->declQuad(c+57,"mptw_top spa_i", false,-1, 63,0);
        tracep->declQuad(c+59,"mptw_top mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+61,"mptw_top access_type_i", false,-1, 1,0);
        tracep->declBit(c+62,"mptw_top mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+63,"mptw_top mptw_ready_o", false,-1);
        tracep->declBit(c+64,"mptw_top access_page_fault_o", false,-1);
        tracep->declBus(c+65,"mptw_top format_error_o", false,-1, 2,0);
        tracep->declBit(c+66,"mptw_top plb_cache_mem_req", false,-1);
        tracep->declBit(c+67,"mptw_top plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+68,"mptw_top plb_cache_mem_valid", false,-1);
        tracep->declArray(c+69,"mptw_top plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+72,"mptw_top plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+73,"mptw_top plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+74,"mptw_top plb_cache_mem_we", false,-1);
        tracep->declBus(c+75,"mptw_top plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+76,"mptw_top plb_cache_mem_error", false,-1);
        tracep->declBus(c+82,"mptw_top fetch_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+82,"mptw_top plb_lookup_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+82,"mptw_top walking_stage_datawidth", false,-1, 31,0);
        tracep->declArray(c+29,"mptw_top input_transaction", false,-1, 131,0);
        tracep->declBus(c+34,"mptw_top fetch_exception_cause", false,-1, 2,0);
        tracep->declArray(c+29,"mptw_top input_to_fetch_data", false,-1, 131,0);
        tracep->declBit(c+62,"mptw_top input_to_fetch_valid", false,-1);
        tracep->declBit(c+35,"mptw_top input_to_fetch_ready", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_to_pipe_data", false,-1, 131,0);
        tracep->declBit(c+62,"mptw_top fetch_to_pipe_valid", false,-1);
        tracep->declBit(c+35,"mptw_top fetch_to_pipe_ready", false,-1);
        tracep->declArray(c+1,"mptw_top pipe_to_plb_lookup_data", false,-1, 131,0);
        tracep->declBit(c+6,"mptw_top pipe_to_plb_lookup_valid", false,-1);
        tracep->declBit(c+36,"mptw_top pipe_to_plb_lookup_ready", false,-1);
        tracep->declArray(c+37,"mptw_top plb_lookup_to_pipe_data", false,-1, 131,0);
        tracep->declBit(c+42,"mptw_top plb_lookup_to_pipe_valid", false,-1);
        tracep->declBit(c+7,"mptw_top plb_lookup_to_pipe_ready", false,-1);
        tracep->declArray(c+8,"mptw_top pipe_to_walking_data", false,-1, 131,0);
        tracep->declBit(c+13,"mptw_top pipe_to_walking_valid", false,-1);
        tracep->declBit(c+83,"mptw_top pipe_to_walking_ready", false,-1);
        tracep->declBit(c+14,"mptw_top fetch_pipe_status_busy", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_pipe_status_busy", false,-1);
        tracep->declBus(c+84,"mptw_top fetch_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+84,"mptw_top fetch_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top fetch_stage_u clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top fetch_stage_u rst_ni", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_stage_u fetch_slave_data", false,-1, 131,0);
        tracep->declBit(c+62,"mptw_top fetch_stage_u fetch_slave_valid", false,-1);
        tracep->declBit(c+35,"mptw_top fetch_stage_u fetch_slave_ready", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_stage_u fetch_master_data", false,-1, 131,0);
        tracep->declBit(c+62,"mptw_top fetch_stage_u fetch_master_valid", false,-1);
        tracep->declBit(c+35,"mptw_top fetch_stage_u fetch_master_ready", false,-1);
        tracep->declBit(c+85,"mptw_top fetch_stage_u fetch_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top fetch_stage_u fetch_ctrl_stall", false,-1);
        tracep->declBus(c+34,"mptw_top fetch_stage_u exception_cause_o", false,-1, 2,0);
        tracep->declBit(c+62,"mptw_top fetch_stage_u stage_active", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_stage_u transaction_i", false,-1, 131,0);
        tracep->declArray(c+86,"mptw_top fetch_stage_u transaction_o", false,-1, 131,0);
        tracep->declQuad(c+43,"mptw_top fetch_stage_u mmpt", false,-1, 63,0);
        tracep->declQuad(c+45,"mptw_top fetch_stage_u spa", false,-1, 63,0);
        tracep->declBus(c+84,"mptw_top fetch_to_plb_lookup_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top fetch_to_plb_lookup_reg_u clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top fetch_to_plb_lookup_reg_u rst_ni", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_to_plb_lookup_reg_u s_data_data", false,-1, 131,0);
        tracep->declBit(c+62,"mptw_top fetch_to_plb_lookup_reg_u s_data_valid", false,-1);
        tracep->declBit(c+35,"mptw_top fetch_to_plb_lookup_reg_u s_data_ready", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_to_plb_lookup_reg_u m_data_data", false,-1, 131,0);
        tracep->declBit(c+6,"mptw_top fetch_to_plb_lookup_reg_u m_data_valid", false,-1);
        tracep->declBit(c+36,"mptw_top fetch_to_plb_lookup_reg_u m_data_ready", false,-1);
        tracep->declBit(c+85,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+14,"mptw_top fetch_to_plb_lookup_reg_u s_status_busy", false,-1);
        tracep->declArray(c+29,"mptw_top fetch_to_plb_lookup_reg_u reg_data_d", false,-1, 131,0);
        tracep->declArray(c+1,"mptw_top fetch_to_plb_lookup_reg_u reg_data_q", false,-1, 131,0);
        tracep->declBit(c+77,"mptw_top fetch_to_plb_lookup_reg_u valid_d", false,-1);
        tracep->declBit(c+6,"mptw_top fetch_to_plb_lookup_reg_u valid_q", false,-1);
        tracep->declBit(c+62,"mptw_top fetch_to_plb_lookup_reg_u first_valid_d", false,-1);
        tracep->declBit(c+14,"mptw_top fetch_to_plb_lookup_reg_u first_valid_q", false,-1);
        tracep->declBit(c+47,"mptw_top fetch_to_plb_lookup_reg_u stall", false,-1);
        tracep->declBit(c+85,"mptw_top fetch_to_plb_lookup_reg_u flush", false,-1);
        tracep->declBit(c+14,"mptw_top fetch_to_plb_lookup_reg_u busy", false,-1);
        tracep->declBus(c+84,"mptw_top plb_lookup_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+84,"mptw_top plb_lookup_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+80,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+81,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top plb_lookup_stage_u clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_stage_u rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top plb_lookup_stage_u plb_lookup_slave_data", false,-1, 131,0);
        tracep->declBit(c+6,"mptw_top plb_lookup_stage_u plb_lookup_slave_valid", false,-1);
        tracep->declBit(c+36,"mptw_top plb_lookup_stage_u plb_lookup_slave_ready", false,-1);
        tracep->declArray(c+37,"mptw_top plb_lookup_stage_u plb_lookup_master_data", false,-1, 131,0);
        tracep->declBit(c+42,"mptw_top plb_lookup_stage_u plb_lookup_master_valid", false,-1);
        tracep->declBit(c+7,"mptw_top plb_lookup_stage_u plb_lookup_master_ready", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_stall", false,-1);
        tracep->declBit(c+66,"mptw_top plb_lookup_stage_u plb_cache_mem_req", false,-1);
        tracep->declBit(c+67,"mptw_top plb_lookup_stage_u plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+68,"mptw_top plb_lookup_stage_u plb_cache_mem_valid", false,-1);
        tracep->declArray(c+69,"mptw_top plb_lookup_stage_u plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+72,"mptw_top plb_lookup_stage_u plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+73,"mptw_top plb_lookup_stage_u plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+74,"mptw_top plb_lookup_stage_u plb_cache_mem_we", false,-1);
        tracep->declBus(c+75,"mptw_top plb_lookup_stage_u plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+76,"mptw_top plb_lookup_stage_u plb_cache_mem_error", false,-1);
        tracep->declArray(c+16,"mptw_top plb_lookup_stage_u plb_tag_req", false,-1, 71,0);
        tracep->declArray(c+1,"mptw_top plb_lookup_stage_u grant_stage_transaction", false,-1, 131,0);
        tracep->declArray(c+19,"mptw_top plb_lookup_stage_u valid_stage_pre_hit_transaction", false,-1, 131,0);
        tracep->declArray(c+37,"mptw_top plb_lookup_stage_u valid_stage_post_hit_transaction", false,-1, 131,0);
        tracep->declBit(c+78,"mptw_top plb_lookup_stage_u plb_hit_d", false,-1);
        tracep->declBit(c+24,"mptw_top plb_lookup_stage_u plb_hit_q", false,-1);
        tracep->declBit(c+68,"mptw_top plb_lookup_stage_u plb_hit_valid_d", false,-1);
        tracep->declBit(c+25,"mptw_top plb_lookup_stage_u plb_hit_valid_q", false,-1);
        tracep->declBit(c+42,"mptw_top plb_lookup_stage_u hit_produced", false,-1);
        tracep->declArray(c+1,"mptw_top plb_lookup_stage_u grant_to_valid_data", false,-1, 131,0);
        tracep->declBit(c+48,"mptw_top plb_lookup_stage_u grant_to_valid_valid", false,-1);
        tracep->declBit(c+49,"mptw_top plb_lookup_stage_u grant_to_valid_ready", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u grant_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u grant_ctrl_stall", false,-1);
        tracep->declArray(c+19,"mptw_top plb_lookup_stage_u valid_stage_data", false,-1, 131,0);
        tracep->declBit(c+26,"mptw_top plb_lookup_stage_u valid_stage_valid", false,-1);
        tracep->declBit(c+50,"mptw_top plb_lookup_stage_u valid_stage_ready", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u valid_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u valid_ctrl_stall", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_status_busy", false,-1);
        tracep->declBus(c+84,"mptw_top plb_lookup_stage_u grant_to_valid_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top plb_lookup_stage_u grant_to_valid_reg clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_stage_u grant_to_valid_reg rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_data", false,-1, 131,0);
        tracep->declBit(c+48,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_valid", false,-1);
        tracep->declBit(c+49,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_ready", false,-1);
        tracep->declArray(c+19,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_data", false,-1, 131,0);
        tracep->declBit(c+26,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_valid", false,-1);
        tracep->declBit(c+50,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_ready", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_ctrl_stall", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_status_busy", false,-1);
        tracep->declArray(c+1,"mptw_top plb_lookup_stage_u grant_to_valid_reg reg_data_d", false,-1, 131,0);
        tracep->declArray(c+19,"mptw_top plb_lookup_stage_u grant_to_valid_reg reg_data_q", false,-1, 131,0);
        tracep->declBit(c+51,"mptw_top plb_lookup_stage_u grant_to_valid_reg valid_d", false,-1);
        tracep->declBit(c+26,"mptw_top plb_lookup_stage_u grant_to_valid_reg valid_q", false,-1);
        tracep->declBit(c+48,"mptw_top plb_lookup_stage_u grant_to_valid_reg first_valid_d", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_to_valid_reg first_valid_q", false,-1);
        tracep->declBit(c+52,"mptw_top plb_lookup_stage_u grant_to_valid_reg stall", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_stage_u grant_to_valid_reg flush", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_to_valid_reg busy", false,-1);
        tracep->declBus(c+84,"mptw_top plb_lookup_to_walking_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+53,"mptw_top plb_lookup_to_walking_reg_u clk_i", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_to_walking_reg_u rst_ni", false,-1);
        tracep->declArray(c+37,"mptw_top plb_lookup_to_walking_reg_u s_data_data", false,-1, 131,0);
        tracep->declBit(c+42,"mptw_top plb_lookup_to_walking_reg_u s_data_valid", false,-1);
        tracep->declBit(c+7,"mptw_top plb_lookup_to_walking_reg_u s_data_ready", false,-1);
        tracep->declArray(c+8,"mptw_top plb_lookup_to_walking_reg_u m_data_data", false,-1, 131,0);
        tracep->declBit(c+13,"mptw_top plb_lookup_to_walking_reg_u m_data_valid", false,-1);
        tracep->declBit(c+83,"mptw_top plb_lookup_to_walking_reg_u m_data_ready", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_to_walking_reg_u s_status_busy", false,-1);
        tracep->declArray(c+37,"mptw_top plb_lookup_to_walking_reg_u reg_data_d", false,-1, 131,0);
        tracep->declArray(c+8,"mptw_top plb_lookup_to_walking_reg_u reg_data_q", false,-1, 131,0);
        tracep->declBit(c+79,"mptw_top plb_lookup_to_walking_reg_u valid_d", false,-1);
        tracep->declBit(c+13,"mptw_top plb_lookup_to_walking_reg_u valid_q", false,-1);
        tracep->declBit(c+42,"mptw_top plb_lookup_to_walking_reg_u first_valid_d", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_to_walking_reg_u first_valid_q", false,-1);
        tracep->declBit(c+28,"mptw_top plb_lookup_to_walking_reg_u stall", false,-1);
        tracep->declBit(c+85,"mptw_top plb_lookup_to_walking_reg_u flush", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_to_walking_reg_u busy", false,-1);
        tracep->declBus(c+91,"mpt_pkg PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+92,"mpt_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+93,"mpt_pkg MPTSIZE", false,-1, 31,0);
        tracep->declBus(c+92,"mpt_pkg NUMPGINRANGE", false,-1, 31,0);
        tracep->declBus(c+94,"mpt_pkg SDID_LEN", false,-1, 31,0);
        tracep->declBus(c+95,"mpt_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+96,"mpt_pkg PAGESIZE", false,-1, 31,0);
        tracep->declBus(c+97,"mpt_pkg BARE_MODE", false,-1, 3,0);
        tracep->declBus(c+98,"mpt_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+99,"mpt_pkg SMMPT43_MODE", false,-1, 3,0);
        tracep->declBus(c+100,"mpt_pkg SMMPT52_MODE", false,-1, 3,0);
        tracep->declBus(c+101,"mpt_pkg SMMPT64_MODE", false,-1, 3,0);
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
    // Body
    {
        tracep->fullWData(oldp+1,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),132);
        tracep->fullBit(oldp+6,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__valid_q));
        tracep->fullBit(oldp+7,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall)))));
        tracep->fullWData(oldp+8,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),132);
        tracep->fullBit(oldp+13,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__valid_q));
        tracep->fullBit(oldp+14,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__first_valid_q));
        tracep->fullBit(oldp+15,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__first_valid_q));
        tracep->fullWData(oldp+16,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
        tracep->fullWData(oldp+19,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q),132);
        tracep->fullBit(oldp+24,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q));
        tracep->fullBit(oldp+25,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
        tracep->fullBit(oldp+26,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__valid_q));
        tracep->fullBit(oldp+27,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__first_valid_q));
        tracep->fullBit(oldp+28,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall));
        tracep->fullWData(oldp+29,(vlTOPp->mptw_top__DOT__input_transaction),132);
        tracep->fullCData(oldp+34,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
        tracep->fullBit(oldp+35,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall)))));
        tracep->fullBit(oldp+36,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
        tracep->fullWData(oldp+37,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction),132);
        tracep->fullBit(oldp+42,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced));
        tracep->fullQData(oldp+43,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+45,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[0U])) 
                                                     >> 4U)))),64);
        tracep->fullBit(oldp+47,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall));
        tracep->fullBit(oldp+48,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid));
        tracep->fullBit(oldp+49,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)))));
        tracep->fullBit(oldp+50,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready));
        tracep->fullBit(oldp+51,(((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)) 
                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid))));
        tracep->fullBit(oldp+52,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall));
        tracep->fullBit(oldp+53,(vlTOPp->clk_i));
        tracep->fullBit(oldp+54,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+55,(vlTOPp->flush_i));
        tracep->fullBit(oldp+56,(vlTOPp->mptw_enable_i));
        tracep->fullQData(oldp+57,(vlTOPp->spa_i),64);
        tracep->fullQData(oldp+59,(vlTOPp->mmpt_reg_i),64);
        tracep->fullCData(oldp+61,(vlTOPp->access_type_i),2);
        tracep->fullBit(oldp+62,(vlTOPp->mptw_transaction_valid_i));
        tracep->fullBit(oldp+63,(vlTOPp->mptw_ready_o));
        tracep->fullBit(oldp+64,(vlTOPp->access_page_fault_o));
        tracep->fullCData(oldp+65,(vlTOPp->format_error_o),3);
        tracep->fullBit(oldp+66,(vlTOPp->plb_cache_mem_req));
        tracep->fullBit(oldp+67,(vlTOPp->plb_cache_mem_gnt));
        tracep->fullBit(oldp+68,(vlTOPp->plb_cache_mem_valid));
        tracep->fullWData(oldp+69,(vlTOPp->plb_cache_mem_addr),72);
        tracep->fullCData(oldp+72,(vlTOPp->plb_cache_mem_rdata),8);
        tracep->fullCData(oldp+73,(vlTOPp->plb_cache_mem_wdata),8);
        tracep->fullBit(oldp+74,(vlTOPp->plb_cache_mem_we));
        tracep->fullBit(oldp+75,(vlTOPp->plb_cache_mem_be));
        tracep->fullBit(oldp+76,(vlTOPp->plb_cache_mem_error));
        tracep->fullBit(oldp+77,(((~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall)) 
                                  & (IData)(vlTOPp->mptw_transaction_valid_i))));
        tracep->fullBit(oldp+78,((1U & (IData)(vlTOPp->plb_cache_mem_rdata))));
        tracep->fullBit(oldp+79,(((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall)) 
                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced))));
        tracep->fullIData(oldp+80,(8U),32);
        tracep->fullIData(oldp+81,(0x48U),32);
        tracep->fullIData(oldp+82,(0x84U),32);
        tracep->fullBit(oldp+83,(vlTOPp->mptw_top__DOT__pipe_to_walking_ready));
        tracep->fullIData(oldp+84,(0x84U),32);
        tracep->fullBit(oldp+85,(0U));
        tracep->fullWData(oldp+86,(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__transaction_o),132);
        tracep->fullIData(oldp+91,(0x34U),32);
        tracep->fullIData(oldp+92,(4U),32);
        tracep->fullIData(oldp+93,(8U),32);
        tracep->fullIData(oldp+94,(6U),32);
        tracep->fullIData(oldp+95,(2U),32);
        tracep->fullIData(oldp+96,(0x1000U),32);
        tracep->fullCData(oldp+97,(0U),4);
        tracep->fullIData(oldp+98,(0x40U),32);
        tracep->fullCData(oldp+99,(1U),4);
        tracep->fullCData(oldp+100,(2U),4);
        tracep->fullCData(oldp+101,(3U),4);
    }
}
