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
    // Variables
    WData/*223:0*/ __Vtemp317[7];
    WData/*223:0*/ __Vtemp325[7];
    WData/*223:0*/ __Vtemp333[7];
    WData/*223:0*/ __Vtemp336[7];
    WData/*223:0*/ __Vtemp339[7];
    WData/*223:0*/ __Vtemp342[7];
    WData/*223:0*/ __Vtemp348[7];
    WData/*223:0*/ __Vtemp354[7];
    WData/*223:0*/ __Vtemp360[7];
    WData/*223:0*/ __Vtemp366[7];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->mptw_top__DOT__input_transaction),196);
            tracep->chgCData(oldp+7,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
            tracep->chgBit(oldp+8,(vlTOPp->mptw_top__DOT__fetch_to_pipe_ready));
            tracep->chgBit(oldp+9,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
            tracep->chgWData(oldp+10,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction),196);
            tracep->chgBit(oldp+17,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid));
            tracep->chgBit(oldp+18,(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
            tracep->chgBit(oldp+19,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))));
            tracep->chgCData(oldp+20,(vlTOPp->mptw_top__DOT__walking_stage_ready),4);
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+23,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                           >> 4U)))),64);
            tracep->chgBit(oldp+25,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state));
            tracep->chgWData(oldp+26,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d),196);
            tracep->chgWData(oldp+33,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master),196);
            tracep->chgBit(oldp+40,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
            tracep->chgBit(oldp+41,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
            tracep->chgBit(oldp+42,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state));
            tracep->chgWData(oldp+43,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+50,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+51,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+52,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+53,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+54,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+79,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+80,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+81,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+82,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+83,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+108,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state));
            tracep->chgWData(oldp+109,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d),196);
            tracep->chgBit(oldp+116,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 1U))));
            tracep->chgBit(oldp+118,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid));
            tracep->chgBit(oldp+119,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
            tracep->chgBit(oldp+120,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
            tracep->chgBit(oldp+121,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
            tracep->chgBit(oldp+122,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state));
            tracep->chgWData(oldp+123,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+130,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+131,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+132,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+133,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+134,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+159,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+160,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+161,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+162,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+163,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+188,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+189,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+196,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 2U))));
            tracep->chgBit(oldp+198,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid));
            tracep->chgBit(oldp+199,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
            tracep->chgBit(oldp+200,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
            tracep->chgBit(oldp+201,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
            tracep->chgBit(oldp+202,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state));
            tracep->chgWData(oldp+203,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+210,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+211,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+212,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+213,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+214,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+239,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+240,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+241,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+242,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+243,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+268,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+269,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+276,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 3U))));
            tracep->chgBit(oldp+278,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid));
            tracep->chgBit(oldp+279,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
            tracep->chgBit(oldp+280,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
            tracep->chgBit(oldp+281,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
            tracep->chgBit(oldp+282,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state));
            tracep->chgWData(oldp+283,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+290,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+291,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+292,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+293,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+294,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+319,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+320,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+321,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+322,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+323,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+348,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+349,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d),196);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgWData(oldp+356,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                __Vtemp317[0U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                __Vtemp317[1U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                __Vtemp317[2U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                __Vtemp317[3U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                __Vtemp317[4U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                __Vtemp317[5U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                __Vtemp317[6U] = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                __Vtemp317[0U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[1U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[2U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[3U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[4U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(5U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[5U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(6U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp317[6U] = (0xfU & ((0x30fU >= 
                                           (0x3ffU 
                                            & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                                ? 0U
                                                : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1fU 
                                                     & (((IData)(0xc4U) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                              | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(6U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                           : 0U));
            }
            tracep->chgWData(oldp+363,(__Vtemp317),196);
            tracep->chgWData(oldp+370,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                __Vtemp325[0U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                __Vtemp325[1U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                __Vtemp325[2U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                __Vtemp325[3U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                __Vtemp325[4U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                __Vtemp325[5U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                __Vtemp325[6U] = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                __Vtemp325[0U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[1U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[2U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[3U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[4U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(5U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[5U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(6U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp325[6U] = (0xfU & ((0x30fU >= 
                                           (0x3ffU 
                                            & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                                ? 0U
                                                : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1fU 
                                                     & (((IData)(0xc4U) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                              | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(6U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                           : 0U));
            }
            tracep->chgWData(oldp+377,(__Vtemp325),196);
            tracep->chgWData(oldp+384,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                __Vtemp333[0U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                __Vtemp333[1U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                __Vtemp333[2U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                __Vtemp333[3U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                __Vtemp333[4U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                __Vtemp333[5U] = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                __Vtemp333[6U] = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                __Vtemp333[0U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[1U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(2U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[2U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[3U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[4U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(5U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[5U] = ((0x30fU >= (0x3ffU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                        ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                ((IData)(6U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                      | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                   : 0U);
                __Vtemp333[6U] = (0xfU & ((0x30fU >= 
                                           (0x3ffU 
                                            & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                                ? 0U
                                                : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x1fU 
                                                     & (((IData)(0xc4U) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                              | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(6U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                           : 0U));
            }
            tracep->chgWData(oldp+391,(__Vtemp333),196);
            tracep->chgWData(oldp+398,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+405,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),196);
            tracep->chgBit(oldp+412,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
            tracep->chgWData(oldp+413,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),196);
            tracep->chgBit(oldp+420,(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
            tracep->chgWData(oldp+421,(vlTOPp->mptw_top__DOT__walking_stage_data),784);
            tracep->chgCData(oldp+446,(vlTOPp->mptw_top__DOT__walking_stage_valid),4);
            tracep->chgBit(oldp+447,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state));
            tracep->chgBit(oldp+448,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state));
            tracep->chgWData(oldp+449,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+456,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
            tracep->chgBit(oldp+457,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state));
            __Vtemp336[0U] = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
            __Vtemp336[1U] = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
            __Vtemp336[2U] = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
            __Vtemp336[3U] = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
            __Vtemp336[4U] = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
            __Vtemp336[5U] = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
            __Vtemp336[6U] = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
            tracep->chgWData(oldp+458,(__Vtemp336),196);
            tracep->chgBit(oldp+465,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))));
            tracep->chgWData(oldp+466,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+473,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid));
            tracep->chgQData(oldp+474,((((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                              >> 4U)))),64);
            tracep->chgWData(oldp+476,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+483,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
            tracep->chgBit(oldp+484,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state));
            tracep->chgBit(oldp+485,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
            __Vtemp339[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                            >> 4U));
            __Vtemp339[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                            >> 4U));
            __Vtemp339[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                            >> 4U));
            __Vtemp339[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                            >> 4U));
            __Vtemp339[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                            >> 4U));
            __Vtemp339[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                            >> 4U));
            __Vtemp339[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                       << 0x1cU) | 
                                      (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                       >> 4U)));
            tracep->chgWData(oldp+486,(__Vtemp339),196);
            tracep->chgBit(oldp+493,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                            >> 1U))));
            tracep->chgWData(oldp+494,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+501,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid));
            tracep->chgQData(oldp+502,((((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                              >> 4U)))),64);
            tracep->chgWData(oldp+504,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+511,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
            tracep->chgBit(oldp+512,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state));
            tracep->chgBit(oldp+513,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
            __Vtemp342[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                            >> 8U));
            __Vtemp342[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                            >> 8U));
            __Vtemp342[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                            >> 8U));
            __Vtemp342[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                            >> 8U));
            __Vtemp342[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                            >> 8U));
            __Vtemp342[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                            >> 8U));
            __Vtemp342[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                       << 0x18U) | 
                                      (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                       >> 8U)));
            tracep->chgWData(oldp+514,(__Vtemp342),196);
            tracep->chgBit(oldp+521,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                            >> 2U))));
            tracep->chgWData(oldp+522,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+529,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid));
            tracep->chgQData(oldp+530,((((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                              >> 4U)))),64);
            tracep->chgWData(oldp+532,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+539,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
            tracep->chgBit(oldp+540,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state));
            tracep->chgBit(oldp+541,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+542,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+543,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+544,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgWData(oldp+545,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o),196);
            tracep->chgBit(oldp+552,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+553,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+554,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp348[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
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
                __Vtemp348[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp348[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp348[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp348[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp348[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp348[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
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
                __Vtemp348[0U] = 0U;
                __Vtemp348[1U] = 0U;
                __Vtemp348[2U] = 0U;
                __Vtemp348[3U] = 0U;
                __Vtemp348[4U] = 0U;
                __Vtemp348[5U] = 0U;
                __Vtemp348[6U] = 0U;
            }
            tracep->chgWData(oldp+555,(__Vtemp348),196);
            tracep->chgCData(oldp+562,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+563,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+564,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+565,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
            tracep->chgCData(oldp+590,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+591,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+592,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+593,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
            tracep->chgBit(oldp+618,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+619,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+620,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgWData(oldp+621,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o),196);
            tracep->chgBit(oldp+628,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+629,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+630,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp354[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp354[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                          | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))));
            } else {
                __Vtemp354[0U] = 0U;
                __Vtemp354[1U] = 0U;
                __Vtemp354[2U] = 0U;
                __Vtemp354[3U] = 0U;
                __Vtemp354[4U] = 0U;
                __Vtemp354[5U] = 0U;
                __Vtemp354[6U] = 0U;
            }
            tracep->chgWData(oldp+631,(__Vtemp354),196);
            tracep->chgCData(oldp+638,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+639,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+640,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+641,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
            tracep->chgCData(oldp+666,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+667,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+668,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+669,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
            tracep->chgBit(oldp+694,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+695,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+696,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgWData(oldp+697,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o),196);
            tracep->chgBit(oldp+704,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+705,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+706,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp360[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp360[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                          | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))));
            } else {
                __Vtemp360[0U] = 0U;
                __Vtemp360[1U] = 0U;
                __Vtemp360[2U] = 0U;
                __Vtemp360[3U] = 0U;
                __Vtemp360[4U] = 0U;
                __Vtemp360[5U] = 0U;
                __Vtemp360[6U] = 0U;
            }
            tracep->chgWData(oldp+707,(__Vtemp360),196);
            tracep->chgCData(oldp+714,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+715,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+716,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+717,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
            tracep->chgCData(oldp+742,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+743,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+744,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+745,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
            tracep->chgBit(oldp+770,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+771,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+772,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgWData(oldp+773,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o),196);
            tracep->chgBit(oldp+780,((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+781,((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgCData(oldp+782,((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp366[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp366[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                          | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))));
            } else {
                __Vtemp366[0U] = 0U;
                __Vtemp366[1U] = 0U;
                __Vtemp366[2U] = 0U;
                __Vtemp366[3U] = 0U;
                __Vtemp366[4U] = 0U;
                __Vtemp366[5U] = 0U;
                __Vtemp366[6U] = 0U;
            }
            tracep->chgWData(oldp+783,(__Vtemp366),196);
            tracep->chgCData(oldp+790,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+791,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+792,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+793,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
            tracep->chgCData(oldp+818,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+819,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+820,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+821,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
        }
        tracep->chgBit(oldp+846,(vlTOPp->clk_i));
        tracep->chgBit(oldp+847,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+848,(vlTOPp->flush_i));
        tracep->chgBit(oldp+849,(vlTOPp->mptw_enable_i));
        tracep->chgQData(oldp+850,(vlTOPp->spa_i),64);
        tracep->chgQData(oldp+852,(vlTOPp->mmpt_reg_i),64);
        tracep->chgCData(oldp+854,(vlTOPp->access_type_i),2);
        tracep->chgBit(oldp+855,(vlTOPp->mptw_transaction_valid_i));
        tracep->chgBit(oldp+856,(vlTOPp->mptw_ready_o));
        tracep->chgBit(oldp+857,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+858,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+859,(vlTOPp->plb_master_mem_req));
        tracep->chgBit(oldp+860,(vlTOPp->plb_master_mem_gnt));
        tracep->chgBit(oldp+861,(vlTOPp->plb_master_mem_valid));
        tracep->chgQData(oldp+862,(vlTOPp->plb_master_mem_addr),64);
        tracep->chgQData(oldp+864,(vlTOPp->plb_master_mem_rdata),64);
        tracep->chgQData(oldp+866,(vlTOPp->plb_master_mem_wdata),64);
        tracep->chgBit(oldp+868,(vlTOPp->plb_master_mem_we));
        tracep->chgCData(oldp+869,(vlTOPp->plb_master_mem_be),8);
        tracep->chgBit(oldp+870,(vlTOPp->plb_master_mem_error));
        tracep->chgBit(oldp+871,(vlTOPp->walking_mem_master_mem_req[0]));
        tracep->chgBit(oldp+872,(vlTOPp->walking_mem_master_mem_req[1]));
        tracep->chgBit(oldp+873,(vlTOPp->walking_mem_master_mem_req[2]));
        tracep->chgBit(oldp+874,(vlTOPp->walking_mem_master_mem_gnt[0]));
        tracep->chgBit(oldp+875,(vlTOPp->walking_mem_master_mem_gnt[1]));
        tracep->chgBit(oldp+876,(vlTOPp->walking_mem_master_mem_gnt[2]));
        tracep->chgBit(oldp+877,(vlTOPp->walking_mem_master_mem_valid[0]));
        tracep->chgBit(oldp+878,(vlTOPp->walking_mem_master_mem_valid[1]));
        tracep->chgBit(oldp+879,(vlTOPp->walking_mem_master_mem_valid[2]));
        tracep->chgQData(oldp+880,(vlTOPp->walking_mem_master_mem_addr[0]),64);
        tracep->chgQData(oldp+882,(vlTOPp->walking_mem_master_mem_addr[1]),64);
        tracep->chgQData(oldp+884,(vlTOPp->walking_mem_master_mem_addr[2]),64);
        tracep->chgQData(oldp+886,(vlTOPp->walking_mem_master_mem_rdata[0]),64);
        tracep->chgQData(oldp+888,(vlTOPp->walking_mem_master_mem_rdata[1]),64);
        tracep->chgQData(oldp+890,(vlTOPp->walking_mem_master_mem_rdata[2]),64);
        tracep->chgQData(oldp+892,(vlTOPp->walking_mem_master_mem_wdata[0]),64);
        tracep->chgQData(oldp+894,(vlTOPp->walking_mem_master_mem_wdata[1]),64);
        tracep->chgQData(oldp+896,(vlTOPp->walking_mem_master_mem_wdata[2]),64);
        tracep->chgBit(oldp+898,(vlTOPp->walking_mem_master_mem_we[0]));
        tracep->chgBit(oldp+899,(vlTOPp->walking_mem_master_mem_we[1]));
        tracep->chgBit(oldp+900,(vlTOPp->walking_mem_master_mem_we[2]));
        tracep->chgCData(oldp+901,(vlTOPp->walking_mem_master_mem_be[0]),8);
        tracep->chgCData(oldp+902,(vlTOPp->walking_mem_master_mem_be[1]),8);
        tracep->chgCData(oldp+903,(vlTOPp->walking_mem_master_mem_be[2]),8);
        tracep->chgBit(oldp+904,(vlTOPp->walking_mem_master_mem_error[0]));
        tracep->chgBit(oldp+905,(vlTOPp->walking_mem_master_mem_error[1]));
        tracep->chgBit(oldp+906,(vlTOPp->walking_mem_master_mem_error[2]));
        tracep->chgCData(oldp+907,((7U & (((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (IData)(vlTOPp->plb_master_mem_gnt)) 
                                          + (3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))),3);
        tracep->chgBit(oldp+908,(((((4U > (7U & (((3U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                  + 
                                                  vlTOPp->walking_mem_master_mem_gnt
                                                  [0U]) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                    & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                   & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid))));
        tracep->chgBit(oldp+909,(vlTOPp->walking_mem_master_mem_gnt
                                 [0U]));
        tracep->chgBit(oldp+910,(vlTOPp->walking_mem_master_mem_valid
                                 [0U]));
        tracep->chgQData(oldp+911,(vlTOPp->walking_mem_master_mem_rdata
                                   [0U]),64);
        tracep->chgBit(oldp+913,(vlTOPp->walking_mem_master_mem_error
                                 [0U]));
        tracep->chgCData(oldp+914,((7U & (((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + vlTOPp->walking_mem_master_mem_gnt
                                           [0U]) + 
                                          (3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))),3);
        tracep->chgBit(oldp+915,(((((4U > (7U & (((3U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                  + 
                                                  vlTOPp->walking_mem_master_mem_gnt
                                                  [1U]) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                    & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                   & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid))));
        tracep->chgBit(oldp+916,(vlTOPp->walking_mem_master_mem_gnt
                                 [1U]));
        tracep->chgBit(oldp+917,(vlTOPp->walking_mem_master_mem_valid
                                 [1U]));
        tracep->chgQData(oldp+918,(vlTOPp->walking_mem_master_mem_rdata
                                   [1U]),64);
        tracep->chgBit(oldp+920,(vlTOPp->walking_mem_master_mem_error
                                 [1U]));
        tracep->chgCData(oldp+921,((7U & (((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + vlTOPp->walking_mem_master_mem_gnt
                                           [1U]) + 
                                          (3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))),3);
        tracep->chgBit(oldp+922,(((((4U > (7U & (((3U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                  + 
                                                  vlTOPp->walking_mem_master_mem_gnt
                                                  [2U]) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                    & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                   & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                  & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid))));
        tracep->chgBit(oldp+923,(vlTOPp->walking_mem_master_mem_gnt
                                 [2U]));
        tracep->chgBit(oldp+924,(vlTOPp->walking_mem_master_mem_valid
                                 [2U]));
        tracep->chgQData(oldp+925,(vlTOPp->walking_mem_master_mem_rdata
                                   [2U]),64);
        tracep->chgBit(oldp+927,(vlTOPp->walking_mem_master_mem_error
                                 [2U]));
        tracep->chgCData(oldp+928,((7U & (((3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + vlTOPp->walking_mem_master_mem_gnt
                                           [2U]) + 
                                          (3U & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))),3);
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
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
