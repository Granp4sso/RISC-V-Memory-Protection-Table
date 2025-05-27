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
            tracep->chgWData(oldp+0,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),132);
            tracep->chgBit(oldp+5,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__valid_q));
            tracep->chgBit(oldp+6,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall)))));
            tracep->chgWData(oldp+7,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),132);
            tracep->chgBit(oldp+12,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__valid_q));
            tracep->chgBit(oldp+13,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__first_valid_q));
            tracep->chgBit(oldp+14,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__first_valid_q));
            tracep->chgWData(oldp+15,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req),72);
            tracep->chgWData(oldp+18,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q),132);
            tracep->chgBit(oldp+23,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q));
            tracep->chgBit(oldp+24,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
            tracep->chgBit(oldp+25,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__valid_q));
            tracep->chgBit(oldp+26,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__first_valid_q));
            tracep->chgBit(oldp+27,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+28,(vlTOPp->mptw_top__DOT__input_transaction),132);
            tracep->chgCData(oldp+33,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
            tracep->chgBit(oldp+34,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall)))));
            tracep->chgBit(oldp+35,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
            tracep->chgWData(oldp+36,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction),132);
            tracep->chgBit(oldp+41,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced));
            tracep->chgQData(oldp+42,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+44,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[0U])) 
                                           >> 4U)))),64);
            tracep->chgBit(oldp+46,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall));
            tracep->chgBit(oldp+47,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid));
            tracep->chgBit(oldp+48,((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)))));
            tracep->chgBit(oldp+49,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready));
            tracep->chgBit(oldp+50,(((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)) 
                                     & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid))));
            tracep->chgBit(oldp+51,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall));
        }
        tracep->chgBit(oldp+52,(vlTOPp->clk_i));
        tracep->chgBit(oldp+53,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+54,(vlTOPp->flush_i));
        tracep->chgBit(oldp+55,(vlTOPp->mptw_enable_i));
        tracep->chgQData(oldp+56,(vlTOPp->spa_i),64);
        tracep->chgQData(oldp+58,(vlTOPp->mmpt_reg_i),64);
        tracep->chgCData(oldp+60,(vlTOPp->access_type_i),2);
        tracep->chgBit(oldp+61,(vlTOPp->mptw_transaction_valid_i));
        tracep->chgBit(oldp+62,(vlTOPp->mptw_ready_o));
        tracep->chgBit(oldp+63,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+64,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+65,(vlTOPp->plb_cache_mem_req));
        tracep->chgBit(oldp+66,(vlTOPp->plb_cache_mem_gnt));
        tracep->chgBit(oldp+67,(vlTOPp->plb_cache_mem_valid));
        tracep->chgWData(oldp+68,(vlTOPp->plb_cache_mem_addr),72);
        tracep->chgCData(oldp+71,(vlTOPp->plb_cache_mem_rdata),8);
        tracep->chgCData(oldp+72,(vlTOPp->plb_cache_mem_wdata),8);
        tracep->chgBit(oldp+73,(vlTOPp->plb_cache_mem_we));
        tracep->chgBit(oldp+74,(vlTOPp->plb_cache_mem_be));
        tracep->chgBit(oldp+75,(vlTOPp->plb_cache_mem_error));
        tracep->chgBit(oldp+76,(((~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall)) 
                                 & (IData)(vlTOPp->mptw_transaction_valid_i))));
        tracep->chgBit(oldp+77,((1U & (IData)(vlTOPp->plb_cache_mem_rdata))));
        tracep->chgBit(oldp+78,(((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall)) 
                                 & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced))));
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
