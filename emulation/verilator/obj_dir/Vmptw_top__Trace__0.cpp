// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmptw_top__Syms.h"


void Vmptw_top___024root__trace_chg_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmptw_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_chg_0\n"); );
    // Init
    Vmptw_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmptw_top___024root*>(voidSelf);
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmptw_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmptw_top___024root__trace_chg_0_sub_0(Vmptw_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->mptw_top__DOT__system_status_stalled[0]));
        bufp->chgBit(oldp+1,(vlSelf->mptw_top__DOT__system_status_stalled[1]));
        bufp->chgBit(oldp+2,(vlSelf->mptw_top__DOT__system_status_stalled[2]));
        bufp->chgBit(oldp+3,(vlSelf->mptw_top__DOT__system_status_stalled[3]));
        bufp->chgBit(oldp+4,(vlSelf->mptw_top__DOT__system_status_stalled[4]));
        bufp->chgBit(oldp+5,(vlSelf->mptw_top__DOT__system_status_stalled[5]));
        bufp->chgBit(oldp+6,(vlSelf->mptw_top__DOT__system_status_stalled[6]));
        bufp->chgBit(oldp+7,(vlSelf->mptw_top__DOT__system_status_stalled[7]));
        bufp->chgBit(oldp+8,(vlSelf->mptw_top__DOT__system_status_stalled[8]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+9,(vlSelf->mptw_top__DOT__input_transaction),280);
        bufp->chgCData(oldp+18,(vlSelf->mptw_top__DOT__control_unit_u__DOT__flush_type),2);
        bufp->chgWData(oldp+19,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__output_transaction),280);
        bufp->chgQData(oldp+28,((((QData)((IData)(vlSelf->mptw_top__DOT__input_transaction[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__input_transaction[0U])))),64);
        bufp->chgQData(oldp+30,((((QData)((IData)(vlSelf->mptw_top__DOT__input_transaction[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->mptw_top__DOT__input_transaction[2U])))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0x2dU]))) {
        bufp->chgBit(oldp+32,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
        bufp->chgBit(oldp+33,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
        bufp->chgBit(oldp+34,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
        bufp->chgWData(oldp+35,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
        bufp->chgBit(oldp+44,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
        bufp->chgWData(oldp+45,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+54,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xbU]) 
                     | vlSelf->__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+55,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
        bufp->chgBit(oldp+56,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
        bufp->chgBit(oldp+57,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
        bufp->chgWData(oldp+58,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
        bufp->chgBit(oldp+67,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
        bufp->chgWData(oldp+68,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+77,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xcU]) 
                     | vlSelf->__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+78,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
        bufp->chgBit(oldp+79,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
        bufp->chgBit(oldp+80,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
        bufp->chgWData(oldp+81,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
        bufp->chgBit(oldp+90,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
        bufp->chgWData(oldp+91,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+100,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xdU]) 
                     | vlSelf->__Vm_traceActivity[0x33U]))) {
        bufp->chgBit(oldp+101,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_ready));
        bufp->chgBit(oldp+102,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy));
        bufp->chgBit(oldp+103,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__busy));
        bufp->chgWData(oldp+104,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_data),280);
        bufp->chgBit(oldp+113,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__next_state));
        bufp->chgWData(oldp+114,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+123,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0x19U]) 
                     | vlSelf->__Vm_traceActivity[0x3aU]))) {
        bufp->chgWData(oldp+124,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0x1aU]) 
                     | vlSelf->__Vm_traceActivity[0x38U]))) {
        bufp->chgWData(oldp+133,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0x1bU]) 
                     | vlSelf->__Vm_traceActivity[0x3cU]))) {
        bufp->chgWData(oldp+142,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0x1cU]) 
                     | vlSelf->__Vm_traceActivity[0x3eU]))) {
        bufp->chgWData(oldp+151,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x24U]))) {
        bufp->chgWData(oldp+160,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
        bufp->chgWData(oldp+169,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
        bufp->chgWData(oldp+178,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
        bufp->chgWData(oldp+187,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
        bufp->chgWData(oldp+196,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellinp__valid_fifo_u__data_i),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x2bU]))) {
        bufp->chgBit(oldp+205,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready));
        bufp->chgBit(oldp+206,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy));
        bufp->chgBit(oldp+207,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state));
        bufp->chgWData(oldp+208,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
        bufp->chgCData(oldp+218,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+221,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+222,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
        bufp->chgCData(oldp+503,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
        bufp->chgBit(oldp+504,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+506,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+507,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
        bufp->chgCData(oldp+788,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
        bufp->chgBit(oldp+789,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+791,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+792,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+1077,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_push));
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_d),2);
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_grant_fifo_pop));
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+1362,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[0x16U]) 
                     | vlSelf->__Vm_traceActivity[0x2cU]))) {
        bufp->chgWData(oldp+1642,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data),280);
        bufp->chgWData(oldp+1651,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction),280);
        bufp->chgBit(oldp+1660,((0U != (((QData)((IData)(
                                                         vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                              >> 4U))))));
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid));
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
        bufp->chgWData(oldp+1663,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
        bufp->chgBit(oldp+1672,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
        bufp->chgBit(oldp+1673,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
        bufp->chgCData(oldp+1675,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
        bufp->chgCData(oldp+1677,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+1678,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
        bufp->chgBit(oldp+1679,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+1680,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+1681,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[0x1fU]) 
                     | vlSelf->__Vm_traceActivity[0x37U]))) {
        bufp->chgBit(oldp+1961,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready));
        bufp->chgBit(oldp+1962,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy));
        bufp->chgBit(oldp+1963,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state));
        bufp->chgWData(oldp+1964,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d),280);
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
        bufp->chgCData(oldp+1974,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
        bufp->chgCData(oldp+1975,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+1976,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[3U] 
                       | vlSelf->__Vm_traceActivity
                       [0x12U]) | vlSelf->__Vm_traceActivity
                      [0x23U]) | vlSelf->__Vm_traceActivity
                     [0x2eU]))) {
        bufp->chgWData(oldp+1977,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
        bufp->chgQData(oldp+2489,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
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
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | (((0U 
                                                == 
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
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                    : (((QData)((IData)(
                                                        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                           >> 4U))))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[0x12U]) 
                     | vlSelf->__Vm_traceActivity[0x2eU]))) {
        bufp->chgWData(oldp+2491,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
        bufp->chgWData(oldp+2500,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction),280);
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
        bufp->chgBit(oldp+2510,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
        bufp->chgWData(oldp+2511,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
        bufp->chgWData(oldp+2520,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
        bufp->chgCData(oldp+2525,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
        bufp->chgBit(oldp+2526,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
        bufp->chgBit(oldp+2527,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
        bufp->chgCData(oldp+2528,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
        bufp->chgWData(oldp+2529,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
        bufp->chgIData(oldp+2533,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+2534,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+2535,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
        bufp->chgWData(oldp+2536,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
        bufp->chgBit(oldp+2545,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
        bufp->chgBit(oldp+2546,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
        bufp->chgCData(oldp+2548,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
        bufp->chgCData(oldp+2549,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
        bufp->chgCData(oldp+2550,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+2551,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+2553,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+2554,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[0x1dU]) 
                     | vlSelf->__Vm_traceActivity[0x39U]))) {
        bufp->chgBit(oldp+2834,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
        bufp->chgBit(oldp+2835,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
        bufp->chgBit(oldp+2836,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
        bufp->chgWData(oldp+2837,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+2846,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
        bufp->chgCData(oldp+2847,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
        bufp->chgCData(oldp+2848,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+2849,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[4U] 
                       | vlSelf->__Vm_traceActivity
                       [0x13U]) | vlSelf->__Vm_traceActivity
                      [0x23U]) | vlSelf->__Vm_traceActivity
                     [0x30U]))) {
        bufp->chgWData(oldp+2850,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
        bufp->chgQData(oldp+3362,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
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
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | (((0U 
                                                == 
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
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                    : (((QData)((IData)(
                                                        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                           >> 4U))))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[0x13U]) 
                     | vlSelf->__Vm_traceActivity[0x30U]))) {
        bufp->chgWData(oldp+3364,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
        bufp->chgWData(oldp+3373,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction),280);
        bufp->chgBit(oldp+3382,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
        bufp->chgBit(oldp+3383,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
        bufp->chgWData(oldp+3384,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
        bufp->chgWData(oldp+3393,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
        bufp->chgCData(oldp+3398,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
        bufp->chgBit(oldp+3399,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
        bufp->chgBit(oldp+3400,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
        bufp->chgCData(oldp+3401,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
        bufp->chgWData(oldp+3402,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
        bufp->chgIData(oldp+3406,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+3407,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+3408,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
        bufp->chgWData(oldp+3409,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
        bufp->chgBit(oldp+3418,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
        bufp->chgBit(oldp+3419,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
        bufp->chgBit(oldp+3420,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
        bufp->chgCData(oldp+3421,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
        bufp->chgCData(oldp+3422,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
        bufp->chgCData(oldp+3423,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+3424,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
        bufp->chgBit(oldp+3425,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+3426,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+3427,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[0x20U]) 
                     | vlSelf->__Vm_traceActivity[0x3bU]))) {
        bufp->chgBit(oldp+3707,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
        bufp->chgBit(oldp+3708,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
        bufp->chgBit(oldp+3709,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
        bufp->chgWData(oldp+3710,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+3719,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
        bufp->chgCData(oldp+3720,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
        bufp->chgCData(oldp+3721,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+3722,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[5U] 
                       | vlSelf->__Vm_traceActivity
                       [0x14U]) | vlSelf->__Vm_traceActivity
                      [0x23U]) | vlSelf->__Vm_traceActivity
                     [0x32U]))) {
        bufp->chgWData(oldp+3723,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
        bufp->chgQData(oldp+4235,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
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
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | (((0U 
                                                == 
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
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                    : (((QData)((IData)(
                                                        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                           >> 4U))))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[5U] 
                      | vlSelf->__Vm_traceActivity[0x14U]) 
                     | vlSelf->__Vm_traceActivity[0x32U]))) {
        bufp->chgWData(oldp+4237,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
        bufp->chgWData(oldp+4246,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction),280);
        bufp->chgBit(oldp+4255,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
        bufp->chgBit(oldp+4256,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
        bufp->chgWData(oldp+4257,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
        bufp->chgWData(oldp+4266,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
        bufp->chgCData(oldp+4271,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
        bufp->chgBit(oldp+4272,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
        bufp->chgBit(oldp+4273,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
        bufp->chgCData(oldp+4274,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
        bufp->chgWData(oldp+4275,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
        bufp->chgIData(oldp+4279,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+4280,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+4281,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
        bufp->chgWData(oldp+4282,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
        bufp->chgBit(oldp+4291,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
        bufp->chgBit(oldp+4292,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
        bufp->chgBit(oldp+4293,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
        bufp->chgCData(oldp+4294,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
        bufp->chgCData(oldp+4295,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
        bufp->chgCData(oldp+4296,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+4297,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
        bufp->chgBit(oldp+4298,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+4299,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+4300,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[5U] 
                      | vlSelf->__Vm_traceActivity[0x21U]) 
                     | vlSelf->__Vm_traceActivity[0x3dU]))) {
        bufp->chgBit(oldp+4580,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
        bufp->chgBit(oldp+4581,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
        bufp->chgBit(oldp+4582,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
        bufp->chgWData(oldp+4583,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+4592,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
        bufp->chgCData(oldp+4593,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
        bufp->chgCData(oldp+4594,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+4595,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[6U] 
                       | vlSelf->__Vm_traceActivity
                       [0x15U]) | vlSelf->__Vm_traceActivity
                      [0x23U]) | vlSelf->__Vm_traceActivity
                     [0x34U]))) {
        bufp->chgWData(oldp+4596,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_d),16384);
        bufp->chgQData(oldp+5108,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen)
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
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U)))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))) 
                                           | (((0U 
                                                == 
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
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(14,14,32, (IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr), 7U))))))
                                    : (((QData)((IData)(
                                                        vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U])) 
                                           >> 4U))))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[6U] 
                      | vlSelf->__Vm_traceActivity[0x15U]) 
                     | vlSelf->__Vm_traceActivity[0x34U]))) {
        bufp->chgWData(oldp+5110,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data),280);
        bufp->chgWData(oldp+5119,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction),280);
        bufp->chgBit(oldp+5128,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid));
        bufp->chgBit(oldp+5129,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_valid));
        bufp->chgWData(oldp+5130,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_data),280);
        bufp->chgWData(oldp+5139,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask),129);
        bufp->chgCData(oldp+5144,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_addr),8);
        bufp->chgBit(oldp+5145,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen));
        bufp->chgBit(oldp+5146,(((IData)(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_match_seen) 
                                 & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_match_mask[4U])));
        bufp->chgCData(oldp+5147,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_d),7);
        bufp->chgWData(oldp+5148,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_next_data),128);
        bufp->chgIData(oldp+5152,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_address__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+5153,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_lookup_match__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5154,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__to_output_bus_valid));
        bufp->chgWData(oldp+5155,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master),280);
        bufp->chgBit(oldp+5164,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_do_walk));
        bufp->chgBit(oldp+5165,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_pop));
        bufp->chgBit(oldp+5166,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_push));
        bufp->chgCData(oldp+5167,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_d),6);
        bufp->chgCData(oldp+5168,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_d),2);
        bufp->chgCData(oldp+5169,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+5170,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_n),6);
        bufp->chgBit(oldp+5171,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+5172,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_n),5);
        bufp->chgWData(oldp+5173,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_n),8960);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[6U] 
                      | vlSelf->__Vm_traceActivity[0x22U]) 
                     | vlSelf->__Vm_traceActivity[0x3fU]))) {
        bufp->chgBit(oldp+5453,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
        bufp->chgBit(oldp+5454,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy));
        bufp->chgBit(oldp+5455,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
        bufp->chgWData(oldp+5456,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+5465,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_pop));
        bufp->chgCData(oldp+5466,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_d),6);
        bufp->chgCData(oldp+5467,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_n),5);
        bufp->chgCData(oldp+5468,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_n),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[7U] 
                       | vlSelf->__Vm_traceActivity
                       [0x17U]) | vlSelf->__Vm_traceActivity
                      [0x23U]) | vlSelf->__Vm_traceActivity
                     [0x36U]))) {
        bufp->chgWData(oldp+5469,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_transaction),280);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[7U] 
                      | vlSelf->__Vm_traceActivity[0x17U]) 
                     | vlSelf->__Vm_traceActivity[0x36U]))) {
        bufp->chgBit(oldp+5478,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready));
        bufp->chgBit(oldp+5479,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready));
        bufp->chgBit(oldp+5480,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__from_issue_bus_ready));
        bufp->chgCData(oldp+5481,(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d),3);
        bufp->chgBit(oldp+5482,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy));
        bufp->chgBit(oldp+5483,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state));
        bufp->chgWData(oldp+5484,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+5493,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy));
        bufp->chgBit(oldp+5494,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state));
        bufp->chgWData(oldp+5495,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d),280);
        bufp->chgCData(oldp+5504,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_d),7);
        bufp->chgBit(oldp+5505,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_push));
        bufp->chgSData(oldp+5506,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_data_in),12);
        bufp->chgBit(oldp+5507,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_ready));
        bufp->chgBit(oldp+5508,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_valid));
        bufp->chgWData(oldp+5509,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_issue_bus_data),280);
        bufp->chgBit(oldp+5518,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__busy));
        bufp->chgBit(oldp+5519,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state));
        bufp->chgWData(oldp+5520,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
        bufp->chgBit(oldp+5529,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock));
        bufp->chgCData(oldp+5530,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n),6);
        bufp->chgWData(oldp+5531,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n),768);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[8U] 
                       | vlSelf->__Vm_traceActivity
                       [0x18U]) | vlSelf->__Vm_traceActivity
                      [0x35U]) | vlSelf->__Vm_traceActivity
                     [0x40U]))) {
        bufp->chgWData(oldp+5555,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                                  [0U]),17920);
        bufp->chgWData(oldp+6115,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                                  [1U]),17920);
        bufp->chgWData(oldp+6675,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                                  [2U]),17920);
        bufp->chgWData(oldp+7235,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                                  [3U]),17920);
        bufp->chgWData(oldp+7795,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_d
                                  [4U]),17920);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+8355,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[0]));
        bufp->chgBit(oldp+8356,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[1]));
        bufp->chgBit(oldp+8357,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[2]));
        bufp->chgBit(oldp+8358,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[3]));
        bufp->chgBit(oldp+8359,(vlSelf->mptw_top__DOT__walking_to_retire_data_ready[4]));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x35U]))) {
        bufp->chgCData(oldp+8360,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[0]),6);
        bufp->chgCData(oldp+8361,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[1]),6);
        bufp->chgCData(oldp+8362,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[2]),6);
        bufp->chgCData(oldp+8363,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[3]),6);
        bufp->chgCData(oldp+8364,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_raddr[4]),6);
        bufp->chgWData(oldp+8365,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                                  [0U]),280);
        bufp->chgWData(oldp+8374,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                                  [1U]),280);
        bufp->chgWData(oldp+8383,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                                  [2U]),280);
        bufp->chgWData(oldp+8392,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                                  [3U]),280);
        bufp->chgWData(oldp+8401,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_rdata
                                  [4U]),280);
        bufp->chgWData(oldp+8410,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction),280);
        bufp->chgCData(oldp+8419,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_completed_mask),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+8420,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                       >> 8U))));
        bufp->chgWData(oldp+8421,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xeU] 
                     | vlSelf->__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+8430,((1U & (vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
                                       >> 8U))));
        bufp->chgWData(oldp+8431,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xfU] 
                     | vlSelf->__Vm_traceActivity[0x27U]))) {
        bufp->chgBit(oldp+8440,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                       >> 8U))));
        bufp->chgWData(oldp+8441,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x10U] 
                     | vlSelf->__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+8450,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                       >> 8U))));
        bufp->chgWData(oldp+8451,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x11U] 
                     | vlSelf->__Vm_traceActivity[0x29U]))) {
        bufp->chgBit(oldp+8460,((1U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                                       >> 8U))));
        bufp->chgWData(oldp+8461,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x18U] 
                     | vlSelf->__Vm_traceActivity[0x40U]))) {
        bufp->chgBit(oldp+8470,((1U & (~ ((IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear) 
                                          >> 4U)))));
        bufp->chgBit(oldp+8471,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy));
        bufp->chgBit(oldp+8472,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state));
        bufp->chgCData(oldp+8473,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[0]),6);
        bufp->chgCData(oldp+8474,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[1]),6);
        bufp->chgCData(oldp+8475,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[2]),6);
        bufp->chgCData(oldp+8476,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[3]),6);
        bufp->chgCData(oldp+8477,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_waddr[4]),6);
        bufp->chgWData(oldp+8478,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                                  [0U]),280);
        bufp->chgWData(oldp+8487,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                                  [1U]),280);
        bufp->chgWData(oldp+8496,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                                  [2U]),280);
        bufp->chgWData(oldp+8505,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                                  [3U]),280);
        bufp->chgWData(oldp+8514,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_wdata
                                  [4U]),280);
        bufp->chgCData(oldp+8523,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_clear),5);
        bufp->chgBit(oldp+8524,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_ready));
        bufp->chgBit(oldp+8525,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_valid));
        bufp->chgWData(oldp+8526,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__to_commit_bus_data),280);
        bufp->chgBit(oldp+8535,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__busy));
        bufp->chgBit(oldp+8536,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__next_state));
        bufp->chgWData(oldp+8537,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1eU] 
                     | vlSelf->__Vm_traceActivity[0x41U]))) {
        bufp->chgWData(oldp+8546,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d),280);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
        bufp->chgWData(oldp+8555,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q),280);
        bufp->chgWData(oldp+8564,(vlSelf->mptw_top__DOT__walking_output_transaction
                                  [0U]),280);
        bufp->chgWData(oldp+8573,(vlSelf->mptw_top__DOT__walking_output_transaction
                                  [1U]),280);
        bufp->chgWData(oldp+8582,(vlSelf->mptw_top__DOT__walking_output_transaction
                                  [2U]),280);
        bufp->chgWData(oldp+8591,(vlSelf->mptw_top__DOT__walking_output_transaction
                                  [3U]),280);
        bufp->chgBit(oldp+8600,(vlSelf->mptw_top__DOT__retire_demux_select[0]));
        bufp->chgBit(oldp+8601,(vlSelf->mptw_top__DOT__retire_demux_select[1]));
        bufp->chgBit(oldp+8602,(vlSelf->mptw_top__DOT__retire_demux_select[2]));
        bufp->chgBit(oldp+8603,(vlSelf->mptw_top__DOT__retire_demux_select[3]));
        bufp->chgBit(oldp+8604,(vlSelf->mptw_top__DOT__fetch_to_issue_data_valid));
        bufp->chgWData(oldp+8605,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+8614,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid));
        bufp->chgWData(oldp+8615,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+8624,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid));
        bufp->chgWData(oldp+8625,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+8634,(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_valid));
        bufp->chgBit(oldp+8635,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[0]));
        bufp->chgBit(oldp+8636,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[1]));
        bufp->chgBit(oldp+8637,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[2]));
        bufp->chgBit(oldp+8638,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[3]));
        bufp->chgBit(oldp+8639,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid[4]));
        bufp->chgWData(oldp+8640,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[0]),280);
        bufp->chgWData(oldp+8649,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[1]),280);
        bufp->chgWData(oldp+8658,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[2]),280);
        bufp->chgWData(oldp+8667,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[3]),280);
        bufp->chgWData(oldp+8676,(vlSelf->mptw_top__DOT__to_walking_stage_data_data[4]),280);
        bufp->chgBit(oldp+8685,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[0]));
        bufp->chgBit(oldp+8686,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[1]));
        bufp->chgBit(oldp+8687,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[2]));
        bufp->chgBit(oldp+8688,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[3]));
        bufp->chgBit(oldp+8689,(vlSelf->mptw_top__DOT__walking_to_demux_data_valid[4]));
        bufp->chgWData(oldp+8690,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[0]),280);
        bufp->chgWData(oldp+8699,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[1]),280);
        bufp->chgWData(oldp+8708,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[2]),280);
        bufp->chgWData(oldp+8717,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[3]),280);
        bufp->chgWData(oldp+8726,(vlSelf->mptw_top__DOT__walking_to_demux_data_data[4]),280);
        bufp->chgBit(oldp+8735,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[0]));
        bufp->chgBit(oldp+8736,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[1]));
        bufp->chgBit(oldp+8737,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[2]));
        bufp->chgBit(oldp+8738,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[3]));
        bufp->chgBit(oldp+8739,(vlSelf->mptw_top__DOT__walking_to_retire_data_valid[4]));
        bufp->chgWData(oldp+8740,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[0]),280);
        bufp->chgWData(oldp+8749,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[1]),280);
        bufp->chgWData(oldp+8758,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[2]),280);
        bufp->chgWData(oldp+8767,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[3]),280);
        bufp->chgWData(oldp+8776,(vlSelf->mptw_top__DOT__walking_to_retire_data_data[4]),280);
        bufp->chgBit(oldp+8785,(vlSelf->mptw_top__DOT__backend_to_issue_data_valid));
        bufp->chgWData(oldp+8786,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+8795,(vlSelf->mptw_top__DOT__retire_to_commit_data_valid));
        bufp->chgWData(oldp+8796,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+8805,(vlSelf->mptw_top__DOT__system_control_flush[0]),2);
        bufp->chgCData(oldp+8806,(vlSelf->mptw_top__DOT__system_control_flush[1]),2);
        bufp->chgCData(oldp+8807,(vlSelf->mptw_top__DOT__system_control_flush[2]),2);
        bufp->chgCData(oldp+8808,(vlSelf->mptw_top__DOT__system_control_flush[3]),2);
        bufp->chgCData(oldp+8809,(vlSelf->mptw_top__DOT__system_control_flush[4]),2);
        bufp->chgCData(oldp+8810,(vlSelf->mptw_top__DOT__system_control_flush[5]),2);
        bufp->chgCData(oldp+8811,(vlSelf->mptw_top__DOT__system_control_flush[6]),2);
        bufp->chgCData(oldp+8812,(vlSelf->mptw_top__DOT__system_control_flush[7]),2);
        bufp->chgCData(oldp+8813,(vlSelf->mptw_top__DOT__system_control_flush[8]),2);
        bufp->chgBit(oldp+8814,(vlSelf->mptw_top__DOT__issue_stage_slave_valid[0]));
        bufp->chgBit(oldp+8815,(vlSelf->mptw_top__DOT__issue_stage_slave_valid[1]));
        bufp->chgWData(oldp+8816,(vlSelf->mptw_top__DOT__issue_stage_slave_data[0]),280);
        bufp->chgWData(oldp+8825,(vlSelf->mptw_top__DOT__issue_stage_slave_data[1]),280);
        bufp->chgBit(oldp+8834,(vlSelf->mptw_top__DOT__issue_stage_master_valid[0]));
        bufp->chgBit(oldp+8835,(vlSelf->mptw_top__DOT__issue_stage_master_valid[1]));
        bufp->chgWData(oldp+8836,(vlSelf->mptw_top__DOT__issue_stage_master_data[0]),280);
        bufp->chgWData(oldp+8845,(vlSelf->mptw_top__DOT__issue_stage_master_data[1]),280);
        bufp->chgCData(oldp+8854,(vlSelf->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q),3);
        bufp->chgIData(oldp+8855,(vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_q),18);
        bufp->chgIData(oldp+8856,(vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_q),18);
        bufp->chgIData(oldp+8857,(vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+8858,(vlSelf->mptw_top__DOT__system_control_flush
                                  [0U]),2);
        bufp->chgCData(oldp+8859,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                    [0U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+8860,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [0U])));
        bufp->chgBit(oldp+8861,(vlSelf->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state));
        bufp->chgBit(oldp+8862,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                [0U]));
        bufp->chgWData(oldp+8863,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                  [0U]),280);
        bufp->chgBit(oldp+8872,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid));
        bufp->chgWData(oldp+8873,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+8882,(vlSelf->mptw_top__DOT__system_control_flush
                                  [3U]),2);
        bufp->chgBit(oldp+8883,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
        bufp->chgWData(oldp+8884,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+8893,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
        bufp->chgWData(oldp+8894,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+8903,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                    [3U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+8904,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
        bufp->chgWData(oldp+8905,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
        bufp->chgCData(oldp+9417,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
        bufp->chgBit(oldp+9418,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [3U])));
        bufp->chgBit(oldp+9419,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
        bufp->chgQData(oldp+9420,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                    [0U][8U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                  [0U][7U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                    [0U][6U])) 
                                                    >> 4U)))),64);
        bufp->chgCData(oldp+9422,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [0U][1U] >> 0x1cU)),4);
        bufp->chgQData(oldp+9423,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                    [0U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [0U][0U])))),64);
        bufp->chgQData(oldp+9425,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                    [0U][3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                [0U][2U])))),64);
        bufp->chgCData(oldp+9427,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [0U][4U])),2);
        bufp->chgCData(oldp+9428,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
        bufp->chgBit(oldp+9429,((2U == (vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                        [0U][1U] >> 0x1cU))));
        bufp->chgSData(oldp+9430,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
        bufp->chgQData(oldp+9431,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
        bufp->chgQData(oldp+9433,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
        bufp->chgCData(oldp+9435,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
        bufp->chgBit(oldp+9436,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
        bufp->chgBit(oldp+9437,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
        bufp->chgBit(oldp+9438,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid));
        bufp->chgWData(oldp+9439,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+9448,(vlSelf->mptw_top__DOT__system_control_flush
                                  [4U]),2);
        bufp->chgBit(oldp+9449,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
        bufp->chgWData(oldp+9450,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+9459,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
        bufp->chgWData(oldp+9460,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+9469,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                    [4U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+9470,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
        bufp->chgWData(oldp+9471,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
        bufp->chgCData(oldp+9983,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
        bufp->chgBit(oldp+9984,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                 [4U])));
        bufp->chgBit(oldp+9985,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
        bufp->chgQData(oldp+9986,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U])) 
                                                    >> 4U)))),64);
        bufp->chgCData(oldp+9988,((vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                   >> 0x1cU)),4);
        bufp->chgQData(oldp+9989,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U])))),64);
        bufp->chgQData(oldp+9991,((((QData)((IData)(
                                                    vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U])))),64);
        bufp->chgCData(oldp+9993,((3U & vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U])),2);
        bufp->chgCData(oldp+9994,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
        bufp->chgBit(oldp+9995,((1U == (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                        >> 0x1cU))));
        bufp->chgSData(oldp+9996,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
        bufp->chgQData(oldp+9997,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
        bufp->chgQData(oldp+9999,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
        bufp->chgCData(oldp+10001,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
        bufp->chgBit(oldp+10002,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
        bufp->chgBit(oldp+10003,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
        bufp->chgBit(oldp+10004,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [2U]));
        bufp->chgWData(oldp+10005,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [2U]),280);
        bufp->chgBit(oldp+10014,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid));
        bufp->chgWData(oldp+10015,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+10024,(vlSelf->mptw_top__DOT__system_control_flush
                                   [5U]),2);
        bufp->chgBit(oldp+10025,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
        bufp->chgWData(oldp+10026,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+10035,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
        bufp->chgWData(oldp+10036,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+10045,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                     [5U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+10046,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
        bufp->chgWData(oldp+10047,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
        bufp->chgCData(oldp+10559,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
        bufp->chgBit(oldp+10560,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [5U])));
        bufp->chgBit(oldp+10561,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
        bufp->chgQData(oldp+10562,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [2U][8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                   [2U][7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                     [2U][6U])) 
                                                     >> 4U)))),64);
        bufp->chgCData(oldp+10564,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][1U] >> 0x1cU)),4);
        bufp->chgQData(oldp+10565,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [2U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [2U][0U])))),64);
        bufp->chgQData(oldp+10567,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [2U][3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [2U][2U])))),64);
        bufp->chgCData(oldp+10569,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][4U])),2);
        bufp->chgCData(oldp+10570,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
        bufp->chgSData(oldp+10571,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
        bufp->chgQData(oldp+10572,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
        bufp->chgQData(oldp+10574,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
        bufp->chgCData(oldp+10576,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
        bufp->chgBit(oldp+10577,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
        bufp->chgBit(oldp+10578,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
        bufp->chgBit(oldp+10579,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [3U]));
        bufp->chgWData(oldp+10580,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [3U]),280);
        bufp->chgBit(oldp+10589,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid));
        bufp->chgWData(oldp+10590,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+10599,(vlSelf->mptw_top__DOT__system_control_flush
                                   [6U]),2);
        bufp->chgBit(oldp+10600,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid));
        bufp->chgWData(oldp+10601,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
        bufp->chgBit(oldp+10610,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid));
        bufp->chgWData(oldp+10611,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+10620,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                     [6U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+10621,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__lookup_enable));
        bufp->chgWData(oldp+10622,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_mem_q),16384);
        bufp->chgCData(oldp+11134,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__next_victim_line_q),7);
        bufp->chgBit(oldp+11135,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [6U])));
        bufp->chgBit(oldp+11136,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__current_state));
        bufp->chgQData(oldp+11137,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [3U][8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                   [3U][7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                     [3U][6U])) 
                                                     >> 4U)))),64);
        bufp->chgCData(oldp+11139,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][1U] >> 0x1cU)),4);
        bufp->chgQData(oldp+11140,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [3U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [3U][0U])))),64);
        bufp->chgQData(oldp+11142,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [3U][3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [3U][2U])))),64);
        bufp->chgCData(oldp+11144,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][4U])),2);
        bufp->chgCData(oldp+11145,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions),3);
        bufp->chgSData(oldp+11146,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number),9);
        bufp->chgQData(oldp+11147,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address),64);
        bufp->chgQData(oldp+11149,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr),64);
        bufp->chgCData(oldp+11151,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset),4);
        bufp->chgBit(oldp+11152,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state));
        bufp->chgBit(oldp+11153,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
        bufp->chgCData(oldp+11154,(vlSelf->mptw_top__DOT__system_control_flush
                                   [1U]),2);
        bufp->chgCData(oldp+11155,((((3U == ((0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [1U])
                                              ? 3U : 0U)) 
                                     & (3U == ((0U 
                                                != 
                                                vlSelf->mptw_top__DOT__system_control_flush
                                                [1U])
                                                ? 3U
                                                : 0U)))
                                     ? 3U : (((0U != 
                                               ((0U 
                                                 != 
                                                 vlSelf->mptw_top__DOT__system_control_flush
                                                 [1U])
                                                 ? 3U
                                                 : 0U)) 
                                              | (0U 
                                                 != 
                                                 ((0U 
                                                   != 
                                                   vlSelf->mptw_top__DOT__system_control_flush
                                                   [1U])
                                                   ? 3U
                                                   : 0U)))
                                              ? 1U : 0U))),2);
        bufp->chgCData(oldp+11156,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                     [1U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+11157,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [1U])));
        bufp->chgBit(oldp+11158,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state));
        bufp->chgBit(oldp+11159,(vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state));
        bufp->chgBit(oldp+11160,(vlSelf->mptw_top__DOT__to_walking_stage_data_valid
                                 [4U]));
        bufp->chgWData(oldp+11161,(vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                   [4U]),280);
        bufp->chgBit(oldp+11170,(vlSelf->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid));
        bufp->chgWData(oldp+11171,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q),280);
        bufp->chgCData(oldp+11180,(vlSelf->mptw_top__DOT__system_control_flush
                                   [7U]),2);
        bufp->chgCData(oldp+11181,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                     [7U]) ? 3U : 0U)),2);
        bufp->chgQData(oldp+11182,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [4U][8U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                   [4U][7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                     [4U][6U])) 
                                                     >> 4U)))),64);
        bufp->chgCData(oldp+11184,((vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][1U] >> 0x1cU)),4);
        bufp->chgQData(oldp+11185,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [4U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [4U][0U])))),64);
        bufp->chgQData(oldp+11187,((((QData)((IData)(
                                                     vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                     [4U][3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                                                 [4U][2U])))),64);
        bufp->chgCData(oldp+11189,((3U & vlSelf->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][4U])),2);
        bufp->chgCData(oldp+11190,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions),3);
        bufp->chgSData(oldp+11191,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number),9);
        bufp->chgQData(oldp+11192,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address),64);
        bufp->chgQData(oldp+11194,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr),64);
        bufp->chgCData(oldp+11196,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset),4);
        bufp->chgBit(oldp+11197,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [7U])));
        bufp->chgBit(oldp+11198,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state));
        bufp->chgCData(oldp+11199,(vlSelf->mptw_top__DOT__system_control_flush
                                   [2U]),2);
        bufp->chgCData(oldp+11200,(((0U != vlSelf->mptw_top__DOT__system_control_flush
                                     [2U]) ? 3U : 0U)),2);
        bufp->chgBit(oldp+11201,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [2U])));
        bufp->chgBit(oldp+11202,(vlSelf->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state));
        bufp->chgCData(oldp+11203,(vlSelf->mptw_top__DOT__system_control_flush
                                   [8U]),2);
        bufp->chgCData(oldp+11204,(vlSelf->mptw_top__DOT____Vcellout__retire_stage_gen__DOT__retire_stage_u__stage_status_flushed),2);
        bufp->chgWData(oldp+11205,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                   [0U]),280);
        bufp->chgWData(oldp+11214,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                   [1U]),280);
        bufp->chgWData(oldp+11223,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                   [2U]),280);
        bufp->chgWData(oldp+11232,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                   [3U]),280);
        bufp->chgWData(oldp+11241,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__retire_transaction_bus
                                   [4U]),280);
        bufp->chgCData(oldp+11250,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_q),2);
        bufp->chgCData(oldp+11251,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_next_valid_id_q),7);
        bufp->chgWData(oldp+11252,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                   [0U]),17920);
        bufp->chgWData(oldp+11812,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                   [1U]),17920);
        bufp->chgWData(oldp+12372,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                   [2U]),17920);
        bufp->chgWData(oldp+12932,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                   [3U]),17920);
        bufp->chgWData(oldp+13492,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_memory_q
                                   [4U]),17920);
        bufp->chgCData(oldp+14052,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_q),2);
        bufp->chgBit(oldp+14053,((0U != vlSelf->mptw_top__DOT__system_control_flush
                                  [8U])));
        bufp->chgCData(oldp+14054,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_q),2);
        bufp->chgCData(oldp+14055,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_status_d),2);
        bufp->chgBit(oldp+14056,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__commit_stage_register_generate__DOT__issue_reg__DOT__current_state));
        bufp->chgBit(oldp+14057,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state));
        bufp->chgIData(oldp+14058,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+14059,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+14060,((0U == (3U & (vlSelf->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                                               >> 2U)))));
        bufp->chgCData(oldp+14061,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
        bufp->chgCData(oldp+14062,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
        bufp->chgCData(oldp+14063,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
        bufp->chgCData(oldp+14064,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
        bufp->chgCData(oldp+14065,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
        bufp->chgBit(oldp+14066,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U)))));
        bufp->chgCData(oldp+14067,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
        bufp->chgCData(oldp+14068,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
        bufp->chgCData(oldp+14069,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
        bufp->chgCData(oldp+14070,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
        bufp->chgCData(oldp+14071,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
        bufp->chgBit(oldp+14072,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U)))));
        bufp->chgCData(oldp+14073,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
        bufp->chgCData(oldp+14074,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
        bufp->chgCData(oldp+14075,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
        bufp->chgCData(oldp+14076,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
        bufp->chgCData(oldp+14077,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
        bufp->chgBit(oldp+14078,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U)))));
        bufp->chgCData(oldp+14079,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
        bufp->chgCData(oldp+14080,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
        bufp->chgCData(oldp+14081,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
        bufp->chgCData(oldp+14082,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
        bufp->chgCData(oldp+14083,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
        bufp->chgBit(oldp+14084,((0U == (3U & (vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U)))));
        bufp->chgCData(oldp+14085,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_counter_q),6);
        bufp->chgCData(oldp+14086,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__spec_transaction_cnt_q),6);
        bufp->chgCData(oldp+14087,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_status_q),2);
        bufp->chgCData(oldp+14088,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_status_q),2);
        bufp->chgCData(oldp+14089,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_q),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x23U] 
                     | vlSelf->__Vm_traceActivity[0x2bU]))) {
        bufp->chgCData(oldp+14090,(vlSelf->mptw_top__DOT__system_status_flushed[0]),2);
        bufp->chgCData(oldp+14091,(vlSelf->mptw_top__DOT__system_status_flushed[1]),2);
        bufp->chgCData(oldp+14092,(vlSelf->mptw_top__DOT__system_status_flushed[2]),2);
        bufp->chgCData(oldp+14093,(vlSelf->mptw_top__DOT__system_status_flushed[3]),2);
        bufp->chgCData(oldp+14094,(vlSelf->mptw_top__DOT__system_status_flushed[4]),2);
        bufp->chgCData(oldp+14095,(vlSelf->mptw_top__DOT__system_status_flushed[5]),2);
        bufp->chgCData(oldp+14096,(vlSelf->mptw_top__DOT__system_status_flushed[6]),2);
        bufp->chgCData(oldp+14097,(vlSelf->mptw_top__DOT__system_status_flushed[7]),2);
        bufp->chgCData(oldp+14098,(vlSelf->mptw_top__DOT__system_status_flushed[8]),2);
        bufp->chgCData(oldp+14099,((((3U == ((0U != 
                                              vlSelf->mptw_top__DOT__system_control_flush
                                              [2U])
                                              ? 3U : 0U)) 
                                     & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                                     ? 3U : (((0U != 
                                               ((0U 
                                                 != 
                                                 vlSelf->mptw_top__DOT__system_control_flush
                                                 [2U])
                                                 ? 3U
                                                 : 0U)) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                                              ? 1U : 0U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
        bufp->chgBit(oldp+14100,((0x40U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+14101,((0U == (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+14102,((0x3fU & (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))),6);
        bufp->chgSData(oldp+14103,(((0x2ffU >= (0x3ffU 
                                                & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q))))
                                     ? (0xfffU & ((
                                                   (0U 
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
        bufp->chgCData(oldp+14104,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q),6);
        bufp->chgCData(oldp+14105,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q),6);
        bufp->chgCData(oldp+14106,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q),7);
        bufp->chgWData(oldp+14107,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q),768);
        bufp->chgBit(oldp+14131,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+14132,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+14133,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+14134,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
        bufp->chgBit(oldp+14143,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+14144,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+14145,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+14146,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
        bufp->chgCData(oldp+14155,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
        bufp->chgCData(oldp+14156,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+14157,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+14158,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+14159,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
        bufp->chgCData(oldp+14439,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+14440,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+14441,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+14442,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
        bufp->chgBit(oldp+14722,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+14723,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+14724,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+14725,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
        bufp->chgBit(oldp+14734,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+14735,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+14736,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+14737,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
        bufp->chgCData(oldp+14746,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
        bufp->chgCData(oldp+14747,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+14748,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+14749,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+14750,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
        bufp->chgCData(oldp+15030,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+15031,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+15032,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+15033,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
        bufp->chgBit(oldp+15313,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+15314,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+15315,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+15316,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
        bufp->chgBit(oldp+15325,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+15326,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+15327,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+15328,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
        bufp->chgCData(oldp+15337,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
        bufp->chgCData(oldp+15338,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+15339,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+15340,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+15341,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
        bufp->chgCData(oldp+15621,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+15622,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+15623,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+15624,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
        bufp->chgBit(oldp+15904,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+15905,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+15906,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+15907,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
        bufp->chgBit(oldp+15916,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+15917,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+15918,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+15919,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
        bufp->chgCData(oldp+15928,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
        bufp->chgCData(oldp+15929,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+15930,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+15931,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+15932,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
        bufp->chgCData(oldp+16212,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+16213,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+16214,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+16215,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
        bufp->chgBit(oldp+16495,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+16496,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+16497,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+16498,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__grant_fifo_u__data_o),280);
        bufp->chgBit(oldp+16507,((0x20U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgBit(oldp+16508,((0U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))));
        bufp->chgCData(oldp+16509,((0x1fU & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q))),5);
        bufp->chgWData(oldp+16510,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vcellout__valid_fifo_u__data_o),280);
        bufp->chgCData(oldp+16519,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__stage_usage),6);
        bufp->chgCData(oldp+16520,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+16521,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+16522,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+16523,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__grant_fifo_u__DOT__mem_q),8960);
        bufp->chgCData(oldp+16803,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__read_pointer_q),5);
        bufp->chgCData(oldp+16804,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__write_pointer_q),5);
        bufp->chgCData(oldp+16805,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__status_cnt_q),6);
        bufp->chgWData(oldp+16806,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_u__DOT__mem_q),8960);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
        bufp->chgBit(oldp+17086,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__flush_fifo));
        bufp->chgBit(oldp+17087,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
        bufp->chgBit(oldp+17088,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
        bufp->chgBit(oldp+17089,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
        bufp->chgBit(oldp+17090,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
        bufp->chgBit(oldp+17091,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_fifo));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
        bufp->chgIData(oldp+17092,(vlSelf->mptw_top__DOT__control_unit_u__DOT__status_reg_d),18);
        bufp->chgCData(oldp+17093,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_flushed),2);
        bufp->chgBit(oldp+17094,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
        bufp->chgQData(oldp+17095,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
        bufp->chgCData(oldp+17097,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
        bufp->chgCData(oldp+17098,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_flushed),2);
        bufp->chgBit(oldp+17099,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
        bufp->chgQData(oldp+17100,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
        bufp->chgCData(oldp+17102,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
        bufp->chgCData(oldp+17103,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_flushed),2);
        bufp->chgBit(oldp+17104,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
        bufp->chgQData(oldp+17105,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
        bufp->chgCData(oldp+17107,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
        bufp->chgCData(oldp+17108,(vlSelf->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_flushed),2);
        bufp->chgBit(oldp+17109,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req));
        bufp->chgQData(oldp+17110,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
        bufp->chgCData(oldp+17112,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
        bufp->chgCData(oldp+17113,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed),2);
        bufp->chgCData(oldp+17114,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__eldest_transaction_id),7);
        bufp->chgBit(oldp+17115,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req));
        bufp->chgQData(oldp+17116,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr),64);
        bufp->chgCData(oldp+17118,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
        bufp->chgCData(oldp+17119,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
        bufp->chgCData(oldp+17120,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
        bufp->chgCData(oldp+17121,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
        bufp->chgCData(oldp+17122,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__flush_status_d),2);
    }
    bufp->chgBit(oldp+17123,(vlSelf->clk_i));
    bufp->chgBit(oldp+17124,(vlSelf->rst_ni));
    bufp->chgBit(oldp+17125,(vlSelf->flush_all_i));
    bufp->chgBit(oldp+17126,(vlSelf->flush_spec_i));
    bufp->chgBit(oldp+17127,(vlSelf->stall_i));
    bufp->chgBit(oldp+17128,(vlSelf->busy_o));
    bufp->chgBit(oldp+17129,(vlSelf->stalled_o));
    bufp->chgQData(oldp+17130,(vlSelf->spa_i),64);
    bufp->chgQData(oldp+17132,(vlSelf->mmpt_reg_i),64);
    bufp->chgCData(oldp+17134,(vlSelf->access_type_i),2);
    bufp->chgBit(oldp+17135,(vlSelf->speculative_i));
    bufp->chgBit(oldp+17136,(vlSelf->mptw_transaction_valid_i));
    bufp->chgBit(oldp+17137,(vlSelf->mptw_ready_o));
    bufp->chgBit(oldp+17138,(vlSelf->mptw_result_valid_o));
    bufp->chgQData(oldp+17139,(vlSelf->plb_entry_o),64);
    bufp->chgBit(oldp+17141,(vlSelf->access_page_fault_o));
    bufp->chgCData(oldp+17142,(vlSelf->format_error_o),3);
    bufp->chgBit(oldp+17143,(vlSelf->plb_master_mem_we));
    bufp->chgBit(oldp+17144,(vlSelf->plb_master_mem_gnt));
    bufp->chgBit(oldp+17145,(vlSelf->plb_master_mem_req));
    bufp->chgBit(oldp+17146,(vlSelf->plb_master_mem_error));
    bufp->chgBit(oldp+17147,(vlSelf->plb_master_mem_valid));
    bufp->chgCData(oldp+17148,(vlSelf->plb_master_mem_be),8);
    bufp->chgQData(oldp+17149,(vlSelf->plb_master_mem_addr),64);
    bufp->chgQData(oldp+17151,(vlSelf->plb_master_mem_rdata),64);
    bufp->chgQData(oldp+17153,(vlSelf->plb_master_mem_wdata),64);
    bufp->chgBit(oldp+17155,(vlSelf->walking_mem_master_mem_gnt[0]));
    bufp->chgBit(oldp+17156,(vlSelf->walking_mem_master_mem_gnt[1]));
    bufp->chgBit(oldp+17157,(vlSelf->walking_mem_master_mem_gnt[2]));
    bufp->chgBit(oldp+17158,(vlSelf->walking_mem_master_mem_gnt[3]));
    bufp->chgBit(oldp+17159,(vlSelf->walking_mem_master_mem_req[0]));
    bufp->chgBit(oldp+17160,(vlSelf->walking_mem_master_mem_req[1]));
    bufp->chgBit(oldp+17161,(vlSelf->walking_mem_master_mem_req[2]));
    bufp->chgBit(oldp+17162,(vlSelf->walking_mem_master_mem_req[3]));
    bufp->chgBit(oldp+17163,(vlSelf->walking_mem_master_mem_valid[0]));
    bufp->chgBit(oldp+17164,(vlSelf->walking_mem_master_mem_valid[1]));
    bufp->chgBit(oldp+17165,(vlSelf->walking_mem_master_mem_valid[2]));
    bufp->chgBit(oldp+17166,(vlSelf->walking_mem_master_mem_valid[3]));
    bufp->chgCData(oldp+17167,(vlSelf->walking_mem_master_mem_be[0]),8);
    bufp->chgCData(oldp+17168,(vlSelf->walking_mem_master_mem_be[1]),8);
    bufp->chgCData(oldp+17169,(vlSelf->walking_mem_master_mem_be[2]),8);
    bufp->chgCData(oldp+17170,(vlSelf->walking_mem_master_mem_be[3]),8);
    bufp->chgBit(oldp+17171,(vlSelf->walking_mem_master_mem_we[0]));
    bufp->chgBit(oldp+17172,(vlSelf->walking_mem_master_mem_we[1]));
    bufp->chgBit(oldp+17173,(vlSelf->walking_mem_master_mem_we[2]));
    bufp->chgBit(oldp+17174,(vlSelf->walking_mem_master_mem_we[3]));
    bufp->chgQData(oldp+17175,(vlSelf->walking_mem_master_mem_addr[0]),64);
    bufp->chgQData(oldp+17177,(vlSelf->walking_mem_master_mem_addr[1]),64);
    bufp->chgQData(oldp+17179,(vlSelf->walking_mem_master_mem_addr[2]),64);
    bufp->chgQData(oldp+17181,(vlSelf->walking_mem_master_mem_addr[3]),64);
    bufp->chgBit(oldp+17183,(vlSelf->walking_mem_master_mem_error[0]));
    bufp->chgBit(oldp+17184,(vlSelf->walking_mem_master_mem_error[1]));
    bufp->chgBit(oldp+17185,(vlSelf->walking_mem_master_mem_error[2]));
    bufp->chgBit(oldp+17186,(vlSelf->walking_mem_master_mem_error[3]));
    bufp->chgQData(oldp+17187,(vlSelf->walking_mem_master_mem_rdata[0]),64);
    bufp->chgQData(oldp+17189,(vlSelf->walking_mem_master_mem_rdata[1]),64);
    bufp->chgQData(oldp+17191,(vlSelf->walking_mem_master_mem_rdata[2]),64);
    bufp->chgQData(oldp+17193,(vlSelf->walking_mem_master_mem_rdata[3]),64);
    bufp->chgQData(oldp+17195,(vlSelf->walking_mem_master_mem_wdata[0]),64);
    bufp->chgQData(oldp+17197,(vlSelf->walking_mem_master_mem_wdata[1]),64);
    bufp->chgQData(oldp+17199,(vlSelf->walking_mem_master_mem_wdata[2]),64);
    bufp->chgQData(oldp+17201,(vlSelf->walking_mem_master_mem_wdata[3]),64);
    bufp->chgBit(oldp+17203,(vlSelf->mptw_top__DOT__input_to_fetch_data_valid));
    bufp->chgBit(oldp+17204,(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->chgBit(oldp+17205,(vlSelf->mptw_top__DOT__plb_lookup_to_demux_data_ready));
    bufp->chgBit(oldp+17206,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[0]));
    bufp->chgBit(oldp+17207,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[1]));
    bufp->chgBit(oldp+17208,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[2]));
    bufp->chgBit(oldp+17209,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[3]));
    bufp->chgBit(oldp+17210,(vlSelf->mptw_top__DOT__to_walking_stage_data_ready[4]));
    bufp->chgBit(oldp+17211,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[0]));
    bufp->chgBit(oldp+17212,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[1]));
    bufp->chgBit(oldp+17213,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[2]));
    bufp->chgBit(oldp+17214,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[3]));
    bufp->chgBit(oldp+17215,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready[4]));
    bufp->chgBit(oldp+17216,(vlSelf->mptw_top__DOT__system_status_busy[0]));
    bufp->chgBit(oldp+17217,(vlSelf->mptw_top__DOT__system_status_busy[1]));
    bufp->chgBit(oldp+17218,(vlSelf->mptw_top__DOT__system_status_busy[2]));
    bufp->chgBit(oldp+17219,(vlSelf->mptw_top__DOT__system_status_busy[3]));
    bufp->chgBit(oldp+17220,(vlSelf->mptw_top__DOT__system_status_busy[4]));
    bufp->chgBit(oldp+17221,(vlSelf->mptw_top__DOT__system_status_busy[5]));
    bufp->chgBit(oldp+17222,(vlSelf->mptw_top__DOT__system_status_busy[6]));
    bufp->chgBit(oldp+17223,(vlSelf->mptw_top__DOT__system_status_busy[7]));
    bufp->chgBit(oldp+17224,(vlSelf->mptw_top__DOT__system_status_busy[8]));
    bufp->chgBit(oldp+17225,(vlSelf->mptw_top__DOT__issue_stage_slave_ready[0]));
    bufp->chgBit(oldp+17226,(vlSelf->mptw_top__DOT__issue_stage_slave_ready[1]));
    bufp->chgBit(oldp+17227,(vlSelf->mptw_top__DOT__issue_stage_master_ready[0]));
    bufp->chgBit(oldp+17228,(vlSelf->mptw_top__DOT__issue_stage_master_ready[1]));
    bufp->chgIData(oldp+17229,(vlSelf->mptw_top__DOT__control_unit_u__DOT__control_reg_d),18);
    bufp->chgIData(oldp+17230,(vlSelf->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+17231,(((IData)(vlSelf->mptw_top__DOT__input_to_fetch_data_valid) 
                              & (vlSelf->mptw_top__DOT__input_transaction[8U] 
                                 >> 9U))));
    bufp->chgBit(oldp+17232,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->chgBit(oldp+17233,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->chgBit(oldp+17234,(vlSelf->walking_mem_master_mem_gnt
                             [0U]));
    bufp->chgBit(oldp+17235,(vlSelf->walking_mem_master_mem_error
                             [0U]));
    bufp->chgBit(oldp+17236,(vlSelf->walking_mem_master_mem_valid
                             [0U]));
    bufp->chgQData(oldp+17237,(vlSelf->walking_mem_master_mem_rdata
                               [0U]),64);
    bufp->chgCData(oldp+17239,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->chgBit(oldp+17240,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->chgBit(oldp+17241,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->chgBit(oldp+17242,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                             [1U]));
    bufp->chgBit(oldp+17243,(vlSelf->walking_mem_master_mem_gnt
                             [1U]));
    bufp->chgBit(oldp+17244,(vlSelf->walking_mem_master_mem_error
                             [1U]));
    bufp->chgBit(oldp+17245,(vlSelf->walking_mem_master_mem_valid
                             [1U]));
    bufp->chgQData(oldp+17246,(vlSelf->walking_mem_master_mem_rdata
                               [1U]),64);
    bufp->chgCData(oldp+17248,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->chgBit(oldp+17249,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->chgBit(oldp+17250,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->chgBit(oldp+17251,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->chgBit(oldp+17252,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                             [2U]));
    bufp->chgBit(oldp+17253,(vlSelf->walking_mem_master_mem_gnt
                             [2U]));
    bufp->chgBit(oldp+17254,(vlSelf->walking_mem_master_mem_error
                             [2U]));
    bufp->chgBit(oldp+17255,(vlSelf->walking_mem_master_mem_valid
                             [2U]));
    bufp->chgQData(oldp+17256,(vlSelf->walking_mem_master_mem_rdata
                               [2U]),64);
    bufp->chgCData(oldp+17258,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->chgBit(oldp+17259,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->chgBit(oldp+17260,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->chgBit(oldp+17261,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->chgBit(oldp+17262,(vlSelf->mptw_top__DOT__walking_to_demux_data_ready
                             [3U]));
    bufp->chgBit(oldp+17263,(vlSelf->walking_mem_master_mem_gnt
                             [3U]));
    bufp->chgBit(oldp+17264,(vlSelf->walking_mem_master_mem_error
                             [3U]));
    bufp->chgBit(oldp+17265,(vlSelf->walking_mem_master_mem_valid
                             [3U]));
    bufp->chgQData(oldp+17266,(vlSelf->walking_mem_master_mem_rdata
                               [3U]),64);
    bufp->chgCData(oldp+17268,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o),3);
    bufp->chgBit(oldp+17269,(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready));
    bufp->chgBit(oldp+17270,(vlSelf->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__to_mem_bus_valid));
    bufp->chgBit(oldp+17271,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready));
    bufp->chgCData(oldp+17272,(vlSelf->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o),3);
    bufp->chgCData(oldp+17273,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_push_status_d),2);
    bufp->chgBit(oldp+17274,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_pop));
    bufp->chgCData(oldp+17275,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_pop_status_d),2);
    bufp->chgCData(oldp+17276,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n),6);
    bufp->chgCData(oldp+17277,(vlSelf->mptw_top__DOT__retire_stage_gen__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n),7);
}

void Vmptw_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top___024root__trace_cleanup\n"); );
    // Init
    Vmptw_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmptw_top___024root*>(voidSelf);
    IData/*31:0*/ __Vilp;
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
