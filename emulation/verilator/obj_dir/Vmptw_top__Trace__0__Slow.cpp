// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmptw_top__Syms.h"


VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mpt_pkg__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mpt_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mpt_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17126,0,"flush_all_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17127,0,"flush_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17128,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17129,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17130,0,"stalled_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+17131,0,"spa_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17133,0,"mmpt_reg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17135,0,"access_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17136,0,"speculative_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17137,0,"mptw_transaction_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17138,0,"mptw_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17139,0,"mptw_result_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+17140,0,"plb_entry_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17142,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17143,0,"format_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17144,0,"plb_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17145,0,"plb_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17146,0,"plb_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17147,0,"plb_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17148,0,"plb_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17149,0,"plb_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17150,0,"plb_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17152,0,"plb_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17154,0,"plb_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("walking_mem_master_mem_gnt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17156+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17160+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17164+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_be", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17168+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17172+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17176+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_error", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17184+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17188+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17196+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mptw_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17279,0,"NUM_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"PLB_STAGE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"PLB_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"PLB_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"WALKING_STAGE_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"REORDER_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17283,0,"PIPELINE_PASSTHROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17126,0,"flush_all_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17127,0,"flush_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17128,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17129,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17130,0,"stalled_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+17131,0,"spa_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17133,0,"mmpt_reg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17135,0,"access_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17136,0,"speculative_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17137,0,"mptw_transaction_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17138,0,"mptw_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17139,0,"mptw_result_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+17140,0,"plb_entry_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17142,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17143,0,"format_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17144,0,"plb_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17145,0,"plb_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17146,0,"plb_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17147,0,"plb_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17148,0,"plb_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17149,0,"plb_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17150,0,"plb_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17152,0,"plb_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17154,0,"plb_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("walking_mem_master_mem_gnt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17156+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17160+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17164+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_be", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17168+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17172+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17176+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_error", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+17184+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17188+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_mem_master_mem_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17196+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+17285,0,"REORDER_BUFFER_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17286,0,"PIPELINE_STAGES_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17287,0,"fetch_stage_datawidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17287,0,"issue_stage_datawidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17287,0,"plb_lookup_stage_datawidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17287,0,"walking_stage_datawidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+10,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+17288,0,"fetch_exception_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+8556,0,"plb_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("walking_output_transaction", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+8565,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8574,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8583,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8592,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->pushPrefix("retire_demux_select", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+8601+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+5479,0,"input_to_fetch_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17204,0,"input_to_fetch_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10,0,"input_to_fetch_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5480,0,"fetch_to_issue_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8605,0,"fetch_to_issue_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"fetch_to_issue_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5481,0,"issue_to_backend_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8615,0,"issue_to_backend_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"issue_to_backend_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17205,0,"issue_to_plb_lookup_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"issue_to_plb_lookup_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"issue_to_plb_lookup_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17206,0,"plb_lookup_to_demux_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8635,0,"plb_lookup_to_demux_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8556,0,"plb_lookup_to_demux_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("to_walking_stage_data_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+17207+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("to_walking_stage_data_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8636+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("to_walking_stage_data_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+8641+i*9,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_demux_data_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+17212+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_demux_data_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8686+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_demux_data_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+8691+i*9,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_retire_data_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8356+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_retire_data_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8736+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("walking_to_retire_data_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+8741+i*9,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+206,0,"backend_to_issue_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8786,0,"backend_to_issue_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"backend_to_issue_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"retire_to_commit_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8796,0,"retire_to_commit_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8797,0,"retire_to_commit_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17290,0,"commit_to_output_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17291,0,"commit_to_output_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8797,0,"commit_to_output_data_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("system_control_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+17292+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("system_control_flush", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+8806+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("system_status_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+17217+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("system_status_stalled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("system_status_flushed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+14091+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_slave_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+17226+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_slave_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+8815+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_slave_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+8817+i*9,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_master_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+17228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_master_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+8835+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_master_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+8837+i*9,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+8797,0,"debug_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("control_unit_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17286,0,"CONTROL_AND_STATUS_PORTS_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17137,0,"valid_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17129,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17130,0,"stalled_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17126,0,"flush_all_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17127,0,"flush_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17128,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17137,0,"pipeline_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5479,0,"pipeline_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17204,0,"system_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17138,0,"system_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("master_control_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+17292+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("master_control_flush", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+8806+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("slave_status_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+17217+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slave_status_stalled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slave_status_flushed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+14091+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+8855,0,"ctrl_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5482,0,"ctrl_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8856,0,"control_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+17230,0,"control_reg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+8857,0,"status_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+17093,0,"status_reg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+19,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"stall_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17289,0,"pipeline_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("flush_signal_forward", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17286,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("port_mapping_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17286,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8858,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5479,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17204,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5480,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8605,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17303,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8859,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5483,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8860,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17288,0,"exception_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17232,0,"stage_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+20,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+17288,0,"format_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+29,0,"mmpt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5479,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17204,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+20,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("fetch_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+20,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5479,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17204,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5480,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8605,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17303,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8859,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5483,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8860,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8859,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8860,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8861,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5483,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8862,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5484,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5485,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8606,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_walking_stages[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("walking_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17279,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17233,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8863,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8864,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17234,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8874,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17305,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17306,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17094,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17235,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17095,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17236,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17237,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17096,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17238,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8441,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17240,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17285,0,"FORWARDING_BUFFER_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2492,0,"walking_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+2501,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+33,0,"parsing_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8884,0,"parsing_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8885,0,"parsing_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17241,0,"forwarding_to_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8894,0,"forwarding_to_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"forwarding_to_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2835,0,"from_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2510,0,"from_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2492,0,"from_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"walking_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2511,0,"walking_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2512,0,"walking_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2835,0,"walking_to_pipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2510,0,"walking_to_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2501,0,"walking_to_pipe_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+34,0,"mpte_parsing_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"mpte_parsing_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"mpte_parsing_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"forward_buffer_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"forward_buffer_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"forward_buffer_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17310,0,"walking_mem_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17311,0,"walking_mem_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17098,0,"walking_mem_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2836,0,"stage_reg_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_reg_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"stage_reg_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("gen_forwarding_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("forwarding_buffer_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"parsing_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8884,0,"parsing_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8885,0,"parsing_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"mem_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2511,0,"mem_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2512,0,"mem_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17241,0,"mem_master_stage_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8894,0,"mem_master_stage_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"mem_master_stage_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+8885,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8885,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8885,0,"fwd_buffer_lookup_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+2512,0,"fwd_buffer_update_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+8905,0,"lookup_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2511,0,"update_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8906,0,"fwd_buffer_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+1978,0,"fwd_buffer_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+2521,0,"fwd_buffer_match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBus(c+2526,0,"fwd_buffer_match_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+2490,0,"fwd_buffer_match_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+2527,0,"fwd_match_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2528,0,"fwd_select_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9418,0,"next_victim_line_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2529,0,"next_victim_line_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+2530,0,"fwd_buffer_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+9419,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"to_mem_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17242,0,"to_mem_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+36,0,"to_mem_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("fwd_buffer_lookup_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2534,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_lookup_match", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2535,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+36,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+33,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17242,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17241,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8894,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8883,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8904,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9419,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9420,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+46,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8895,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("parsing_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17279,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17233,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8863,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8864,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+33,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8884,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8885,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8441,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17240,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+8864,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8442,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declQuad(c+9421,0,"mpt_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9423,0,"mmpt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+9424,0,"mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9426,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9428,0,"access_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9429,0,"mpte_permissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"access_page_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17288,0,"format_error_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9430,0,"use_mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9431,0,"spa_current_page_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declQuad(c+9432,0,"base_phyisical_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9434,0,"next_mpte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9436,0,"range_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17233,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8863,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8442,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("parsing_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8442,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17233,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8863,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8884,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8885,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8883,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8904,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9419,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9437,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8885,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+134,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8885,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("walking_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2501,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2835,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2510,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17234,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8874,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2836,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8904,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8883,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8904,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9419,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2836,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9438,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2837,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8874,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+2838,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8874,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_walking_stages[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("walking_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17312,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17234,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8874,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17243,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9439,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9440,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17314,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17315,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17099,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17244,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17100,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17245,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17246,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17101,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17247,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8421,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17249,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17285,0,"FORWARDING_BUFFER_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+3365,0,"walking_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+3374,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+56,0,"parsing_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9450,0,"parsing_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9451,0,"parsing_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17250,0,"forwarding_to_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9460,0,"forwarding_to_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"forwarding_to_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3708,0,"from_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3383,0,"from_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3365,0,"from_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"walking_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3384,0,"walking_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3385,0,"walking_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3708,0,"walking_to_pipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3383,0,"walking_to_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3374,0,"walking_to_pipe_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+57,0,"mpte_parsing_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"mpte_parsing_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"mpte_parsing_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"forward_buffer_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"forward_buffer_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"forward_buffer_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17316,0,"walking_mem_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17317,0,"walking_mem_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17103,0,"walking_mem_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3709,0,"stage_reg_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_reg_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"stage_reg_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("gen_forwarding_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("forwarding_buffer_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"parsing_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9450,0,"parsing_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9451,0,"parsing_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"mem_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3384,0,"mem_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3385,0,"mem_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17250,0,"mem_master_stage_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9460,0,"mem_master_stage_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"mem_master_stage_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+9451,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9451,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9451,0,"fwd_buffer_lookup_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+3385,0,"fwd_buffer_update_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+9471,0,"lookup_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3384,0,"update_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9472,0,"fwd_buffer_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+2851,0,"fwd_buffer_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+3394,0,"fwd_buffer_match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBus(c+3399,0,"fwd_buffer_match_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+3363,0,"fwd_buffer_match_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+3400,0,"fwd_match_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3401,0,"fwd_select_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9984,0,"next_victim_line_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3402,0,"next_victim_line_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+3403,0,"fwd_buffer_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+9985,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"to_mem_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17251,0,"to_mem_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+59,0,"to_mem_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("fwd_buffer_lookup_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3407,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_lookup_match", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3408,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+59,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+56,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17251,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17250,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9460,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9449,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9470,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9985,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9986,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+69,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9461,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("parsing_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17312,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17234,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8874,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+56,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9450,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9451,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8421,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17249,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+8874,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8422,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declQuad(c+9987,0,"mpt_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9989,0,"mmpt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+9990,0,"mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9992,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9994,0,"access_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9995,0,"mpte_permissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"access_page_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17288,0,"format_error_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9996,0,"use_mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9997,0,"spa_current_page_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declQuad(c+9998,0,"base_phyisical_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10000,0,"next_mpte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10002,0,"range_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17234,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8422,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("parsing_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8422,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17234,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8873,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9450,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9451,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9449,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9470,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9985,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10003,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9451,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+125,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9451,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("walking_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3374,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3708,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3383,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17243,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9439,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9440,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3709,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9470,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9449,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9470,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9985,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3709,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10004,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3710,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9440,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+3711,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9440,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_walking_stages[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("walking_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17318,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17252,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10005,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10006,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17253,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10015,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10016,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17320,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17321,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17104,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17254,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17105,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17255,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17256,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17106,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17257,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8451,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17259,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17285,0,"FORWARDING_BUFFER_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+4238,0,"walking_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+4247,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+79,0,"parsing_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10026,0,"parsing_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10027,0,"parsing_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17260,0,"forwarding_to_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10036,0,"forwarding_to_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"forwarding_to_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4581,0,"from_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4256,0,"from_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4238,0,"from_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"walking_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4257,0,"walking_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4258,0,"walking_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4581,0,"walking_to_pipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4256,0,"walking_to_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4247,0,"walking_to_pipe_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+80,0,"mpte_parsing_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"mpte_parsing_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"mpte_parsing_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"forward_buffer_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"forward_buffer_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"forward_buffer_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17322,0,"walking_mem_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17323,0,"walking_mem_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17108,0,"walking_mem_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4582,0,"stage_reg_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_reg_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"stage_reg_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("gen_forwarding_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("forwarding_buffer_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"parsing_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10026,0,"parsing_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10027,0,"parsing_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"mem_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4257,0,"mem_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4258,0,"mem_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17260,0,"mem_master_stage_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10036,0,"mem_master_stage_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"mem_master_stage_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+10027,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10027,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10027,0,"fwd_buffer_lookup_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+4258,0,"fwd_buffer_update_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+10047,0,"lookup_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4257,0,"update_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10048,0,"fwd_buffer_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+3724,0,"fwd_buffer_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+4267,0,"fwd_buffer_match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBus(c+4272,0,"fwd_buffer_match_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+4236,0,"fwd_buffer_match_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+4273,0,"fwd_match_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4274,0,"fwd_select_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10560,0,"next_victim_line_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4275,0,"next_victim_line_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+4276,0,"fwd_buffer_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+10561,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"to_mem_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17261,0,"to_mem_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+82,0,"to_mem_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("fwd_buffer_lookup_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4280,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_lookup_match", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4281,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+82,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+79,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17261,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17260,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10036,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10025,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10046,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10561,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10562,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+92,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10037,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("parsing_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17318,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17252,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10005,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10006,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+79,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10026,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10027,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+80,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8451,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17259,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+10006,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8452,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declQuad(c+10563,0,"mpt_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10565,0,"mmpt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+10566,0,"mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10568,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10570,0,"access_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10571,0,"mpte_permissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"access_page_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17288,0,"format_error_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"use_mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10572,0,"spa_current_page_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declQuad(c+10573,0,"base_phyisical_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10575,0,"next_mpte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10577,0,"range_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17252,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10005,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8452,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("parsing_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8452,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17252,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10005,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10026,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10027,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+80,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10025,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10046,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10561,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10578,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10027,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+143,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10027,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("walking_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4247,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4581,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4256,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17253,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10015,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10016,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4582,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10046,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10025,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10046,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10561,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4582,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10579,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4583,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10016,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+4584,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10016,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_walking_stages[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("walking_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17262,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10580,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10581,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17263,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10590,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10591,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17325,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17326,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17109,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17264,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17110,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17265,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17266,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17111,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17267,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8461,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17269,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17285,0,"FORWARDING_BUFFER_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+5111,0,"walking_output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5120,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+102,0,"parsing_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10601,0,"parsing_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10602,0,"parsing_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17270,0,"forwarding_to_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10611,0,"forwarding_to_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"forwarding_to_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5454,0,"from_walking_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5129,0,"from_walking_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5111,0,"from_walking_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"walking_to_forwarding_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5130,0,"walking_to_forwarding_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5131,0,"walking_to_forwarding_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5454,0,"walking_to_pipe_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5129,0,"walking_to_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5120,0,"walking_to_pipe_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+103,0,"mpte_parsing_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"mpte_parsing_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"mpte_parsing_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+104,0,"forward_buffer_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"forward_buffer_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"forward_buffer_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17327,0,"walking_mem_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17328,0,"walking_mem_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17113,0,"walking_mem_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5455,0,"stage_reg_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_reg_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"stage_reg_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("gen_forwarding_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("forwarding_buffer_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17282,0,"FORWARDING_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"parsing_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10601,0,"parsing_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10602,0,"parsing_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17289,0,"mem_slave_stage_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5130,0,"mem_slave_stage_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5131,0,"mem_slave_stage_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17270,0,"mem_master_stage_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10611,0,"mem_master_stage_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"mem_master_stage_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+104,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+10602,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10602,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10602,0,"fwd_buffer_lookup_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5131,0,"fwd_buffer_update_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+10622,0,"lookup_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5130,0,"update_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10623,0,"fwd_buffer_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+4597,0,"fwd_buffer_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+5140,0,"fwd_buffer_match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 128,0);
    tracep->declBus(c+5145,0,"fwd_buffer_match_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+5109,0,"fwd_buffer_match_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5146,0,"fwd_match_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5147,0,"fwd_select_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11135,0,"next_victim_line_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5148,0,"next_victim_line_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+5149,0,"fwd_buffer_next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+11136,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"to_mem_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17271,0,"to_mem_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"to_mem_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("fwd_buffer_lookup_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5153,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_lookup_match", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5154,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fwd_buffer_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+102,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17271,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17270,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10611,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+104,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10600,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10621,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11136,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11137,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+115,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10612,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("parsing_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17262,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10580,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10581,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+102,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10601,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10602,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8461,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17269,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+10581,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8462,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declQuad(c+11138,0,"mpt_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11140,0,"mmpt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+11141,0,"mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11143,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11145,0,"access_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11146,0,"mpte_permissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"access_page_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17288,0,"format_error_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"use_mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11147,0,"spa_current_page_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declQuad(c+11148,0,"base_phyisical_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11150,0,"next_mpte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11152,0,"range_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17262,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10580,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8462,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("parsing_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8462,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17262,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10580,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10601,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10602,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10600,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10621,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11136,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11153,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10602,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+152,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10602,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("walking_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5120,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5454,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5129,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17263,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10590,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10591,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5455,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10621,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10600,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10621,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11136,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5455,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11154,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5456,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10591,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5457,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10591,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("issue_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17283,0,"PIPELINE_PASSTHROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("stage_slave_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+17226+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage_slave_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+8815+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage_slave_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+8817+i*9,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage_master_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+17228+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage_master_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+8835+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage_master_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+8837+i*9,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+17329,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11155,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17330,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17331,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11156,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5480,0,"fetch_to_issue_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8605,0,"fetch_to_issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"fetch_to_issue_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+206,0,"backend_to_issue_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8786,0,"backend_to_issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"backend_to_issue_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5481,0,"issue_to_backend_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8615,0,"issue_to_backend_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"issue_to_backend_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17205,0,"issue_to_plb_lookup_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"issue_to_plb_lookup_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"issue_to_plb_lookup_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5494,0,"issue_backend_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"issue_backend_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11157,0,"issue_backend_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"issue_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"issue_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11157,0,"issue_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("pipeline_register_generate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("issue_backend_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8606,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5480,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8605,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5481,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8615,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17329,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11155,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5494,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11157,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11155,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11157,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11158,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5494,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11159,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5495,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5496,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8616,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->pushPrefix("issue_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+206,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8786,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17205,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17329,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11155,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11157,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11155,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11157,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11158,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11160,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+209,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8626,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("last_parsing_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17283,0,"WALKING_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17272,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11161,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11162,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+8471,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11171,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11172,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17332,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11181,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8472,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11182,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8431,0,"access_page_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17273,0,"format_error_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+11162,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8432,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declQuad(c+11183,0,"mpt_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11185,0,"mmpt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+11186,0,"mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11188,0,"spa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11190,0,"access_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11191,0,"mpte_permissions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"access_page_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17288,0,"format_error_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17301,0,"use_mmpt_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11192,0,"spa_current_page_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declQuad(c+11193,0,"base_phyisical_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11195,0,"next_mpte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11197,0,"range_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17272,0,"slave_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11161,0,"slave_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8432,0,"slave_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("parsing_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8432,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17272,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11161,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8471,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11171,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11172,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17332,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11181,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8472,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11182,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11181,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11182,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11198,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8472,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11199,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8473,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11172,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8547,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+11172,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("plb_lookup_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"PLB_TRANSACTION_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"PLB_TRANSACTION_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17205,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17206,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8635,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8556,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17333,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11200,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17334,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17335,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14100,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17144,0,"plb_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17145,0,"plb_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17146,0,"plb_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17147,0,"plb_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17148,0,"plb_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17149,0,"plb_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17150,0,"plb_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17152,0,"plb_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17154,0,"plb_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+8626,0,"input_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+1643,0,"intermedate_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+1652,0,"output_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+17336,0,"plb_tag_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBit(c+1661,0,"plb_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17339,0,"flush_completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17205,0,"input_to_mem_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"input_to_mem_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"input_to_mem_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1962,0,"mem_to_local_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1662,0,"mem_to_local_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1643,0,"mem_to_local_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1962,0,"local_to_reg_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1662,0,"local_to_reg_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1652,0,"local_to_reg_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17340,0,"plb_lookup_mem_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17341,0,"plb_lookup_mem_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17114,0,"plb_lookup_mem_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1963,0,"plb_lookup_reg_status_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"plb_lookup_reg_status_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11201,0,"plb_lookup_reg_status_flushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("plb_lookup_reg_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1652,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1962,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1662,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17206,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8635,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8556,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17333,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11200,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1963,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11201,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11200,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11201,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11202,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1963,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11203,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1964,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8556,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+1965,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8556,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("retire_stage_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("retire_stage_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"REORDER_BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17342,0,"RETIRE_PORT_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17283,0,"PIPELINE_PASSTHROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5481,0,"issue_stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8615,0,"issue_stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"issue_stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+206,0,"issue_stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8786,0,"issue_stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"issue_stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("retire_stage_slave_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8356+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_stage_slave_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+8736+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("retire_stage_slave_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+8741+i*9,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 279,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+17289,0,"commit_stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8796,0,"commit_stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8797,0,"commit_stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17343,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11204,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17344,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17345,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11205,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17280,0,"REORDER_BUFFER_LOCAL_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+8616,0,"from_issue_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5470,0,"to_issue_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("retire_transaction_bus", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+11206,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+11215,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+11224,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+11233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+11242,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->declBus(c+11251,0,"rob_push_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17274,0,"rob_push_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11252,0,"rob_next_valid_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5505,0,"rob_next_valid_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+14101,0,"rob_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14102,0,"rob_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5506,0,"rob_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17275,0,"rob_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14103,0,"rob_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5507,0,"rob_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+14104,0,"rob_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("rob_memory_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+11253,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+11813,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+12373,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+12933,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+13493,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->popPrefix();
    tracep->pushPrefix("rob_memory_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+5556,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+6116,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+6676,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+7236,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->declArray(c+7796,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17919,0);
    tracep->popPrefix();
    tracep->pushPrefix("rob_memory_waddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+8474+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_memory_raddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+8361+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rob_memory_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+8479,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8488,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8497,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8506,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8515,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->pushPrefix("rob_memory_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+8366,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8375,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8384,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8393,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8402,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->declBus(c+8524,0,"rob_memory_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14053,0,"rob_pop_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17276,0,"rob_pop_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+8411,0,"eldest_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+17115,0,"eldest_transaction_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8420,0,"eldest_transaction_completed_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14054,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17087,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14055,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14056,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5481,0,"from_issue_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8615,0,"from_issue_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8616,0,"from_issue_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5508,0,"to_issue_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5509,0,"to_issue_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5510,0,"to_issue_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+8525,0,"to_commit_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8526,0,"to_commit_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8527,0,"to_commit_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("commit_stage_register_generate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("issue_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8527,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+8525,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8526,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17289,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8796,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8797,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17301,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17346,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8536,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17347,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17346,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17347,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8536,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14057,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8537,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8797,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8538,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8797,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("eldest_transaction_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17342,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("issue_pipeline_register_generate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("issue_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17302,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5510,0,"s_data_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5508,0,"s_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5509,0,"s_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"m_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8786,0,"m_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"m_data_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17301,0,"s_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17346,0,"s_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5519,0,"m_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"m_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17347,0,"m_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17346,0,"flush_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17347,0,"flush_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5519,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14058,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5520,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8787,0,"reg_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5521,0,"reg_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8787,0,"internal_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rob_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17349,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17350,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17351,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17087,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14101,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14102,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14103,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5507,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+5506,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14104,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+17275,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17350,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5530,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17277,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14105,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5531,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14106,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17278,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+14107,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+5532,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 767,0);
    tracep->declArray(c+14108,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 767,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14059,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14060,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mpt_pkg__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mpt_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17352,0,"PPN_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17353,0,"MMPT_MODE_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17354,0,"MPTESIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17353,0,"NUMPGINRANGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17355,0,"SDID_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17356,0,"WPRI_BITS_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17357,0,"PAGESIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17358,0,"BARE_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17359,0,"SMMPT43_WALKING_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17353,0,"SMMPT52_WALKING_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17360,0,"SMMPT64_WALKING_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17361,0,"ROB_ID_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17362,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17363,0,"SMMPT43_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17364,0,"SMMPT52_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17365,0,"SMMPT64_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17205,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1962,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1662,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1643,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17333,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11200,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17340,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17341,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17114,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17145,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17116,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17147,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17148,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17117,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17152,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17205,0,"req_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8625,0,"req_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8626,0,"req_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1962,0,"to_output_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1663,0,"to_output_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+17366,0,"to_output_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8626,0,"req_to_grant_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+161,0,"grant_fifo_to_valid_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+1664,0,"valid_fifo_to_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14061,0,"grant_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1673,0,"valid_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14132,0,"grant_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14133,0,"grant_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"grant_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1674,0,"grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14134,0,"grant_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+8626,0,"grant_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+14135,0,"grant_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14144,0,"valid_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14145,0,"valid_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1675,0,"valid_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1974,0,"valid_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14146,0,"valid_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+161,0,"valid_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+14147,0,"valid_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+14062,0,"valid_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1676,0,"valid_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14063,0,"spec_transaction_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1975,0,"spec_transaction_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14156,0,"stage_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14064,0,"grant_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"grant_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14065,0,"valid_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1677,0,"valid_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11202,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17088,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"flush_grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14066,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17119,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("grant_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14132,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14133,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14134,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+8626,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+218,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+14135,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1674,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+221,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14157,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+222,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14158,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1679,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14159,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+223,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+14160,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17088,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14144,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14145,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14146,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+161,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1675,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+14147,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1974,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1680,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1976,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14440,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1681,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14441,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1977,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14442,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1682,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+14443,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17241,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8894,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2835,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2510,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2492,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17304,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8883,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17310,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17311,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17098,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17235,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17095,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17236,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17237,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17096,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17238,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17241,0,"req_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8894,0,"req_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8895,0,"req_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2835,0,"to_output_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2536,0,"to_output_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+17378,0,"to_output_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+8895,0,"req_to_grant_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+170,0,"grant_fifo_to_valid_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+2537,0,"valid_fifo_to_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14067,0,"grant_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2546,0,"valid_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14723,0,"grant_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14724,0,"grant_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"grant_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2547,0,"grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14725,0,"grant_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+8895,0,"grant_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+14726,0,"grant_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14735,0,"valid_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14736,0,"valid_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2548,0,"valid_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2847,0,"valid_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14737,0,"valid_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+170,0,"valid_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+14738,0,"valid_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+14068,0,"valid_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2549,0,"valid_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14069,0,"spec_transaction_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2848,0,"spec_transaction_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14747,0,"stage_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14070,0,"grant_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"grant_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14071,0,"valid_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2550,0,"valid_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9419,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17089,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"flush_grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14072,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17120,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("grant_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14723,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14724,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14725,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+8895,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+503,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+14726,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2547,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+506,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2551,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14748,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14749,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2552,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14750,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+508,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+14751,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17089,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14735,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14736,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14737,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+170,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2548,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+14738,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+2847,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2553,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2849,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15031,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2554,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15032,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2850,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15033,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+2555,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+15034,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17250,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9460,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3708,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3383,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+3365,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17313,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9449,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17316,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17317,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17103,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17244,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17100,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17245,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17246,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17101,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17247,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17250,0,"req_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9460,0,"req_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+9461,0,"req_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3708,0,"to_output_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3409,0,"to_output_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+17387,0,"to_output_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+9461,0,"req_to_grant_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+179,0,"grant_fifo_to_valid_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+3410,0,"valid_fifo_to_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14073,0,"grant_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3419,0,"valid_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15314,0,"grant_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15315,0,"grant_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"grant_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3420,0,"grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15316,0,"grant_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+9461,0,"grant_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+15317,0,"grant_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+15326,0,"valid_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15327,0,"valid_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3421,0,"valid_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3720,0,"valid_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15328,0,"valid_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+179,0,"valid_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+15329,0,"valid_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+14074,0,"valid_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3422,0,"valid_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14075,0,"spec_transaction_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3721,0,"spec_transaction_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15338,0,"stage_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14076,0,"grant_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+789,0,"grant_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14077,0,"valid_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3423,0,"valid_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9985,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17090,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"flush_grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14078,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17121,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("grant_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15314,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15315,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15316,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+9461,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+788,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+15317,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3420,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+791,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3424,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15339,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+792,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15340,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3425,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15341,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+793,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+15342,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17090,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15326,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15327,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15328,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+179,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3421,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+15329,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+3720,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+3426,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3722,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15622,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3427,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15623,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3723,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15624,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+3428,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+15625,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17260,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10036,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4581,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4256,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4238,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17319,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10025,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17322,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17323,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17108,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17254,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17105,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17255,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17256,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17106,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17257,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17260,0,"req_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10036,0,"req_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10037,0,"req_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4581,0,"to_output_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4282,0,"to_output_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+17396,0,"to_output_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10037,0,"req_to_grant_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+188,0,"grant_fifo_to_valid_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+4283,0,"valid_fifo_to_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14079,0,"grant_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4292,0,"valid_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15905,0,"grant_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15906,0,"grant_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1073,0,"grant_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4293,0,"grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15907,0,"grant_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+10037,0,"grant_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+15908,0,"grant_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+15917,0,"valid_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15918,0,"valid_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4294,0,"valid_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4593,0,"valid_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15919,0,"valid_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+188,0,"valid_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+15920,0,"valid_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+14080,0,"valid_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4295,0,"valid_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14081,0,"spec_transaction_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4594,0,"spec_transaction_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15929,0,"stage_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14082,0,"grant_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1074,0,"grant_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14083,0,"valid_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4296,0,"valid_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10561,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17091,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"flush_grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14084,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17122,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("grant_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15905,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15906,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15907,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+10037,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1073,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+15908,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4293,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1076,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4297,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15930,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1077,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15931,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4298,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15932,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1078,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+15933,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17091,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15917,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15918,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15919,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+188,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4294,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+15920,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+4593,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+4299,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4595,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16213,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4300,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16214,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4596,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16215,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+4301,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+16216,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_sub__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+17302,0,"PIPELINE_SLAVE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17302,0,"PIPELINE_MASTER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17281,0,"TRANSACTION_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17280,0,"MEMORY_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17284,0,"TEST_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17270,0,"stage_slave_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10611,0,"stage_slave_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"stage_slave_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5454,0,"stage_master_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5129,0,"stage_master_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+5111,0,"stage_master_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+17324,0,"stage_ctrl_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10600,0,"stage_ctrl_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17327,0,"stage_status_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17328,0,"stage_status_stalled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17113,0,"stage_status_flushed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17301,0,"memory_master_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17264,0,"memory_master_mem_gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17110,0,"memory_master_mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17265,0,"memory_master_mem_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17266,0,"memory_master_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17307,0,"memory_master_mem_be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+17111,0,"memory_master_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17267,0,"memory_master_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17308,0,"memory_master_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17270,0,"req_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10611,0,"req_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+10612,0,"req_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5454,0,"to_output_bus_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5155,0,"to_output_bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+17405,0,"to_output_bus_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+10612,0,"req_to_grant_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+197,0,"grant_fifo_to_valid_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+5156,0,"valid_fifo_to_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+14085,0,"grant_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5165,0,"valid_do_walk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16496,0,"grant_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16497,0,"grant_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1358,0,"grant_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5166,0,"grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16498,0,"grant_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+10612,0,"grant_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+16499,0,"grant_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+16508,0,"valid_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16509,0,"valid_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5167,0,"valid_fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5466,0,"valid_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16510,0,"valid_fifo_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+197,0,"valid_fifo_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declArray(c+16511,0,"valid_fifo_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+14086,0,"valid_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5168,0,"valid_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14087,0,"spec_transaction_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5467,0,"spec_transaction_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16520,0,"stage_usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14088,0,"grant_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1359,0,"grant_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14089,0,"valid_fifo_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5169,0,"valid_fifo_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11136,0,"flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17092,0,"flush_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"flush_grant_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14090,0,"flush_status_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17123,0,"flush_status_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("grant_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16496,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16497,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16498,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+10612,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+1358,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+16499,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5166,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1361,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5170,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16521,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1362,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16522,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5171,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16523,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+1363,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+16524,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
    tracep->pushPrefix("valid_fifo_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17348,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17375,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17376,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17377,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17124,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17125,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17092,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17301,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16508,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16509,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16510,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+197,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5167,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+16511,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBit(c+5466,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17376,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5172,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5468,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16804,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5173,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16805,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5469,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16806,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+5174,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->declArray(c+16807,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8959,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_init_top(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_init_top\n"); );
    // Body
    Vmptw_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmptw_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmptw_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmptw_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmptw_top___024root__trace_register(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vmptw_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmptw_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmptw_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmptw_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_const_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmptw_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_const_0\n"); );
    // Init
    Vmptw_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmptw_top___024root*>(voidSelf);
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmptw_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_const_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+17279,(4U),32);
    bufp->fullIData(oldp+17280,(0x40U),32);
    bufp->fullIData(oldp+17281,(0x20U),32);
    bufp->fullIData(oldp+17282,(0x80U),32);
    bufp->fullIData(oldp+17283,(0U),32);
    bufp->fullIData(oldp+17284,(1U),32);
    bufp->fullIData(oldp+17285,(1U),32);
    bufp->fullIData(oldp+17286,(9U),32);
    bufp->fullIData(oldp+17287,(0x118U),32);
    bufp->fullCData(oldp+17288,(0U),3);
    bufp->fullBit(oldp+17289,(1U));
    bufp->fullBit(oldp+17290,(vlSelf->mptw_top__DOT__commit_to_output_data_ready));
    bufp->fullBit(oldp+17291,(vlSelf->mptw_top__DOT__commit_to_output_data_valid));
    bufp->fullBit(oldp+17292,(vlSelf->mptw_top__DOT__system_control_stall[0]));
    bufp->fullBit(oldp+17293,(vlSelf->mptw_top__DOT__system_control_stall[1]));
    bufp->fullBit(oldp+17294,(vlSelf->mptw_top__DOT__system_control_stall[2]));
    bufp->fullBit(oldp+17295,(vlSelf->mptw_top__DOT__system_control_stall[3]));
    bufp->fullBit(oldp+17296,(vlSelf->mptw_top__DOT__system_control_stall[4]));
    bufp->fullBit(oldp+17297,(vlSelf->mptw_top__DOT__system_control_stall[5]));
    bufp->fullBit(oldp+17298,(vlSelf->mptw_top__DOT__system_control_stall[6]));
    bufp->fullBit(oldp+17299,(vlSelf->mptw_top__DOT__system_control_stall[7]));
    bufp->fullBit(oldp+17300,(vlSelf->mptw_top__DOT__system_control_stall[8]));
    bufp->fullBit(oldp+17301,(0U));
    bufp->fullIData(oldp+17302,(0x118U),32);
    bufp->fullBit(oldp+17303,(vlSelf->mptw_top__DOT__system_control_stall
                              [0U]));
    bufp->fullBit(oldp+17304,(vlSelf->mptw_top__DOT__system_control_stall
                              [3U]));
    bufp->fullBit(oldp+17305,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17306,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled));
    bufp->fullCData(oldp+17307,(0U),8);
    bufp->fullQData(oldp+17308,(0ULL),64);
    bufp->fullBit(oldp+17310,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_busy));
    bufp->fullBit(oldp+17311,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_stalled));
    bufp->fullIData(oldp+17312,(3U),32);
    bufp->fullBit(oldp+17313,(vlSelf->mptw_top__DOT__system_control_stall
                              [4U]));
    bufp->fullBit(oldp+17314,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17315,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled));
    bufp->fullBit(oldp+17316,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_busy));
    bufp->fullBit(oldp+17317,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_stalled));
    bufp->fullIData(oldp+17318,(2U),32);
    bufp->fullBit(oldp+17319,(vlSelf->mptw_top__DOT__system_control_stall
                              [5U]));
    bufp->fullBit(oldp+17320,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17321,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled));
    bufp->fullBit(oldp+17322,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_busy));
    bufp->fullBit(oldp+17323,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_stalled));
    bufp->fullBit(oldp+17324,(vlSelf->mptw_top__DOT__system_control_stall
                              [6U]));
    bufp->fullBit(oldp+17325,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17326,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled));
    bufp->fullBit(oldp+17327,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_busy));
    bufp->fullBit(oldp+17328,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_stalled));
    bufp->fullBit(oldp+17329,(vlSelf->mptw_top__DOT__system_control_stall
                              [1U]));
    bufp->fullBit(oldp+17330,(vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17331,(vlSelf->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled));
    bufp->fullBit(oldp+17332,(vlSelf->mptw_top__DOT__system_control_stall
                              [7U]));
    bufp->fullBit(oldp+17333,(vlSelf->mptw_top__DOT__system_control_stall
                              [2U]));
    bufp->fullBit(oldp+17334,(vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17335,(vlSelf->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled));
    bufp->fullWData(oldp+17336,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
    bufp->fullBit(oldp+17339,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__flush_completed));
    bufp->fullBit(oldp+17340,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_busy));
    bufp->fullBit(oldp+17341,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_stalled));
    bufp->fullIData(oldp+17342,(5U),32);
    bufp->fullBit(oldp+17343,(vlSelf->mptw_top__DOT__system_control_stall
                              [8U]));
    bufp->fullBit(oldp+17344,(vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_busy));
    bufp->fullBit(oldp+17345,(vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_stalled));
    bufp->fullCData(oldp+17346,(0U),2);
    bufp->fullCData(oldp+17347,(0U),2);
    bufp->fullBit(oldp+17348,(0U));
    bufp->fullIData(oldp+17349,(0xcU),32);
    bufp->fullIData(oldp+17350,(0x40U),32);
    bufp->fullIData(oldp+17351,(6U),32);
    bufp->fullIData(oldp+17352,(0x34U),32);
    bufp->fullIData(oldp+17353,(4U),32);
    bufp->fullIData(oldp+17354,(8U),32);
    bufp->fullIData(oldp+17355,(6U),32);
    bufp->fullIData(oldp+17356,(2U),32);
    bufp->fullIData(oldp+17357,(0x1000U),32);
    bufp->fullCData(oldp+17358,(0U),4);
    bufp->fullIData(oldp+17359,(3U),32);
    bufp->fullIData(oldp+17360,(5U),32);
    bufp->fullIData(oldp+17361,(0xcU),32);
    bufp->fullIData(oldp+17362,(0x40U),32);
    bufp->fullCData(oldp+17363,(1U),4);
    bufp->fullCData(oldp+17364,(2U),4);
    bufp->fullCData(oldp+17365,(3U),4);
    bufp->fullWData(oldp+17366,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_data),280);
    bufp->fullIData(oldp+17375,(0x118U),32);
    bufp->fullIData(oldp+17376,(0x20U),32);
    bufp->fullIData(oldp+17377,(5U),32);
    bufp->fullWData(oldp+17378,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_data),280);
    bufp->fullWData(oldp+17387,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_data),280);
    bufp->fullWData(oldp+17396,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_data),280);
    bufp->fullWData(oldp+17405,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_data),280);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_full_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmptw_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_full_0\n"); );
    // Init
    Vmptw_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmptw_top___024root*>(voidSelf);
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmptw_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmptw_top___024root__trace_full_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mptw_top__DOT__system_status_stalled[0]));
    bufp->fullBit(oldp+2,(vlSelf->mptw_top__DOT__system_status_stalled[1]));
    bufp->fullBit(oldp+3,(vlSelf->mptw_top__DOT__system_status_stalled[2]));
    bufp->fullBit(oldp+4,(vlSelf->mptw_top__DOT__system_status_stalled[3]));
    bufp->fullBit(oldp+5,(vlSelf->mptw_top__DOT__system_status_stalled[4]));
    bufp->fullBit(oldp+6,(vlSelf->mptw_top__DOT__system_status_stalled[5]));
    bufp->fullBit(oldp+7,(vlSelf->mptw_top__DOT__system_status_stalled[6]));
    bufp->fullBit(oldp+8,(vlSelf->mptw_top__DOT__system_status_stalled[7]));
    bufp->fullBit(oldp+9,(vlSelf->mptw_top__DOT__system_status_stalled[8]));
    bufp->fullWData(oldp+10,(vlSelf->mptw_top__DOT__input_transaction),280);
    bufp->fullCData(oldp+19,(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type),2);
    bufp->fullWData(oldp+20,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction),280);
    bufp->fullQData(oldp+29,((((QData)((IData)(vlSelf->mptw_top__DOT__input_transaction[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->mptw_top__DOT__input_transaction[0U])))),64);
    bufp->fullQData(oldp+31,((((QData)((IData)(vlSelf->mptw_top__DOT__input_transaction[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->mptw_top__DOT__input_transaction[2U])))),64);
    bufp->fullBit(oldp+33,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
    bufp->fullBit(oldp+34,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
    bufp->fullBit(oldp+35,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
    bufp->fullWData(oldp+36,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
    bufp->fullBit(oldp+45,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
    bufp->fullWData(oldp+46,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+55,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    bufp->fullBit(oldp+56,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
    bufp->fullBit(oldp+57,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
    bufp->fullBit(oldp+58,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
    bufp->fullWData(oldp+59,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
    bufp->fullBit(oldp+68,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
    bufp->fullWData(oldp+69,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+78,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    bufp->fullBit(oldp+79,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
    bufp->fullBit(oldp+80,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
    bufp->fullBit(oldp+81,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
    bufp->fullWData(oldp+82,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
    bufp->fullBit(oldp+91,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
    bufp->fullWData(oldp+92,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+101,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    bufp->fullBit(oldp+102,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
    bufp->fullBit(oldp+103,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
    bufp->fullBit(oldp+104,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
    bufp->fullWData(oldp+105,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
    bufp->fullBit(oldp+114,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
    bufp->fullWData(oldp+115,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+124,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    bufp->fullWData(oldp+125,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+134,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+143,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+152,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+161,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    bufp->fullWData(oldp+170,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    bufp->fullWData(oldp+179,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    bufp->fullWData(oldp+188,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    bufp->fullWData(oldp+197,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    bufp->fullBit(oldp+206,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready));
    bufp->fullBit(oldp+207,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy));
    bufp->fullBit(oldp+208,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state));
    bufp->fullWData(oldp+209,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+218,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
    bufp->fullCData(oldp+219,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
    bufp->fullBit(oldp+220,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+222,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+223,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+503,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
    bufp->fullCData(oldp+504,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
    bufp->fullBit(oldp+505,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
    bufp->fullBit(oldp+506,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+507,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+508,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+788,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
    bufp->fullCData(oldp+789,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
    bufp->fullBit(oldp+790,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+792,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+793,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+1073,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
    bufp->fullCData(oldp+1074,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
    bufp->fullBit(oldp+1075,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
    bufp->fullBit(oldp+1076,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+1077,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+1078,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
    bufp->fullCData(oldp+1359,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
    bufp->fullBit(oldp+1360,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
    bufp->fullBit(oldp+1361,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+1362,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+1363,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    bufp->fullWData(oldp+1643,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data),280);
    bufp->fullWData(oldp+1652,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+1661,((0U != (((QData)((IData)(
                                                      vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                      >> 4U))))));
    bufp->fullBit(oldp+1662,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid));
    bufp->fullBit(oldp+1663,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
    bufp->fullWData(oldp+1664,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
    bufp->fullBit(oldp+1673,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
    bufp->fullBit(oldp+1674,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
    bufp->fullBit(oldp+1675,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
    bufp->fullCData(oldp+1676,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
    bufp->fullCData(oldp+1677,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
    bufp->fullCData(oldp+1678,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+1679,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
    bufp->fullBit(oldp+1680,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+1681,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+1682,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+1962,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready));
    bufp->fullBit(oldp+1963,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy));
    bufp->fullBit(oldp+1964,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state));
    bufp->fullWData(oldp+1965,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d),280);
    bufp->fullBit(oldp+1974,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
    bufp->fullCData(oldp+1975,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
    bufp->fullCData(oldp+1976,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+1977,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    bufp->fullWData(oldp+1978,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
    bufp->fullQData(oldp+2490,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
                                 ? (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                     & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])
                                     ? (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3fffU 
                                                                   & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                              (0x1ffU 
                                                               & (VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                 : (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                                     >> 4U))))),64);
    bufp->fullWData(oldp+2492,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
    bufp->fullWData(oldp+2501,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+2510,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    bufp->fullBit(oldp+2511,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
    bufp->fullWData(oldp+2512,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
    bufp->fullWData(oldp+2521,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
    bufp->fullCData(oldp+2526,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
    bufp->fullBit(oldp+2527,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
    bufp->fullBit(oldp+2528,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
    bufp->fullCData(oldp+2529,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
    bufp->fullWData(oldp+2530,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
    bufp->fullIData(oldp+2534,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+2535,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2536,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
    bufp->fullWData(oldp+2537,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
    bufp->fullBit(oldp+2546,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
    bufp->fullBit(oldp+2547,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
    bufp->fullBit(oldp+2548,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
    bufp->fullCData(oldp+2549,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
    bufp->fullCData(oldp+2550,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
    bufp->fullCData(oldp+2551,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+2552,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
    bufp->fullBit(oldp+2553,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+2554,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+2555,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+2835,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    bufp->fullBit(oldp+2836,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
    bufp->fullBit(oldp+2837,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
    bufp->fullWData(oldp+2838,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+2847,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
    bufp->fullCData(oldp+2848,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
    bufp->fullCData(oldp+2849,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+2850,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    bufp->fullWData(oldp+2851,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
    bufp->fullQData(oldp+3363,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
                                 ? (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                     & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])
                                     ? (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3fffU 
                                                                   & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                              (0x1ffU 
                                                               & (VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                 : (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                                     >> 4U))))),64);
    bufp->fullWData(oldp+3365,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
    bufp->fullWData(oldp+3374,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+3383,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    bufp->fullBit(oldp+3384,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
    bufp->fullWData(oldp+3385,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
    bufp->fullWData(oldp+3394,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
    bufp->fullCData(oldp+3399,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
    bufp->fullBit(oldp+3400,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
    bufp->fullBit(oldp+3401,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
    bufp->fullCData(oldp+3402,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
    bufp->fullWData(oldp+3403,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
    bufp->fullIData(oldp+3407,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+3408,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+3409,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
    bufp->fullWData(oldp+3410,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
    bufp->fullBit(oldp+3419,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
    bufp->fullBit(oldp+3420,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
    bufp->fullBit(oldp+3421,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
    bufp->fullCData(oldp+3422,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
    bufp->fullCData(oldp+3423,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
    bufp->fullCData(oldp+3424,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+3425,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
    bufp->fullBit(oldp+3426,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+3427,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+3428,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+3708,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    bufp->fullBit(oldp+3709,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
    bufp->fullBit(oldp+3710,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
    bufp->fullWData(oldp+3711,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+3720,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
    bufp->fullCData(oldp+3721,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
    bufp->fullCData(oldp+3722,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+3723,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    bufp->fullWData(oldp+3724,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
    bufp->fullQData(oldp+4236,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
                                 ? (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                     & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])
                                     ? (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3fffU 
                                                                   & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                              (0x1ffU 
                                                               & (VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                 : (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                                     >> 4U))))),64);
    bufp->fullWData(oldp+4238,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
    bufp->fullWData(oldp+4247,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+4256,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    bufp->fullBit(oldp+4257,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
    bufp->fullWData(oldp+4258,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
    bufp->fullWData(oldp+4267,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
    bufp->fullCData(oldp+4272,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
    bufp->fullBit(oldp+4273,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
    bufp->fullBit(oldp+4274,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
    bufp->fullCData(oldp+4275,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
    bufp->fullWData(oldp+4276,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
    bufp->fullIData(oldp+4280,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+4281,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+4282,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
    bufp->fullWData(oldp+4283,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
    bufp->fullBit(oldp+4292,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
    bufp->fullBit(oldp+4293,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
    bufp->fullBit(oldp+4294,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
    bufp->fullCData(oldp+4295,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
    bufp->fullCData(oldp+4296,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
    bufp->fullCData(oldp+4297,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+4298,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
    bufp->fullBit(oldp+4299,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+4300,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+4301,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+4581,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    bufp->fullBit(oldp+4582,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
    bufp->fullBit(oldp+4583,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
    bufp->fullWData(oldp+4584,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+4593,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
    bufp->fullCData(oldp+4594,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
    bufp->fullCData(oldp+4595,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+4596,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    bufp->fullWData(oldp+4597,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
    bufp->fullQData(oldp+5109,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
                                 ? (((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                     & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])
                                     ? (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x3fffU 
                                                            & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3fffU 
                                                                   & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q[
                                                              (0x1ffU 
                                                               & (VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                 : (((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                                     >> 4U))))),64);
    bufp->fullWData(oldp+5111,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
    bufp->fullWData(oldp+5120,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+5129,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
    bufp->fullBit(oldp+5130,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
    bufp->fullWData(oldp+5131,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
    bufp->fullWData(oldp+5140,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
    bufp->fullCData(oldp+5145,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
    bufp->fullBit(oldp+5146,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
    bufp->fullBit(oldp+5147,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                              & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
    bufp->fullCData(oldp+5148,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
    bufp->fullWData(oldp+5149,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
    bufp->fullIData(oldp+5153,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+5154,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+5155,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
    bufp->fullWData(oldp+5156,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
    bufp->fullBit(oldp+5165,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
    bufp->fullBit(oldp+5166,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
    bufp->fullBit(oldp+5167,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
    bufp->fullCData(oldp+5168,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
    bufp->fullCData(oldp+5169,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
    bufp->fullCData(oldp+5170,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+5171,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
    bufp->fullBit(oldp+5172,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+5173,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
    bufp->fullWData(oldp+5174,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    bufp->fullBit(oldp+5454,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    bufp->fullBit(oldp+5455,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
    bufp->fullBit(oldp+5456,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
    bufp->fullWData(oldp+5457,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+5466,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
    bufp->fullCData(oldp+5467,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
    bufp->fullCData(oldp+5468,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
    bufp->fullCData(oldp+5469,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    bufp->fullWData(oldp+5470,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction),280);
    bufp->fullBit(oldp+5479,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullBit(oldp+5480,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready));
    bufp->fullBit(oldp+5481,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready));
    bufp->fullCData(oldp+5482,(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d),3);
    bufp->fullBit(oldp+5483,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy));
    bufp->fullBit(oldp+5484,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state));
    bufp->fullWData(oldp+5485,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+5494,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy));
    bufp->fullBit(oldp+5495,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state));
    bufp->fullWData(oldp+5496,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d),280);
    bufp->fullCData(oldp+5505,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d),7);
    bufp->fullBit(oldp+5506,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push));
    bufp->fullSData(oldp+5507,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in),12);
    bufp->fullBit(oldp+5508,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready));
    bufp->fullBit(oldp+5509,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid));
    bufp->fullWData(oldp+5510,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data),280);
    bufp->fullBit(oldp+5519,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy));
    bufp->fullBit(oldp+5520,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state));
    bufp->fullWData(oldp+5521,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
    bufp->fullBit(oldp+5530,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock));
    bufp->fullCData(oldp+5531,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n),6);
    bufp->fullWData(oldp+5532,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n),768);
    bufp->fullWData(oldp+5556,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                               [0U]),17920);
    bufp->fullWData(oldp+6116,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                               [1U]),17920);
    bufp->fullWData(oldp+6676,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                               [2U]),17920);
    bufp->fullWData(oldp+7236,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                               [3U]),17920);
    bufp->fullWData(oldp+7796,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                               [4U]),17920);
    bufp->fullBit(oldp+8356,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0]));
    bufp->fullBit(oldp+8357,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1]));
    bufp->fullBit(oldp+8358,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2]));
    bufp->fullBit(oldp+8359,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3]));
    bufp->fullBit(oldp+8360,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4]));
    bufp->fullCData(oldp+8361,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[0]),6);
    bufp->fullCData(oldp+8362,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[1]),6);
    bufp->fullCData(oldp+8363,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[2]),6);
    bufp->fullCData(oldp+8364,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[3]),6);
    bufp->fullCData(oldp+8365,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[4]),6);
    bufp->fullWData(oldp+8366,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                               [0U]),280);
    bufp->fullWData(oldp+8375,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                               [1U]),280);
    bufp->fullWData(oldp+8384,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                               [2U]),280);
    bufp->fullWData(oldp+8393,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                               [3U]),280);
    bufp->fullWData(oldp+8402,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                               [4U]),280);
    bufp->fullWData(oldp+8411,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction),280);
    bufp->fullCData(oldp+8420,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask),5);
    bufp->fullBit(oldp+8421,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                    >> 8U))));
    bufp->fullWData(oldp+8422,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+8431,((1U & (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
                                    >> 8U))));
    bufp->fullWData(oldp+8432,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+8441,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                    >> 8U))));
    bufp->fullWData(oldp+8442,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+8451,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                    >> 8U))));
    bufp->fullWData(oldp+8452,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+8461,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                    >> 8U))));
    bufp->fullWData(oldp+8462,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    bufp->fullBit(oldp+8471,((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                       >> 4U)))));
    bufp->fullBit(oldp+8472,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy));
    bufp->fullBit(oldp+8473,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    bufp->fullCData(oldp+8474,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[0]),6);
    bufp->fullCData(oldp+8475,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[1]),6);
    bufp->fullCData(oldp+8476,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[2]),6);
    bufp->fullCData(oldp+8477,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[3]),6);
    bufp->fullCData(oldp+8478,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[4]),6);
    bufp->fullWData(oldp+8479,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                               [0U]),280);
    bufp->fullWData(oldp+8488,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                               [1U]),280);
    bufp->fullWData(oldp+8497,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                               [2U]),280);
    bufp->fullWData(oldp+8506,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                               [3U]),280);
    bufp->fullWData(oldp+8515,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                               [4U]),280);
    bufp->fullCData(oldp+8524,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear),5);
    bufp->fullBit(oldp+8525,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready));
    bufp->fullBit(oldp+8526,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid));
    bufp->fullWData(oldp+8527,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data),280);
    bufp->fullBit(oldp+8536,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy));
    bufp->fullBit(oldp+8537,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state));
    bufp->fullWData(oldp+8538,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+8547,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    bufp->fullWData(oldp+8556,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q),280);
    bufp->fullWData(oldp+8565,(vlSelf->mptw_top__DOT__walking_output_transaction
                               [0U]),280);
    bufp->fullWData(oldp+8574,(vlSelf->mptw_top__DOT__walking_output_transaction
                               [1U]),280);
    bufp->fullWData(oldp+8583,(vlSelf->mptw_top__DOT__walking_output_transaction
                               [2U]),280);
    bufp->fullWData(oldp+8592,(vlSelf->mptw_top__DOT__walking_output_transaction
                               [3U]),280);
    bufp->fullBit(oldp+8601,(vlSelf->mptw_top__DOT__retire_demux_select[0]));
    bufp->fullBit(oldp+8602,(vlSelf->mptw_top__DOT__retire_demux_select[1]));
    bufp->fullBit(oldp+8603,(vlSelf->mptw_top__DOT__retire_demux_select[2]));
    bufp->fullBit(oldp+8604,(vlSelf->mptw_top__DOT__retire_demux_select[3]));
    bufp->fullBit(oldp+8605,(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid));
    bufp->fullWData(oldp+8606,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+8615,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid));
    bufp->fullWData(oldp+8616,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+8625,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid));
    bufp->fullWData(oldp+8626,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+8635,(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid));
    bufp->fullBit(oldp+8636,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[0]));
    bufp->fullBit(oldp+8637,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[1]));
    bufp->fullBit(oldp+8638,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[2]));
    bufp->fullBit(oldp+8639,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[3]));
    bufp->fullBit(oldp+8640,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[4]));
    bufp->fullWData(oldp+8641,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[0]),280);
    bufp->fullWData(oldp+8650,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[1]),280);
    bufp->fullWData(oldp+8659,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[2]),280);
    bufp->fullWData(oldp+8668,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[3]),280);
    bufp->fullWData(oldp+8677,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[4]),280);
    bufp->fullBit(oldp+8686,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[0]));
    bufp->fullBit(oldp+8687,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[1]));
    bufp->fullBit(oldp+8688,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[2]));
    bufp->fullBit(oldp+8689,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[3]));
    bufp->fullBit(oldp+8690,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[4]));
    bufp->fullWData(oldp+8691,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[0]),280);
    bufp->fullWData(oldp+8700,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[1]),280);
    bufp->fullWData(oldp+8709,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[2]),280);
    bufp->fullWData(oldp+8718,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[3]),280);
    bufp->fullWData(oldp+8727,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[4]),280);
    bufp->fullBit(oldp+8736,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[0]));
    bufp->fullBit(oldp+8737,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[1]));
    bufp->fullBit(oldp+8738,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[2]));
    bufp->fullBit(oldp+8739,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[3]));
    bufp->fullBit(oldp+8740,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[4]));
    bufp->fullWData(oldp+8741,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[0]),280);
    bufp->fullWData(oldp+8750,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[1]),280);
    bufp->fullWData(oldp+8759,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[2]),280);
    bufp->fullWData(oldp+8768,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[3]),280);
    bufp->fullWData(oldp+8777,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[4]),280);
    bufp->fullBit(oldp+8786,(vlSelf->mptw_top__DOT__backend_to_issue_data_valid));
    bufp->fullWData(oldp+8787,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+8796,(vlSelf->mptw_top__DOT__retire_to_commit_data_valid));
    bufp->fullWData(oldp+8797,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+8806,(vlSelf->mptw_top__DOT__system_control_flush[0]),2);
    bufp->fullCData(oldp+8807,(vlSelf->mptw_top__DOT__system_control_flush[1]),2);
    bufp->fullCData(oldp+8808,(vlSelf->mptw_top__DOT__system_control_flush[2]),2);
    bufp->fullCData(oldp+8809,(vlSelf->mptw_top__DOT__system_control_flush[3]),2);
    bufp->fullCData(oldp+8810,(vlSelf->mptw_top__DOT__system_control_flush[4]),2);
    bufp->fullCData(oldp+8811,(vlSelf->mptw_top__DOT__system_control_flush[5]),2);
    bufp->fullCData(oldp+8812,(vlSelf->mptw_top__DOT__system_control_flush[6]),2);
    bufp->fullCData(oldp+8813,(vlSelf->mptw_top__DOT__system_control_flush[7]),2);
    bufp->fullCData(oldp+8814,(vlSelf->mptw_top__DOT__system_control_flush[8]),2);
    bufp->fullBit(oldp+8815,(vlSelf->mptw_top__DOT__issue_stage_slave_valid[0]));
    bufp->fullBit(oldp+8816,(vlSelf->mptw_top__DOT__issue_stage_slave_valid[1]));
    bufp->fullWData(oldp+8817,(vlSelf->mptw_top__DOT__issue_stage_slave_data[0]),280);
    bufp->fullWData(oldp+8826,(vlSelf->mptw_top__DOT__issue_stage_slave_data[1]),280);
    bufp->fullBit(oldp+8835,(vlSelf->mptw_top__DOT__issue_stage_master_valid[0]));
    bufp->fullBit(oldp+8836,(vlSelf->mptw_top__DOT__issue_stage_master_valid[1]));
    bufp->fullWData(oldp+8837,(vlSelf->mptw_top__DOT__issue_stage_master_data[0]),280);
    bufp->fullWData(oldp+8846,(vlSelf->mptw_top__DOT__issue_stage_master_data[1]),280);
    bufp->fullCData(oldp+8855,(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q),3);
    bufp->fullIData(oldp+8856,(vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q),18);
    bufp->fullIData(oldp+8857,(vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q),18);
    bufp->fullIData(oldp+8858,(vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+8859,(vlSelf->mptw_top__DOT__system_control_flush
                               [0U]),2);
    bufp->fullCData(oldp+8860,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [0U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+8861,((0U != vlSelf->mptw_top__DOT__system_control_flush
                              [0U])));
    bufp->fullBit(oldp+8862,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state));
    bufp->fullBit(oldp+8863,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                             [0U]));
    bufp->fullWData(oldp+8864,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                               [0U]),280);
    bufp->fullBit(oldp+8873,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid));
    bufp->fullWData(oldp+8874,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+8883,(vlSelf->mptw_top__DOT__system_control_flush
                               [3U]),2);
    bufp->fullBit(oldp+8884,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    bufp->fullWData(oldp+8885,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+8894,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
    bufp->fullWData(oldp+8895,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+8904,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [3U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+8905,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
    bufp->fullWData(oldp+8906,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
    bufp->fullCData(oldp+9418,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
    bufp->fullBit(oldp+9419,((0U != vlSelf->mptw_top__DOT__system_control_flush
                              [3U])));
    bufp->fullBit(oldp+9420,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
    bufp->fullQData(oldp+9421,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [0U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                               [0U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [0U][6U])) 
                                                 >> 4U)))),64);
    bufp->fullCData(oldp+9423,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [0U][1U] >> 0x1cU)),4);
    bufp->fullQData(oldp+9424,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [0U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                             [0U][0U])))),64);
    bufp->fullQData(oldp+9426,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                 [0U][3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                             [0U][2U])))),64);
    bufp->fullCData(oldp+9428,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [0U][4U])),2);
    bufp->fullCData(oldp+9429,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
    bufp->fullBit(oldp+9430,((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][1U] >> 0x1cU))));
    bufp->fullSData(oldp+9431,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
    bufp->fullQData(oldp+9432,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
    bufp->fullQData(oldp+9434,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
    bufp->fullCData(oldp+9436,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
    bufp->fullBit(oldp+9437,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
    bufp->fullBit(oldp+9438,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
    bufp->fullBit(oldp+9439,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid));
    bufp->fullWData(oldp+9440,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+9449,(vlSelf->mptw_top__DOT__system_control_flush
                               [4U]),2);
    bufp->fullBit(oldp+9450,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    bufp->fullWData(oldp+9451,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+9460,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
    bufp->fullWData(oldp+9461,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+9470,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [4U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+9471,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
    bufp->fullWData(oldp+9472,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
    bufp->fullCData(oldp+9984,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
    bufp->fullBit(oldp+9985,((0U != vlSelf->mptw_top__DOT__system_control_flush
                              [4U])));
    bufp->fullBit(oldp+9986,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
    bufp->fullQData(oldp+9987,((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U])) 
                                                 >> 4U)))),64);
    bufp->fullCData(oldp+9989,((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                >> 0x1cU)),4);
    bufp->fullQData(oldp+9990,((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U])))),64);
    bufp->fullQData(oldp+9992,((((QData)((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U])))),64);
    bufp->fullCData(oldp+9994,((3U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U])),2);
    bufp->fullCData(oldp+9995,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
    bufp->fullBit(oldp+9996,((1U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                     >> 0x1cU))));
    bufp->fullSData(oldp+9997,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
    bufp->fullQData(oldp+9998,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
    bufp->fullQData(oldp+10000,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
    bufp->fullCData(oldp+10002,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
    bufp->fullBit(oldp+10003,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
    bufp->fullBit(oldp+10004,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
    bufp->fullBit(oldp+10005,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                              [2U]));
    bufp->fullWData(oldp+10006,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [2U]),280);
    bufp->fullBit(oldp+10015,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid));
    bufp->fullWData(oldp+10016,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+10025,(vlSelf->mptw_top__DOT__system_control_flush
                                [5U]),2);
    bufp->fullBit(oldp+10026,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    bufp->fullWData(oldp+10027,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+10036,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
    bufp->fullWData(oldp+10037,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+10046,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [5U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+10047,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
    bufp->fullWData(oldp+10048,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
    bufp->fullCData(oldp+10560,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
    bufp->fullBit(oldp+10561,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [5U])));
    bufp->fullBit(oldp+10562,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
    bufp->fullQData(oldp+10563,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][8U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [2U][7U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                  [2U][6U])) 
                                                  >> 4U)))),64);
    bufp->fullCData(oldp+10565,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][1U] >> 0x1cU)),4);
    bufp->fullQData(oldp+10566,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [2U][0U])))),64);
    bufp->fullQData(oldp+10568,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [2U][2U])))),64);
    bufp->fullCData(oldp+10570,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][4U])),2);
    bufp->fullCData(oldp+10571,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
    bufp->fullSData(oldp+10572,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
    bufp->fullQData(oldp+10573,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
    bufp->fullQData(oldp+10575,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
    bufp->fullCData(oldp+10577,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
    bufp->fullBit(oldp+10578,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
    bufp->fullBit(oldp+10579,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
    bufp->fullBit(oldp+10580,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                              [3U]));
    bufp->fullWData(oldp+10581,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [3U]),280);
    bufp->fullBit(oldp+10590,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid));
    bufp->fullWData(oldp+10591,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+10600,(vlSelf->mptw_top__DOT__system_control_flush
                                [6U]),2);
    bufp->fullBit(oldp+10601,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
    bufp->fullWData(oldp+10602,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
    bufp->fullBit(oldp+10611,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
    bufp->fullWData(oldp+10612,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+10621,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [6U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+10622,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
    bufp->fullWData(oldp+10623,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
    bufp->fullCData(oldp+11135,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
    bufp->fullBit(oldp+11136,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [6U])));
    bufp->fullBit(oldp+11137,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
    bufp->fullQData(oldp+11138,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [3U][8U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [3U][7U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                  [3U][6U])) 
                                                  >> 4U)))),64);
    bufp->fullCData(oldp+11140,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][1U] >> 0x1cU)),4);
    bufp->fullQData(oldp+11141,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [3U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [3U][0U])))),64);
    bufp->fullQData(oldp+11143,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [3U][3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [3U][2U])))),64);
    bufp->fullCData(oldp+11145,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][4U])),2);
    bufp->fullCData(oldp+11146,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
    bufp->fullSData(oldp+11147,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
    bufp->fullQData(oldp+11148,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
    bufp->fullQData(oldp+11150,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
    bufp->fullCData(oldp+11152,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
    bufp->fullBit(oldp+11153,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
    bufp->fullBit(oldp+11154,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
    bufp->fullCData(oldp+11155,(vlSelf->mptw_top__DOT__system_control_flush
                                [1U]),2);
    bufp->fullCData(oldp+11156,((((3U == ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                           [1U]) ? 3U
                                           : 0U)) & 
                                  (3U == ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                           [1U]) ? 3U
                                           : 0U))) ? 3U
                                  : (((0U != ((0U != 
                                               vlSelf->mptw_top__DOT__system_control_flush
                                               [1U])
                                               ? 3U
                                               : 0U)) 
                                      | (0U != ((0U 
                                                 != 
                                                 vlSelf->mptw_top__DOT__system_control_flush
                                                 [1U])
                                                 ? 3U
                                                 : 0U)))
                                      ? 1U : 0U))),2);
    bufp->fullCData(oldp+11157,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [1U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+11158,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [1U])));
    bufp->fullBit(oldp+11159,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state));
    bufp->fullBit(oldp+11160,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state));
    bufp->fullBit(oldp+11161,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                              [4U]));
    bufp->fullWData(oldp+11162,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                [4U]),280);
    bufp->fullBit(oldp+11171,(vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid));
    bufp->fullWData(oldp+11172,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
    bufp->fullCData(oldp+11181,(vlSelf->mptw_top__DOT__system_control_flush
                                [7U]),2);
    bufp->fullCData(oldp+11182,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [7U]) ? 3U : 0U)),2);
    bufp->fullQData(oldp+11183,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][8U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [4U][7U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                  [4U][6U])) 
                                                  >> 4U)))),64);
    bufp->fullCData(oldp+11185,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][1U] >> 0x1cU)),4);
    bufp->fullQData(oldp+11186,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [4U][0U])))),64);
    bufp->fullQData(oldp+11188,((((QData)((IData)(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                              [4U][2U])))),64);
    bufp->fullCData(oldp+11190,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][4U])),2);
    bufp->fullCData(oldp+11191,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions),3);
    bufp->fullSData(oldp+11192,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number),9);
    bufp->fullQData(oldp+11193,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address),64);
    bufp->fullQData(oldp+11195,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr),64);
    bufp->fullCData(oldp+11197,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset),4);
    bufp->fullBit(oldp+11198,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [7U])));
    bufp->fullBit(oldp+11199,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state));
    bufp->fullCData(oldp+11200,(vlSelf->mptw_top__DOT__system_control_flush
                                [2U]),2);
    bufp->fullCData(oldp+11201,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [2U]) ? 3U : 0U)),2);
    bufp->fullBit(oldp+11202,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [2U])));
    bufp->fullBit(oldp+11203,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state));
    bufp->fullCData(oldp+11204,(vlSelf->mptw_top__DOT__system_control_flush
                                [8U]),2);
    bufp->fullCData(oldp+11205,(vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed),2);
    bufp->fullWData(oldp+11206,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                [0U]),280);
    bufp->fullWData(oldp+11215,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                [1U]),280);
    bufp->fullWData(oldp+11224,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                [2U]),280);
    bufp->fullWData(oldp+11233,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                [3U]),280);
    bufp->fullWData(oldp+11242,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                [4U]),280);
    bufp->fullCData(oldp+11251,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q),2);
    bufp->fullCData(oldp+11252,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q),7);
    bufp->fullWData(oldp+11253,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                [0U]),17920);
    bufp->fullWData(oldp+11813,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                [1U]),17920);
    bufp->fullWData(oldp+12373,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                [2U]),17920);
    bufp->fullWData(oldp+12933,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                [3U]),17920);
    bufp->fullWData(oldp+13493,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                [4U]),17920);
    bufp->fullCData(oldp+14053,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q),2);
    bufp->fullBit(oldp+14054,((0U != vlSelf->mptw_top__DOT__system_control_flush
                               [8U])));
    bufp->fullCData(oldp+14055,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q),2);
    bufp->fullCData(oldp+14056,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d),2);
    bufp->fullBit(oldp+14057,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state));
    bufp->fullBit(oldp+14058,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state));
    bufp->fullIData(oldp+14059,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+14060,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+14061,((0U == (3U & (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                                            >> 2U)))));
    bufp->fullCData(oldp+14062,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
    bufp->fullCData(oldp+14063,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
    bufp->fullCData(oldp+14064,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
    bufp->fullCData(oldp+14065,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
    bufp->fullCData(oldp+14066,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    bufp->fullBit(oldp+14067,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U)))));
    bufp->fullCData(oldp+14068,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
    bufp->fullCData(oldp+14069,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
    bufp->fullCData(oldp+14070,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
    bufp->fullCData(oldp+14071,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
    bufp->fullCData(oldp+14072,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    bufp->fullBit(oldp+14073,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U)))));
    bufp->fullCData(oldp+14074,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
    bufp->fullCData(oldp+14075,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
    bufp->fullCData(oldp+14076,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
    bufp->fullCData(oldp+14077,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
    bufp->fullCData(oldp+14078,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    bufp->fullBit(oldp+14079,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U)))));
    bufp->fullCData(oldp+14080,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
    bufp->fullCData(oldp+14081,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
    bufp->fullCData(oldp+14082,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
    bufp->fullCData(oldp+14083,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
    bufp->fullCData(oldp+14084,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    bufp->fullBit(oldp+14085,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U)))));
    bufp->fullCData(oldp+14086,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
    bufp->fullCData(oldp+14087,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
    bufp->fullCData(oldp+14088,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
    bufp->fullCData(oldp+14089,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
    bufp->fullCData(oldp+14090,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    bufp->fullCData(oldp+14091,(vlSelf->mptw_top__DOT__system_status_flushed[0]),2);
    bufp->fullCData(oldp+14092,(vlSelf->mptw_top__DOT__system_status_flushed[1]),2);
    bufp->fullCData(oldp+14093,(vlSelf->mptw_top__DOT__system_status_flushed[2]),2);
    bufp->fullCData(oldp+14094,(vlSelf->mptw_top__DOT__system_status_flushed[3]),2);
    bufp->fullCData(oldp+14095,(vlSelf->mptw_top__DOT__system_status_flushed[4]),2);
    bufp->fullCData(oldp+14096,(vlSelf->mptw_top__DOT__system_status_flushed[5]),2);
    bufp->fullCData(oldp+14097,(vlSelf->mptw_top__DOT__system_status_flushed[6]),2);
    bufp->fullCData(oldp+14098,(vlSelf->mptw_top__DOT__system_status_flushed[7]),2);
    bufp->fullCData(oldp+14099,(vlSelf->mptw_top__DOT__system_status_flushed[8]),2);
    bufp->fullCData(oldp+14100,((((3U == ((0U != vlSelf->mptw_top__DOT__system_control_flush
                                           [2U]) ? 3U
                                           : 0U)) & 
                                  (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                                  ? 3U : (((0U != (
                                                   (0U 
                                                    != 
                                                    vlSelf->mptw_top__DOT__system_control_flush
                                                    [2U])
                                                    ? 3U
                                                    : 0U)) 
                                           | (0U != (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                                           ? 1U : 0U))),2);
    bufp->fullBit(oldp+14101,((0x40U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+14102,((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+14103,((0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))),6);
    bufp->fullSData(oldp+14104,(((0x2ffU >= (0x3ffU 
                                             & ((IData)(0xcU) 
                                                * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))
                                  ? (0xfffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[
                                                 (((IData)(0xbU) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xcU) 
                                                       * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)))))) 
                                               | (vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[
                                                  (0x1fU 
                                                   & (((IData)(0xcU) 
                                                       * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))))
                                  : 0U)),12);
    bufp->fullCData(oldp+14105,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q),6);
    bufp->fullCData(oldp+14106,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q),6);
    bufp->fullCData(oldp+14107,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q),7);
    bufp->fullWData(oldp+14108,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q),768);
    bufp->fullBit(oldp+14132,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+14133,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+14134,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+14135,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
    bufp->fullBit(oldp+14144,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+14145,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+14146,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+14147,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
    bufp->fullCData(oldp+14156,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
    bufp->fullCData(oldp+14157,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+14158,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+14159,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+14160,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
    bufp->fullCData(oldp+14440,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+14441,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+14442,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+14443,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    bufp->fullBit(oldp+14723,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+14724,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+14725,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+14726,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
    bufp->fullBit(oldp+14735,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+14736,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+14737,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+14738,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
    bufp->fullCData(oldp+14747,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
    bufp->fullCData(oldp+14748,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+14749,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+14750,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+14751,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
    bufp->fullCData(oldp+15031,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+15032,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+15033,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+15034,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    bufp->fullBit(oldp+15314,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+15315,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+15316,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+15317,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
    bufp->fullBit(oldp+15326,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+15327,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+15328,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+15329,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
    bufp->fullCData(oldp+15338,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
    bufp->fullCData(oldp+15339,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+15340,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+15341,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+15342,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
    bufp->fullCData(oldp+15622,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+15623,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+15624,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+15625,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    bufp->fullBit(oldp+15905,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+15906,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+15907,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+15908,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
    bufp->fullBit(oldp+15917,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+15918,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+15919,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+15920,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
    bufp->fullCData(oldp+15929,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
    bufp->fullCData(oldp+15930,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+15931,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+15932,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+15933,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
    bufp->fullCData(oldp+16213,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+16214,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+16215,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+16216,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    bufp->fullBit(oldp+16496,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+16497,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+16498,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+16499,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
    bufp->fullBit(oldp+16508,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullBit(oldp+16509,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
    bufp->fullCData(oldp+16510,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
    bufp->fullWData(oldp+16511,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
    bufp->fullCData(oldp+16520,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
    bufp->fullCData(oldp+16521,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+16522,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+16523,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+16524,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
    bufp->fullCData(oldp+16804,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
    bufp->fullCData(oldp+16805,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
    bufp->fullCData(oldp+16806,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
    bufp->fullWData(oldp+16807,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    bufp->fullBit(oldp+17087,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo));
    bufp->fullBit(oldp+17088,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    bufp->fullBit(oldp+17089,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    bufp->fullBit(oldp+17090,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    bufp->fullBit(oldp+17091,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    bufp->fullBit(oldp+17092,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    bufp->fullIData(oldp+17093,(vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d),18);
    bufp->fullCData(oldp+17094,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_flushed),2);
    bufp->fullBit(oldp+17095,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
    bufp->fullQData(oldp+17096,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
    bufp->fullCData(oldp+17098,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
    bufp->fullCData(oldp+17099,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_flushed),2);
    bufp->fullBit(oldp+17100,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
    bufp->fullQData(oldp+17101,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
    bufp->fullCData(oldp+17103,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
    bufp->fullCData(oldp+17104,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_flushed),2);
    bufp->fullBit(oldp+17105,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
    bufp->fullQData(oldp+17106,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
    bufp->fullCData(oldp+17108,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
    bufp->fullCData(oldp+17109,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_flushed),2);
    bufp->fullBit(oldp+17110,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
    bufp->fullQData(oldp+17111,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
    bufp->fullCData(oldp+17113,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
    bufp->fullCData(oldp+17114,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
    bufp->fullCData(oldp+17115,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id),7);
    bufp->fullBit(oldp+17116,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req));
    bufp->fullQData(oldp+17117,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
    bufp->fullCData(oldp+17119,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    bufp->fullCData(oldp+17120,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    bufp->fullCData(oldp+17121,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    bufp->fullCData(oldp+17122,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    bufp->fullCData(oldp+17123,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    bufp->fullBit(oldp+17124,(vlSelf->clk_i));
    bufp->fullBit(oldp+17125,(vlSelf->rst_ni));
    bufp->fullBit(oldp+17126,(vlSelf->flush_all_i));
    bufp->fullBit(oldp+17127,(vlSelf->flush_spec_i));
    bufp->fullBit(oldp+17128,(vlSelf->stall_i));
    bufp->fullBit(oldp+17129,(vlSelf->busy_o));
    bufp->fullBit(oldp+17130,(vlSelf->stalled_o));
    bufp->fullQData(oldp+17131,(vlSelf->spa_i),64);
    bufp->fullQData(oldp+17133,(vlSelf->mmpt_reg_i),64);
    bufp->fullCData(oldp+17135,(vlSelf->access_type_i),2);
    bufp->fullBit(oldp+17136,(vlSelf->speculative_i));
    bufp->fullBit(oldp+17137,(vlSelf->mptw_transaction_valid_i));
    bufp->fullBit(oldp+17138,(vlSelf->mptw_ready_o));
    bufp->fullBit(oldp+17139,(vlSelf->mptw_result_valid_o));
    bufp->fullQData(oldp+17140,(vlSelf->plb_entry_o),64);
    bufp->fullBit(oldp+17142,(vlSelf->access_page_fault_o));
    bufp->fullCData(oldp+17143,(vlSelf->format_error_o),3);
    bufp->fullBit(oldp+17144,(vlSelf->plb_master_mem_we));
    bufp->fullBit(oldp+17145,(vlSelf->plb_master_mem_gnt));
    bufp->fullBit(oldp+17146,(vlSelf->plb_master_mem_req));
    bufp->fullBit(oldp+17147,(vlSelf->plb_master_mem_error));
    bufp->fullBit(oldp+17148,(vlSelf->plb_master_mem_valid));
    bufp->fullCData(oldp+17149,(vlSelf->plb_master_mem_be),8);
    bufp->fullQData(oldp+17150,(vlSelf->plb_master_mem_addr),64);
    bufp->fullQData(oldp+17152,(vlSelf->plb_master_mem_rdata),64);
    bufp->fullQData(oldp+17154,(vlSelf->plb_master_mem_wdata),64);
    bufp->fullBit(oldp+17156,(vlSelf->walking_mem_master_mem_gnt[0]));
    bufp->fullBit(oldp+17157,(vlSelf->walking_mem_master_mem_gnt[1]));
    bufp->fullBit(oldp+17158,(vlSelf->walking_mem_master_mem_gnt[2]));
    bufp->fullBit(oldp+17159,(vlSelf->walking_mem_master_mem_gnt[3]));
    bufp->fullBit(oldp+17160,(vlSelf->walking_mem_master_mem_req[0]));
    bufp->fullBit(oldp+17161,(vlSelf->walking_mem_master_mem_req[1]));
    bufp->fullBit(oldp+17162,(vlSelf->walking_mem_master_mem_req[2]));
    bufp->fullBit(oldp+17163,(vlSelf->walking_mem_master_mem_req[3]));
    bufp->fullBit(oldp+17164,(vlSelf->walking_mem_master_mem_valid[0]));
    bufp->fullBit(oldp+17165,(vlSelf->walking_mem_master_mem_valid[1]));
    bufp->fullBit(oldp+17166,(vlSelf->walking_mem_master_mem_valid[2]));
    bufp->fullBit(oldp+17167,(vlSelf->walking_mem_master_mem_valid[3]));
    bufp->fullCData(oldp+17168,(vlSelf->walking_mem_master_mem_be[0]),8);
    bufp->fullCData(oldp+17169,(vlSelf->walking_mem_master_mem_be[1]),8);
    bufp->fullCData(oldp+17170,(vlSelf->walking_mem_master_mem_be[2]),8);
    bufp->fullCData(oldp+17171,(vlSelf->walking_mem_master_mem_be[3]),8);
    bufp->fullBit(oldp+17172,(vlSelf->walking_mem_master_mem_we[0]));
    bufp->fullBit(oldp+17173,(vlSelf->walking_mem_master_mem_we[1]));
    bufp->fullBit(oldp+17174,(vlSelf->walking_mem_master_mem_we[2]));
    bufp->fullBit(oldp+17175,(vlSelf->walking_mem_master_mem_we[3]));
    bufp->fullQData(oldp+17176,(vlSelf->walking_mem_master_mem_addr[0]),64);
    bufp->fullQData(oldp+17178,(vlSelf->walking_mem_master_mem_addr[1]),64);
    bufp->fullQData(oldp+17180,(vlSelf->walking_mem_master_mem_addr[2]),64);
    bufp->fullQData(oldp+17182,(vlSelf->walking_mem_master_mem_addr[3]),64);
    bufp->fullBit(oldp+17184,(vlSelf->walking_mem_master_mem_error[0]));
    bufp->fullBit(oldp+17185,(vlSelf->walking_mem_master_mem_error[1]));
    bufp->fullBit(oldp+17186,(vlSelf->walking_mem_master_mem_error[2]));
    bufp->fullBit(oldp+17187,(vlSelf->walking_mem_master_mem_error[3]));
    bufp->fullQData(oldp+17188,(vlSelf->walking_mem_master_mem_rdata[0]),64);
    bufp->fullQData(oldp+17190,(vlSelf->walking_mem_master_mem_rdata[1]),64);
    bufp->fullQData(oldp+17192,(vlSelf->walking_mem_master_mem_rdata[2]),64);
    bufp->fullQData(oldp+17194,(vlSelf->walking_mem_master_mem_rdata[3]),64);
    bufp->fullQData(oldp+17196,(vlSelf->walking_mem_master_mem_wdata[0]),64);
    bufp->fullQData(oldp+17198,(vlSelf->walking_mem_master_mem_wdata[1]),64);
    bufp->fullQData(oldp+17200,(vlSelf->walking_mem_master_mem_wdata[2]),64);
    bufp->fullQData(oldp+17202,(vlSelf->walking_mem_master_mem_wdata[3]),64);
    bufp->fullBit(oldp+17204,(vlSelf->mptw_top__DOT__input_to_fetch_data_valid));
    bufp->fullBit(oldp+17205,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->fullBit(oldp+17206,(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready));
    bufp->fullBit(oldp+17207,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[0]));
    bufp->fullBit(oldp+17208,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[1]));
    bufp->fullBit(oldp+17209,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[2]));
    bufp->fullBit(oldp+17210,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[3]));
    bufp->fullBit(oldp+17211,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[4]));
    bufp->fullBit(oldp+17212,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[0]));
    bufp->fullBit(oldp+17213,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[1]));
    bufp->fullBit(oldp+17214,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[2]));
    bufp->fullBit(oldp+17215,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[3]));
    bufp->fullBit(oldp+17216,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[4]));
    bufp->fullBit(oldp+17217,(vlSelf->mptw_top__DOT__system_status_busy[0]));
    bufp->fullBit(oldp+17218,(vlSelf->mptw_top__DOT__system_status_busy[1]));
    bufp->fullBit(oldp+17219,(vlSelf->mptw_top__DOT__system_status_busy[2]));
    bufp->fullBit(oldp+17220,(vlSelf->mptw_top__DOT__system_status_busy[3]));
    bufp->fullBit(oldp+17221,(vlSelf->mptw_top__DOT__system_status_busy[4]));
    bufp->fullBit(oldp+17222,(vlSelf->mptw_top__DOT__system_status_busy[5]));
    bufp->fullBit(oldp+17223,(vlSelf->mptw_top__DOT__system_status_busy[6]));
    bufp->fullBit(oldp+17224,(vlSelf->mptw_top__DOT__system_status_busy[7]));
    bufp->fullBit(oldp+17225,(vlSelf->mptw_top__DOT__system_status_busy[8]));
    bufp->fullBit(oldp+17226,(vlSelf->mptw_top__DOT__issue_stage_slave_ready[0]));
    bufp->fullBit(oldp+17227,(vlSelf->mptw_top__DOT__issue_stage_slave_ready[1]));
    bufp->fullBit(oldp+17228,(vlSelf->mptw_top__DOT__issue_stage_master_ready[0]));
    bufp->fullBit(oldp+17229,(vlSelf->mptw_top__DOT__issue_stage_master_ready[1]));
    bufp->fullIData(oldp+17230,(vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d),18);
    bufp->fullIData(oldp+17231,(vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+17232,(((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                               & (vlSelf->mptw_top__DOT__input_transaction[8U] 
                                  >> 9U))));
    bufp->fullBit(oldp+17233,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullBit(oldp+17234,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullBit(oldp+17235,(vlSelf->walking_mem_master_mem_gnt
                              [0U]));
    bufp->fullBit(oldp+17236,(vlSelf->walking_mem_master_mem_error
                              [0U]));
    bufp->fullBit(oldp+17237,(vlSelf->walking_mem_master_mem_valid
                              [0U]));
    bufp->fullQData(oldp+17238,(vlSelf->walking_mem_master_mem_rdata
                                [0U]),64);
    bufp->fullCData(oldp+17240,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->fullBit(oldp+17241,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->fullBit(oldp+17242,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->fullBit(oldp+17243,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [1U]));
    bufp->fullBit(oldp+17244,(vlSelf->walking_mem_master_mem_gnt
                              [1U]));
    bufp->fullBit(oldp+17245,(vlSelf->walking_mem_master_mem_error
                              [1U]));
    bufp->fullBit(oldp+17246,(vlSelf->walking_mem_master_mem_valid
                              [1U]));
    bufp->fullQData(oldp+17247,(vlSelf->walking_mem_master_mem_rdata
                                [1U]),64);
    bufp->fullCData(oldp+17249,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->fullBit(oldp+17250,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->fullBit(oldp+17251,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->fullBit(oldp+17252,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullBit(oldp+17253,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [2U]));
    bufp->fullBit(oldp+17254,(vlSelf->walking_mem_master_mem_gnt
                              [2U]));
    bufp->fullBit(oldp+17255,(vlSelf->walking_mem_master_mem_error
                              [2U]));
    bufp->fullBit(oldp+17256,(vlSelf->walking_mem_master_mem_valid
                              [2U]));
    bufp->fullQData(oldp+17257,(vlSelf->walking_mem_master_mem_rdata
                                [2U]),64);
    bufp->fullCData(oldp+17259,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->fullBit(oldp+17260,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->fullBit(oldp+17261,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->fullBit(oldp+17262,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullBit(oldp+17263,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                              [3U]));
    bufp->fullBit(oldp+17264,(vlSelf->walking_mem_master_mem_gnt
                              [3U]));
    bufp->fullBit(oldp+17265,(vlSelf->walking_mem_master_mem_error
                              [3U]));
    bufp->fullBit(oldp+17266,(vlSelf->walking_mem_master_mem_valid
                              [3U]));
    bufp->fullQData(oldp+17267,(vlSelf->walking_mem_master_mem_rdata
                                [3U]),64);
    bufp->fullCData(oldp+17269,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->fullBit(oldp+17270,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->fullBit(oldp+17271,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->fullBit(oldp+17272,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->fullCData(oldp+17273,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o),3);
    bufp->fullCData(oldp+17274,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d),2);
    bufp->fullBit(oldp+17275,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop));
    bufp->fullCData(oldp+17276,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d),2);
    bufp->fullCData(oldp+17277,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n),6);
    bufp->fullCData(oldp+17278,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n),7);
}
