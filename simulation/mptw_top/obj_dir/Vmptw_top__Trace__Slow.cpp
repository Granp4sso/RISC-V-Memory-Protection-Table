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
        tracep->declBit(c+67,"clk_i", false,-1);
        tracep->declBit(c+68,"rst_ni", false,-1);
        tracep->declBit(c+69,"flush_i", false,-1);
        tracep->declBit(c+70,"mptw_enable_i", false,-1);
        tracep->declQuad(c+71,"spa_i", false,-1, 63,0);
        tracep->declQuad(c+73,"mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+75,"access_type_i", false,-1, 1,0);
        tracep->declBit(c+76,"mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+77,"mptw_ready_o", false,-1);
        tracep->declBit(c+78,"access_page_fault_o", false,-1);
        tracep->declBus(c+79,"format_error_o", false,-1, 2,0);
        tracep->declBit(c+80,"plb_cache_mem_req", false,-1);
        tracep->declBit(c+81,"plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+82,"plb_cache_mem_valid", false,-1);
        tracep->declArray(c+83,"plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+86,"plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+87,"plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+88,"plb_cache_mem_we", false,-1);
        tracep->declBus(c+89,"plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+90,"plb_cache_mem_error", false,-1);
        tracep->declBus(c+92,"mptw_top PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+93,"mptw_top PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top rst_ni", false,-1);
        tracep->declBit(c+69,"mptw_top flush_i", false,-1);
        tracep->declBit(c+70,"mptw_top mptw_enable_i", false,-1);
        tracep->declQuad(c+71,"mptw_top spa_i", false,-1, 63,0);
        tracep->declQuad(c+73,"mptw_top mmpt_reg_i", false,-1, 63,0);
        tracep->declBus(c+75,"mptw_top access_type_i", false,-1, 1,0);
        tracep->declBit(c+76,"mptw_top mptw_transaction_valid_i", false,-1);
        tracep->declBit(c+77,"mptw_top mptw_ready_o", false,-1);
        tracep->declBit(c+78,"mptw_top access_page_fault_o", false,-1);
        tracep->declBus(c+79,"mptw_top format_error_o", false,-1, 2,0);
        tracep->declBit(c+80,"mptw_top plb_cache_mem_req", false,-1);
        tracep->declBit(c+81,"mptw_top plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+82,"mptw_top plb_cache_mem_valid", false,-1);
        tracep->declArray(c+83,"mptw_top plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+86,"mptw_top plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+87,"mptw_top plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+88,"mptw_top plb_cache_mem_we", false,-1);
        tracep->declBus(c+89,"mptw_top plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+90,"mptw_top plb_cache_mem_error", false,-1);
        tracep->declBus(c+94,"mptw_top fetch_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+94,"mptw_top plb_lookup_stage_datawidth", false,-1, 31,0);
        tracep->declBus(c+94,"mptw_top walking_stage_datawidth", false,-1, 31,0);
        tracep->declArray(c+1,"mptw_top input_transaction", false,-1, 131,0);
        tracep->declBus(c+6,"mptw_top fetch_exception_cause", false,-1, 2,0);
        tracep->declArray(c+1,"mptw_top input_to_fetch_data", false,-1, 131,0);
        tracep->declBit(c+76,"mptw_top input_to_fetch_valid", false,-1);
        tracep->declBit(c+7,"mptw_top input_to_fetch_ready", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_to_pipe_data", false,-1, 131,0);
        tracep->declBit(c+76,"mptw_top fetch_to_pipe_valid", false,-1);
        tracep->declBit(c+7,"mptw_top fetch_to_pipe_ready", false,-1);
        tracep->declArray(c+41,"mptw_top pipe_to_plb_lookup_data", false,-1, 131,0);
        tracep->declBit(c+46,"mptw_top pipe_to_plb_lookup_valid", false,-1);
        tracep->declBit(c+8,"mptw_top pipe_to_plb_lookup_ready", false,-1);
        tracep->declArray(c+9,"mptw_top plb_lookup_to_pipe_data", false,-1, 131,0);
        tracep->declBit(c+14,"mptw_top plb_lookup_to_pipe_valid", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_to_pipe_ready", false,-1);
        tracep->declArray(c+47,"mptw_top pipe_to_walking_data", false,-1, 131,0);
        tracep->declBit(c+52,"mptw_top pipe_to_walking_valid", false,-1);
        tracep->declBit(c+95,"mptw_top pipe_to_walking_ready", false,-1);
        tracep->declBit(c+53,"mptw_top fetch_pipe_status_busy", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_pipe_status_busy", false,-1);
        tracep->declBus(c+96,"mptw_top fetch_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+96,"mptw_top fetch_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top fetch_stage_u clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top fetch_stage_u rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u fetch_slave_data", false,-1, 131,0);
        tracep->declBit(c+76,"mptw_top fetch_stage_u fetch_slave_valid", false,-1);
        tracep->declBit(c+7,"mptw_top fetch_stage_u fetch_slave_ready", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u fetch_master_data", false,-1, 131,0);
        tracep->declBit(c+76,"mptw_top fetch_stage_u fetch_master_valid", false,-1);
        tracep->declBit(c+7,"mptw_top fetch_stage_u fetch_master_ready", false,-1);
        tracep->declBit(c+97,"mptw_top fetch_stage_u fetch_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top fetch_stage_u fetch_ctrl_stall", false,-1);
        tracep->declBus(c+6,"mptw_top fetch_stage_u exception_cause_o", false,-1, 2,0);
        tracep->declBit(c+76,"mptw_top fetch_stage_u stage_active", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_stage_u transaction_i", false,-1, 131,0);
        tracep->declArray(c+98,"mptw_top fetch_stage_u transaction_o", false,-1, 131,0);
        tracep->declQuad(c+16,"mptw_top fetch_stage_u mmpt", false,-1, 63,0);
        tracep->declQuad(c+18,"mptw_top fetch_stage_u spa", false,-1, 63,0);
        tracep->declBus(c+96,"mptw_top fetch_to_plb_lookup_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top fetch_to_plb_lookup_reg_u clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top fetch_to_plb_lookup_reg_u rst_ni", false,-1);
        tracep->declArray(c+1,"mptw_top fetch_to_plb_lookup_reg_u s_data_data", false,-1, 131,0);
        tracep->declBit(c+76,"mptw_top fetch_to_plb_lookup_reg_u s_data_valid", false,-1);
        tracep->declBit(c+7,"mptw_top fetch_to_plb_lookup_reg_u s_data_ready", false,-1);
        tracep->declArray(c+41,"mptw_top fetch_to_plb_lookup_reg_u m_data_data", false,-1, 131,0);
        tracep->declBit(c+46,"mptw_top fetch_to_plb_lookup_reg_u m_data_valid", false,-1);
        tracep->declBit(c+8,"mptw_top fetch_to_plb_lookup_reg_u m_data_ready", false,-1);
        tracep->declBit(c+97,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top fetch_to_plb_lookup_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+53,"mptw_top fetch_to_plb_lookup_reg_u s_status_busy", false,-1);
        tracep->declBit(c+53,"mptw_top fetch_to_plb_lookup_reg_u current_state", false,-1);
        tracep->declBit(c+20,"mptw_top fetch_to_plb_lookup_reg_u next_state", false,-1);
        tracep->declArray(c+41,"mptw_top fetch_to_plb_lookup_reg_u reg_data_q", false,-1, 131,0);
        tracep->declArray(c+21,"mptw_top fetch_to_plb_lookup_reg_u reg_data_d", false,-1, 131,0);
        tracep->declBit(c+103,"mptw_top fetch_to_plb_lookup_reg_u dummy", false,-1);
        tracep->declBus(c+96,"mptw_top plb_lookup_stage_u PIPELINE_SLAVE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+96,"mptw_top plb_lookup_stage_u PIPELINE_MASTER_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+92,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+93,"mptw_top plb_lookup_stage_u PLB_TRANSACTION_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top plb_lookup_stage_u clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top plb_lookup_stage_u rst_ni", false,-1);
        tracep->declArray(c+41,"mptw_top plb_lookup_stage_u plb_lookup_slave_data", false,-1, 131,0);
        tracep->declBit(c+46,"mptw_top plb_lookup_stage_u plb_lookup_slave_valid", false,-1);
        tracep->declBit(c+8,"mptw_top plb_lookup_stage_u plb_lookup_slave_ready", false,-1);
        tracep->declArray(c+9,"mptw_top plb_lookup_stage_u plb_lookup_master_data", false,-1, 131,0);
        tracep->declBit(c+14,"mptw_top plb_lookup_stage_u plb_lookup_master_valid", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_stage_u plb_lookup_master_ready", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u plb_lookup_ctrl_stall", false,-1);
        tracep->declBit(c+80,"mptw_top plb_lookup_stage_u plb_cache_mem_req", false,-1);
        tracep->declBit(c+81,"mptw_top plb_lookup_stage_u plb_cache_mem_gnt", false,-1);
        tracep->declBit(c+82,"mptw_top plb_lookup_stage_u plb_cache_mem_valid", false,-1);
        tracep->declArray(c+83,"mptw_top plb_lookup_stage_u plb_cache_mem_addr", false,-1, 71,0);
        tracep->declBus(c+86,"mptw_top plb_lookup_stage_u plb_cache_mem_rdata", false,-1, 7,0);
        tracep->declBus(c+87,"mptw_top plb_lookup_stage_u plb_cache_mem_wdata", false,-1, 7,0);
        tracep->declBit(c+88,"mptw_top plb_lookup_stage_u plb_cache_mem_we", false,-1);
        tracep->declBus(c+89,"mptw_top plb_lookup_stage_u plb_cache_mem_be", false,-1, 0,0);
        tracep->declBit(c+90,"mptw_top plb_lookup_stage_u plb_cache_mem_error", false,-1);
        tracep->declArray(c+55,"mptw_top plb_lookup_stage_u plb_tag_req", false,-1, 71,0);
        tracep->declArray(c+41,"mptw_top plb_lookup_stage_u grant_stage_transaction", false,-1, 131,0);
        tracep->declArray(c+58,"mptw_top plb_lookup_stage_u valid_stage_pre_hit_transaction", false,-1, 131,0);
        tracep->declArray(c+9,"mptw_top plb_lookup_stage_u valid_stage_post_hit_transaction", false,-1, 131,0);
        tracep->declBit(c+91,"mptw_top plb_lookup_stage_u plb_hit_d", false,-1);
        tracep->declBit(c+63,"mptw_top plb_lookup_stage_u plb_hit_q", false,-1);
        tracep->declBit(c+82,"mptw_top plb_lookup_stage_u plb_hit_valid_d", false,-1);
        tracep->declBit(c+64,"mptw_top plb_lookup_stage_u plb_hit_valid_q", false,-1);
        tracep->declBit(c+14,"mptw_top plb_lookup_stage_u hit_produced", false,-1);
        tracep->declArray(c+41,"mptw_top plb_lookup_stage_u grant_to_valid_data", false,-1, 131,0);
        tracep->declBit(c+26,"mptw_top plb_lookup_stage_u grant_to_valid_valid", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_to_valid_ready", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u grant_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u grant_ctrl_stall", false,-1);
        tracep->declArray(c+58,"mptw_top plb_lookup_stage_u valid_stage_data", false,-1, 131,0);
        tracep->declBit(c+65,"mptw_top plb_lookup_stage_u valid_stage_valid", false,-1);
        tracep->declBit(c+28,"mptw_top plb_lookup_stage_u valid_stage_ready", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u valid_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u valid_ctrl_stall", false,-1);
        tracep->declBit(c+66,"mptw_top plb_lookup_stage_u grant_status_busy", false,-1);
        tracep->declBus(c+96,"mptw_top plb_lookup_stage_u grant_to_valid_reg DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top plb_lookup_stage_u grant_to_valid_reg clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top plb_lookup_stage_u grant_to_valid_reg rst_ni", false,-1);
        tracep->declArray(c+41,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_data", false,-1, 131,0);
        tracep->declBit(c+26,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_valid", false,-1);
        tracep->declBit(c+27,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_data_ready", false,-1);
        tracep->declArray(c+58,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_data", false,-1, 131,0);
        tracep->declBit(c+65,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_valid", false,-1);
        tracep->declBit(c+28,"mptw_top plb_lookup_stage_u grant_to_valid_reg m_data_ready", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_ctrl_stall", false,-1);
        tracep->declBit(c+66,"mptw_top plb_lookup_stage_u grant_to_valid_reg s_status_busy", false,-1);
        tracep->declBit(c+66,"mptw_top plb_lookup_stage_u grant_to_valid_reg current_state", false,-1);
        tracep->declBit(c+29,"mptw_top plb_lookup_stage_u grant_to_valid_reg next_state", false,-1);
        tracep->declArray(c+58,"mptw_top plb_lookup_stage_u grant_to_valid_reg reg_data_q", false,-1, 131,0);
        tracep->declArray(c+30,"mptw_top plb_lookup_stage_u grant_to_valid_reg reg_data_d", false,-1, 131,0);
        tracep->declBit(c+104,"mptw_top plb_lookup_stage_u grant_to_valid_reg dummy", false,-1);
        tracep->declBus(c+96,"mptw_top plb_lookup_to_walking_reg_u DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"mptw_top plb_lookup_to_walking_reg_u clk_i", false,-1);
        tracep->declBit(c+68,"mptw_top plb_lookup_to_walking_reg_u rst_ni", false,-1);
        tracep->declArray(c+9,"mptw_top plb_lookup_to_walking_reg_u s_data_data", false,-1, 131,0);
        tracep->declBit(c+14,"mptw_top plb_lookup_to_walking_reg_u s_data_valid", false,-1);
        tracep->declBit(c+15,"mptw_top plb_lookup_to_walking_reg_u s_data_ready", false,-1);
        tracep->declArray(c+47,"mptw_top plb_lookup_to_walking_reg_u m_data_data", false,-1, 131,0);
        tracep->declBit(c+52,"mptw_top plb_lookup_to_walking_reg_u m_data_valid", false,-1);
        tracep->declBit(c+95,"mptw_top plb_lookup_to_walking_reg_u m_data_ready", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_flush", false,-1);
        tracep->declBit(c+97,"mptw_top plb_lookup_to_walking_reg_u s_ctrl_stall", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_to_walking_reg_u s_status_busy", false,-1);
        tracep->declBit(c+54,"mptw_top plb_lookup_to_walking_reg_u current_state", false,-1);
        tracep->declBit(c+35,"mptw_top plb_lookup_to_walking_reg_u next_state", false,-1);
        tracep->declArray(c+47,"mptw_top plb_lookup_to_walking_reg_u reg_data_q", false,-1, 131,0);
        tracep->declArray(c+36,"mptw_top plb_lookup_to_walking_reg_u reg_data_d", false,-1, 131,0);
        tracep->declBit(c+105,"mptw_top plb_lookup_to_walking_reg_u dummy", false,-1);
        tracep->declBus(c+106,"mpt_pkg PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+107,"mpt_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+108,"mpt_pkg MPTSIZE", false,-1, 31,0);
        tracep->declBus(c+107,"mpt_pkg NUMPGINRANGE", false,-1, 31,0);
        tracep->declBus(c+109,"mpt_pkg SDID_LEN", false,-1, 31,0);
        tracep->declBus(c+110,"mpt_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+111,"mpt_pkg PAGESIZE", false,-1, 31,0);
        tracep->declBus(c+112,"mpt_pkg BARE_MODE", false,-1, 3,0);
        tracep->declBus(c+113,"mpt_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+114,"mpt_pkg SMMPT43_MODE", false,-1, 3,0);
        tracep->declBus(c+115,"mpt_pkg SMMPT52_MODE", false,-1, 3,0);
        tracep->declBus(c+116,"mpt_pkg SMMPT64_MODE", false,-1, 3,0);
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
        tracep->fullWData(oldp+1,(vlTOPp->mptw_top__DOT__input_transaction),132);
        tracep->fullCData(oldp+6,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
        tracep->fullBit(oldp+7,(vlTOPp->mptw_top__DOT__fetch_to_pipe_ready));
        tracep->fullBit(oldp+8,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
        tracep->fullWData(oldp+9,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction),132);
        tracep->fullBit(oldp+14,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced));
        tracep->fullBit(oldp+15,(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__input_transaction[0U])) 
                                                     >> 4U)))),64);
        tracep->fullBit(oldp+20,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state));
        tracep->fullWData(oldp+21,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d),132);
        tracep->fullBit(oldp+26,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid));
        tracep->fullBit(oldp+27,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready));
        tracep->fullBit(oldp+28,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready));
        tracep->fullBit(oldp+29,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state));
        tracep->fullWData(oldp+30,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d),132);
        tracep->fullBit(oldp+35,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state));
        tracep->fullWData(oldp+36,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d),132);
        tracep->fullWData(oldp+41,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),132);
        tracep->fullBit(oldp+46,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
        tracep->fullWData(oldp+47,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),132);
        tracep->fullBit(oldp+52,(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
        tracep->fullBit(oldp+53,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state));
        tracep->fullBit(oldp+54,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state));
        tracep->fullWData(oldp+55,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
        tracep->fullWData(oldp+58,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q),132);
        tracep->fullBit(oldp+63,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q));
        tracep->fullBit(oldp+64,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
        tracep->fullBit(oldp+65,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_valid));
        tracep->fullBit(oldp+66,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state));
        tracep->fullBit(oldp+67,(vlTOPp->clk_i));
        tracep->fullBit(oldp+68,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+69,(vlTOPp->flush_i));
        tracep->fullBit(oldp+70,(vlTOPp->mptw_enable_i));
        tracep->fullQData(oldp+71,(vlTOPp->spa_i),64);
        tracep->fullQData(oldp+73,(vlTOPp->mmpt_reg_i),64);
        tracep->fullCData(oldp+75,(vlTOPp->access_type_i),2);
        tracep->fullBit(oldp+76,(vlTOPp->mptw_transaction_valid_i));
        tracep->fullBit(oldp+77,(vlTOPp->mptw_ready_o));
        tracep->fullBit(oldp+78,(vlTOPp->access_page_fault_o));
        tracep->fullCData(oldp+79,(vlTOPp->format_error_o),3);
        tracep->fullBit(oldp+80,(vlTOPp->plb_cache_mem_req));
        tracep->fullBit(oldp+81,(vlTOPp->plb_cache_mem_gnt));
        tracep->fullBit(oldp+82,(vlTOPp->plb_cache_mem_valid));
        tracep->fullWData(oldp+83,(vlTOPp->plb_cache_mem_addr),72);
        tracep->fullCData(oldp+86,(vlTOPp->plb_cache_mem_rdata),8);
        tracep->fullCData(oldp+87,(vlTOPp->plb_cache_mem_wdata),8);
        tracep->fullBit(oldp+88,(vlTOPp->plb_cache_mem_we));
        tracep->fullBit(oldp+89,(vlTOPp->plb_cache_mem_be));
        tracep->fullBit(oldp+90,(vlTOPp->plb_cache_mem_error));
        tracep->fullBit(oldp+91,((1U & (IData)(vlTOPp->plb_cache_mem_rdata))));
        tracep->fullIData(oldp+92,(8U),32);
        tracep->fullIData(oldp+93,(0x48U),32);
        tracep->fullIData(oldp+94,(0x84U),32);
        tracep->fullBit(oldp+95,(1U));
        tracep->fullIData(oldp+96,(0x84U),32);
        tracep->fullBit(oldp+97,(0U));
        tracep->fullWData(oldp+98,(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__transaction_o),132);
        tracep->fullBit(oldp+103,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__dummy));
        tracep->fullBit(oldp+104,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__dummy));
        tracep->fullBit(oldp+105,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__dummy));
        tracep->fullIData(oldp+106,(0x34U),32);
        tracep->fullIData(oldp+107,(4U),32);
        tracep->fullIData(oldp+108,(8U),32);
        tracep->fullIData(oldp+109,(6U),32);
        tracep->fullIData(oldp+110,(2U),32);
        tracep->fullIData(oldp+111,(0x1000U),32);
        tracep->fullCData(oldp+112,(0U),4);
        tracep->fullIData(oldp+113,(0x40U),32);
        tracep->fullCData(oldp+114,(1U),4);
        tracep->fullCData(oldp+115,(2U),4);
        tracep->fullCData(oldp+116,(3U),4);
    }
}
