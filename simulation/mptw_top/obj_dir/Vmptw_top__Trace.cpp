// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmptw_top__Syms.h"


void Vmptw_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmptw_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->mptw_top__DOT__input_transaction),132);
            tracep->chgCData(oldp+5,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
            tracep->chgBit(oldp+6,(vlTOPp->mptw_top__DOT__fetch_to_pipe_ready));
            tracep->chgBit(oldp+7,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
            tracep->chgWData(oldp+8,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction),132);
            tracep->chgBit(oldp+13,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced));
            tracep->chgBit(oldp+14,(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+17,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[0U])) 
                                           >> 4U)))),64);
            tracep->chgBit(oldp+19,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state));
            tracep->chgWData(oldp+20,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d),132);
            tracep->chgBit(oldp+25,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid));
            tracep->chgBit(oldp+26,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready));
            tracep->chgBit(oldp+27,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready));
            tracep->chgBit(oldp+28,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state));
            tracep->chgWData(oldp+29,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d),132);
            tracep->chgBit(oldp+34,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state));
            tracep->chgWData(oldp+35,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d),132);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+40,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),132);
            tracep->chgBit(oldp+45,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
            tracep->chgWData(oldp+46,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),132);
            tracep->chgBit(oldp+51,(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
            tracep->chgBit(oldp+52,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state));
            tracep->chgBit(oldp+53,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state));
            tracep->chgWData(oldp+54,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
            tracep->chgWData(oldp+57,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q),132);
            tracep->chgBit(oldp+62,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q));
            tracep->chgBit(oldp+63,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
            tracep->chgBit(oldp+64,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_valid));
            tracep->chgBit(oldp+65,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state));
        }
        tracep->chgBit(oldp+66,(vlTOPp->clk_i));
        tracep->chgBit(oldp+67,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+68,(vlTOPp->flush_i));
        tracep->chgBit(oldp+69,(vlTOPp->mptw_enable_i));
        tracep->chgQData(oldp+70,(vlTOPp->spa_i),64);
        tracep->chgQData(oldp+72,(vlTOPp->mmpt_reg_i),64);
        tracep->chgCData(oldp+74,(vlTOPp->access_type_i),2);
        tracep->chgBit(oldp+75,(vlTOPp->mptw_transaction_valid_i));
        tracep->chgBit(oldp+76,(vlTOPp->mptw_ready_o));
        tracep->chgBit(oldp+77,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+78,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+79,(vlTOPp->plb_cache_mem_req));
        tracep->chgBit(oldp+80,(vlTOPp->plb_cache_mem_gnt));
        tracep->chgBit(oldp+81,(vlTOPp->plb_cache_mem_valid));
        tracep->chgWData(oldp+82,(vlTOPp->plb_cache_mem_addr),72);
        tracep->chgCData(oldp+85,(vlTOPp->plb_cache_mem_rdata),8);
        tracep->chgCData(oldp+86,(vlTOPp->plb_cache_mem_wdata),8);
        tracep->chgBit(oldp+87,(vlTOPp->plb_cache_mem_we));
        tracep->chgBit(oldp+88,(vlTOPp->plb_cache_mem_be));
        tracep->chgBit(oldp+89,(vlTOPp->plb_cache_mem_error));
        tracep->chgBit(oldp+90,((1U & (IData)(vlTOPp->plb_cache_mem_rdata))));
    }
}

void Vmptw_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
