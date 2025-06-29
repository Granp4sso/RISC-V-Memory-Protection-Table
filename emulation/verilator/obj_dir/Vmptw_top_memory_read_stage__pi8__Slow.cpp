// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top_memory_read_stage__pi8.h"
#include "Vmptw_top__Syms.h"

//==========

VL_CTOR_IMP(Vmptw_top_memory_read_stage__pi8) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vmptw_top_memory_read_stage__pi8::__Vconfigure(Vmptw_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vmptw_top_memory_read_stage__pi8::~Vmptw_top_memory_read_stage__pi8() {
}

void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(vlTOPp->plb_master_mem_rdata) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(vlTOPp->plb_master_mem_rdata) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->plb_master_mem_rdata 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->plb_master_mem_rdata 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [2U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [2U]);
            }
        }
    }
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [2U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [2U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [2U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [2U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                        >> 2U))))
                                                 ? 
                                                ((IData)(vlTOPp->plb_master_mem_gnt)
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__issue_stage_master_valid
                [1U];
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                  >> 2U)))) 
                                            | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                        >> 2U)))) 
                                          | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if (((IData)(vlTOPp->plb_master_mem_valid) 
                     | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                      << 0x1eU) | (
                                                   this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                                   >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [0U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [0U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [0U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [0U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [3U]);
            }
        }
    }
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [3U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [3U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [3U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [0U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [0U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__3\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [1U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [1U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [1U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [1U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [4U]);
            }
        }
    }
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [4U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [4U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [4U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [1U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [1U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [2U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [2U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [2U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [2U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [5U]);
            }
        }
    }
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [5U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [5U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [5U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [2U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [2U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [3U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [3U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [3U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [3U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [6U]);
            }
        }
    }
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [6U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [6U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [6U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [3U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [3U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, stage_slave_data);
    stage_slave_valid = VL_RAND_RESET_I(1);
    stage_slave_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, stage_master_data);
    stage_master_valid = VL_RAND_RESET_I(1);
    stage_master_ready = VL_RAND_RESET_I(1);
    stage_ctrl_flush = VL_RAND_RESET_I(2);
    stage_ctrl_stall = VL_RAND_RESET_I(1);
    stage_status_busy = VL_RAND_RESET_I(1);
    stage_status_flushed = VL_RAND_RESET_I(2);
    stage_status_stalled = VL_RAND_RESET_I(1);
    memory_master_mem_req = VL_RAND_RESET_I(1);
    memory_master_mem_gnt = VL_RAND_RESET_I(1);
    memory_master_mem_valid = VL_RAND_RESET_I(1);
    memory_master_mem_addr = VL_RAND_RESET_Q(64);
    memory_master_mem_rdata = VL_RAND_RESET_Q(64);
    __PVT__memory_master_mem_wdata = VL_RAND_RESET_Q(64);
    __PVT__memory_master_mem_we = VL_RAND_RESET_I(1);
    __PVT__memory_master_mem_be = VL_RAND_RESET_I(8);
    memory_master_mem_error = VL_RAND_RESET_I(1);
    __PVT__req_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, __PVT__to_output_bus_data);
    __PVT__to_output_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, __PVT__grant_fifo_to_valid_fifo);
    VL_RAND_RESET_W(280, __PVT__valid_fifo_to_master);
    __PVT__valid_do_walk = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_push = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_push = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__valid_counter_q = VL_RAND_RESET_I(6);
    __PVT__valid_counter_d = VL_RAND_RESET_I(6);
    __PVT__spec_transaction_cnt_q = VL_RAND_RESET_I(6);
    __PVT__spec_transaction_cnt_d = VL_RAND_RESET_I(6);
    __PVT__stage_usage = VL_RAND_RESET_I(6);
    __PVT__grant_fifo_status_q = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_status_d = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_status_q = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_status_d = VL_RAND_RESET_I(2);
    __PVT__flush_fifo = VL_RAND_RESET_I(1);
    __PVT__flush_grant_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__flush_status_q = VL_RAND_RESET_I(2);
    __PVT__flush_status_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(280, __Vcellout__grant_fifo_u__data_o);
    __PVT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(5);
    __PVT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(5);
    __PVT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(5);
    __PVT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(5);
    __PVT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(6);
    __PVT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(8960, __PVT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(8960, __PVT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(280, grant_fifo_u__DOT____Vlvbound1);
    __PVT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(5);
    __PVT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(5);
    __PVT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(5);
    __PVT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(5);
    __PVT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(6);
    __PVT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(8960, __PVT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(8960, __PVT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(280, valid_fifo_u__DOT____Vlvbound1);
}
