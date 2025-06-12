// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top_memory_read_stage__pi6.h"
#include "Vmptw_top__Syms.h"

//==========

VL_CTOR_IMP(Vmptw_top_memory_read_stage__pi6) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vmptw_top_memory_read_stage__pi6::__Vconfigure(Vmptw_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vmptw_top_memory_read_stage__pi6::~Vmptw_top_memory_read_stage__pi6() {
}

void Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__valid_fifo_pop = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_pop = 0U;
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_fifo_pop = 0U;
                if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            } else {
                this->__PVT__valid_fifo_pop = 0U;
            }
        }
    }
    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x117U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x117U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x117U) 
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
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_bus_valid = 1U;
        }
    } else {
        this->__PVT__req_bus_valid = 0U;
    }
    this->__PVT__stage_usage = (0x1ffffffffULL & ((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))));
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = ((0xfffffff0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & this->__Vcellout__grant_fifo_u__data_o[4U]));
    this->__PVT__grant_fifo_to_valid_fifo[5U] = ((0xfU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                     << 0x1cU) 
                                                                    | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                       >> 4U))) 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)) 
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
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0x7ffff0U 
                                                  & this->__Vcellout__grant_fifo_u__data_o[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->plb_master_mem_rdata 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_status_d = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                ((IData)(vlTOPp->plb_master_mem_gnt)
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_status_d = 
                    ((4ULL > (0x1ffffffffULL & (1ULL 
                                                + this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            this->__PVT__grant_fifo_status_d = ((2U 
                                                 == (IData)(this->__PVT__grant_fifo_status_q))
                                                 ? 
                                                ((4ULL 
                                                  > this->__PVT__stage_usage)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U);
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_addr = 0ULL;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  this->__PVT__req_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        this->memory_master_mem_addr = ((1U == (IData)(this->__PVT__grant_fifo_status_q))
                                         ? (((QData)((IData)(
                                                             this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              this->__PVT__req_reg__DOT__reg_data_q[2U])))
                                         : 0ULL);
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_req = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        this->memory_master_mem_req = ((1U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                       & (IData)(this->__PVT__req_bus_valid));
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_push = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_push = 0U;
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_push = 1U;
            }
        } else {
            this->__PVT__grant_fifo_push = 0U;
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__req_bus_ready = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__req_bus_ready = 0U;
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__req_bus_ready = (4ULL 
                                              > (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + this->__PVT__stage_usage)));
            }
        } else {
            this->__PVT__req_bus_ready = ((2U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                          & (4ULL > this->__PVT__stage_usage));
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__mem_n[0U] = this->__PVT__grant_fifo_u__DOT__mem_q[0U];
    this->__PVT__grant_fifo_u__DOT__mem_n[1U] = this->__PVT__grant_fifo_u__DOT__mem_q[1U];
    this->__PVT__grant_fifo_u__DOT__mem_n[2U] = this->__PVT__grant_fifo_u__DOT__mem_q[2U];
    this->__PVT__grant_fifo_u__DOT__mem_n[3U] = this->__PVT__grant_fifo_u__DOT__mem_q[3U];
    this->__PVT__grant_fifo_u__DOT__mem_n[4U] = this->__PVT__grant_fifo_u__DOT__mem_q[4U];
    this->__PVT__grant_fifo_u__DOT__mem_n[5U] = this->__PVT__grant_fifo_u__DOT__mem_q[5U];
    this->__PVT__grant_fifo_u__DOT__mem_n[6U] = this->__PVT__grant_fifo_u__DOT__mem_q[6U];
    this->__PVT__grant_fifo_u__DOT__mem_n[7U] = this->__PVT__grant_fifo_u__DOT__mem_q[7U];
    this->__PVT__grant_fifo_u__DOT__mem_n[8U] = this->__PVT__grant_fifo_u__DOT__mem_q[8U];
    this->__PVT__grant_fifo_u__DOT__mem_n[9U] = this->__PVT__grant_fifo_u__DOT__mem_q[9U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xaU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xbU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xcU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xdU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xeU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xfU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__req_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__req_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__req_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__req_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__req_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__req_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__req_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__req_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__req_reg__DOT__reg_data_q[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__grant_fifo_pop = 0U;
        this->__PVT__valid_fifo_push = 0U;
        this->__PVT__valid_fifo_to_master[0U] = 0U;
        this->__PVT__valid_fifo_to_master[1U] = 0U;
        this->__PVT__valid_fifo_to_master[2U] = 0U;
        this->__PVT__valid_fifo_to_master[3U] = 0U;
        this->__PVT__valid_fifo_to_master[4U] = 0U;
        this->__PVT__valid_fifo_to_master[5U] = 0U;
        this->__PVT__valid_fifo_to_master[6U] = 0U;
        this->__PVT__valid_fifo_to_master[7U] = 0U;
        this->__PVT__valid_fifo_to_master[8U] = 0U;
        this->stage_master_valid = 0U;
        this->__PVT__valid_fifo_status_d = 0U;
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__grant_fifo_pop = 0U;
            this->__PVT__valid_fifo_push = 0U;
            this->__PVT__valid_fifo_to_master[0U] = 0U;
            this->__PVT__valid_fifo_to_master[1U] = 0U;
            this->__PVT__valid_fifo_to_master[2U] = 0U;
            this->__PVT__valid_fifo_to_master[3U] = 0U;
            this->__PVT__valid_fifo_to_master[4U] = 0U;
            this->__PVT__valid_fifo_to_master[5U] = 0U;
            this->__PVT__valid_fifo_to_master[6U] = 0U;
            this->__PVT__valid_fifo_to_master[7U] = 0U;
            this->__PVT__valid_fifo_to_master[8U] = 0U;
            this->stage_master_valid = 0U;
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if (((IData)(vlTOPp->plb_master_mem_valid) 
                     | (0ULL != this->__PVT__valid_counter_q))) {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
                             & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->stage_master_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & ((IData)(vlTOPp->plb_master_mem_valid)
                                                  ? this->__PVT__valid_counter_q
                                                  : 
                                                 (this->__PVT__valid_counter_q 
                                                  - 1ULL)));
                    }
                }
            } else {
                if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
                         & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->stage_master_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x1ffffffffULL & ((IData)(vlTOPp->plb_master_mem_valid)
                                            ? (1ULL 
                                               + this->__PVT__valid_counter_q)
                                            : this->__PVT__valid_counter_q));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((3U & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x45bU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x45bU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x117U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x117U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if (((IData)(vlTOPp->plb_master_mem_valid) 
                         | (0ULL != this->__PVT__valid_counter_q))) {
                        if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x1ffffffffULL & 
                                   ((IData)(vlTOPp->plb_master_mem_valid)
                                     ? this->__PVT__valid_counter_q
                                     : (this->__PVT__valid_counter_q 
                                        - 1ULL)));
                        }
                    }
                } else {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & ((IData)(vlTOPp->plb_master_mem_valid)
                                                  ? 
                                                 (1ULL 
                                                  + this->__PVT__valid_counter_q)
                                                  : this->__PVT__valid_counter_q));
                    }
                }
                if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) {
                    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0x7fffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x3fU 
                                                   & (((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->stage_master_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((3U & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            } else {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_fifo_status_d = 0U;
            }
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_reg__DOT__next_state = 
                (1U & ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
                        [1U] & (IData)(this->__PVT__req_bus_ready)) 
                       | (~ ((~ vlTOPp->mptw_top__DOT__issue_stage_master_valid
                              [1U]) & (IData)(this->__PVT__req_bus_ready)))));
        }
    } else {
        this->__PVT__req_reg__DOT__next_state = vlTOPp->mptw_top__DOT__issue_stage_master_valid
            [1U];
    }
    this->__PVT__req_reg__DOT__reg_data_d[0U] = this->__PVT__req_reg__DOT__reg_data_q[0U];
    this->__PVT__req_reg__DOT__reg_data_d[1U] = this->__PVT__req_reg__DOT__reg_data_q[1U];
    this->__PVT__req_reg__DOT__reg_data_d[2U] = this->__PVT__req_reg__DOT__reg_data_q[2U];
    this->__PVT__req_reg__DOT__reg_data_d[3U] = this->__PVT__req_reg__DOT__reg_data_q[3U];
    this->__PVT__req_reg__DOT__reg_data_d[4U] = this->__PVT__req_reg__DOT__reg_data_q[4U];
    this->__PVT__req_reg__DOT__reg_data_d[5U] = this->__PVT__req_reg__DOT__reg_data_q[5U];
    this->__PVT__req_reg__DOT__reg_data_d[6U] = this->__PVT__req_reg__DOT__reg_data_q[6U];
    this->__PVT__req_reg__DOT__reg_data_d[7U] = this->__PVT__req_reg__DOT__reg_data_q[7U];
    this->__PVT__req_reg__DOT__reg_data_d[8U] = this->__PVT__req_reg__DOT__reg_data_q[8U];
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
                 [1U] & (IData)(this->__PVT__req_bus_ready))) {
                this->__PVT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][0U];
                this->__PVT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][1U];
                this->__PVT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][2U];
                this->__PVT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][3U];
                this->__PVT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][4U];
                this->__PVT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][5U];
                this->__PVT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][6U];
                this->__PVT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][7U];
                this->__PVT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__issue_stage_master_data
                    [1U][8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__issue_stage_master_valid
            [1U]) {
            this->__PVT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][0U];
            this->__PVT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][1U];
            this->__PVT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][2U];
            this->__PVT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][3U];
            this->__PVT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][4U];
            this->__PVT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][5U];
            this->__PVT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][6U];
            this->__PVT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][7U];
            this->__PVT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__issue_stage_master_data
                [1U][8U];
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->stage_slave_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__issue_stage_master_valid
                          [1U] & (IData)(this->__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__issue_stage_master_valid
                               [1U]) & (IData)(this->__PVT__req_bus_ready))))) {
                    this->stage_slave_ready = 0U;
                }
            }
        }
    } else {
        this->stage_slave_ready = 1U;
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__mem_n[0U] = this->__PVT__valid_fifo_u__DOT__mem_q[0U];
    this->__PVT__valid_fifo_u__DOT__mem_n[1U] = this->__PVT__valid_fifo_u__DOT__mem_q[1U];
    this->__PVT__valid_fifo_u__DOT__mem_n[2U] = this->__PVT__valid_fifo_u__DOT__mem_q[2U];
    this->__PVT__valid_fifo_u__DOT__mem_n[3U] = this->__PVT__valid_fifo_u__DOT__mem_q[3U];
    this->__PVT__valid_fifo_u__DOT__mem_n[4U] = this->__PVT__valid_fifo_u__DOT__mem_q[4U];
    this->__PVT__valid_fifo_u__DOT__mem_n[5U] = this->__PVT__valid_fifo_u__DOT__mem_q[5U];
    this->__PVT__valid_fifo_u__DOT__mem_n[6U] = this->__PVT__valid_fifo_u__DOT__mem_q[6U];
    this->__PVT__valid_fifo_u__DOT__mem_n[7U] = this->__PVT__valid_fifo_u__DOT__mem_q[7U];
    this->__PVT__valid_fifo_u__DOT__mem_n[8U] = this->__PVT__valid_fifo_u__DOT__mem_q[8U];
    this->__PVT__valid_fifo_u__DOT__mem_n[9U] = this->__PVT__valid_fifo_u__DOT__mem_q[9U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xaU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xbU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xcU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xdU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xeU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xfU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__valid_fifo_pop = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_pop = 0U;
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_fifo_pop = 0U;
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            } else {
                this->__PVT__valid_fifo_pop = 0U;
            }
        }
    }
    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x117U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x117U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x117U) 
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
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_bus_valid = 1U;
        }
    } else {
        this->__PVT__req_bus_valid = 0U;
    }
    this->__PVT__stage_usage = (0x1ffffffffULL & ((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))));
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = ((0xfffffff0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & this->__Vcellout__grant_fifo_u__data_o[4U]));
    this->__PVT__grant_fifo_to_valid_fifo[5U] = ((0xfU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                     << 0x1cU) 
                                                                    | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                       >> 4U))) 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)) 
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
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0x7ffff0U 
                                                  & this->__Vcellout__grant_fifo_u__data_o[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [0U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_status_d = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
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
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((4ULL > (0x1ffffffffULL & (1ULL 
                                                + this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            this->__PVT__grant_fifo_status_d = ((2U 
                                                 == (IData)(this->__PVT__grant_fifo_status_q))
                                                 ? 
                                                ((4ULL 
                                                  > this->__PVT__stage_usage)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U);
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_addr = 0ULL;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  this->__PVT__req_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        this->memory_master_mem_addr = ((1U == (IData)(this->__PVT__grant_fifo_status_q))
                                         ? (((QData)((IData)(
                                                             this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              this->__PVT__req_reg__DOT__reg_data_q[2U])))
                                         : 0ULL);
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_req = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        this->memory_master_mem_req = ((1U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                       & (IData)(this->__PVT__req_bus_valid));
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_push = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_push = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        } else {
            this->__PVT__grant_fifo_push = 0U;
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__req_bus_ready = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__req_bus_ready = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__req_bus_ready = (4ULL 
                                              > (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + this->__PVT__stage_usage)));
            }
        } else {
            this->__PVT__req_bus_ready = ((2U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                          & (4ULL > this->__PVT__stage_usage));
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__mem_n[0U] = this->__PVT__grant_fifo_u__DOT__mem_q[0U];
    this->__PVT__grant_fifo_u__DOT__mem_n[1U] = this->__PVT__grant_fifo_u__DOT__mem_q[1U];
    this->__PVT__grant_fifo_u__DOT__mem_n[2U] = this->__PVT__grant_fifo_u__DOT__mem_q[2U];
    this->__PVT__grant_fifo_u__DOT__mem_n[3U] = this->__PVT__grant_fifo_u__DOT__mem_q[3U];
    this->__PVT__grant_fifo_u__DOT__mem_n[4U] = this->__PVT__grant_fifo_u__DOT__mem_q[4U];
    this->__PVT__grant_fifo_u__DOT__mem_n[5U] = this->__PVT__grant_fifo_u__DOT__mem_q[5U];
    this->__PVT__grant_fifo_u__DOT__mem_n[6U] = this->__PVT__grant_fifo_u__DOT__mem_q[6U];
    this->__PVT__grant_fifo_u__DOT__mem_n[7U] = this->__PVT__grant_fifo_u__DOT__mem_q[7U];
    this->__PVT__grant_fifo_u__DOT__mem_n[8U] = this->__PVT__grant_fifo_u__DOT__mem_q[8U];
    this->__PVT__grant_fifo_u__DOT__mem_n[9U] = this->__PVT__grant_fifo_u__DOT__mem_q[9U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xaU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xbU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xcU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xdU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xeU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xfU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__req_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__req_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__req_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__req_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__req_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__req_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__req_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__req_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__req_reg__DOT__reg_data_q[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__grant_fifo_pop = 0U;
        this->__PVT__valid_fifo_push = 0U;
        this->__PVT__valid_fifo_to_master[0U] = 0U;
        this->__PVT__valid_fifo_to_master[1U] = 0U;
        this->__PVT__valid_fifo_to_master[2U] = 0U;
        this->__PVT__valid_fifo_to_master[3U] = 0U;
        this->__PVT__valid_fifo_to_master[4U] = 0U;
        this->__PVT__valid_fifo_to_master[5U] = 0U;
        this->__PVT__valid_fifo_to_master[6U] = 0U;
        this->__PVT__valid_fifo_to_master[7U] = 0U;
        this->__PVT__valid_fifo_to_master[8U] = 0U;
        this->stage_master_valid = 0U;
        this->__PVT__valid_fifo_status_d = 0U;
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__grant_fifo_pop = 0U;
            this->__PVT__valid_fifo_push = 0U;
            this->__PVT__valid_fifo_to_master[0U] = 0U;
            this->__PVT__valid_fifo_to_master[1U] = 0U;
            this->__PVT__valid_fifo_to_master[2U] = 0U;
            this->__PVT__valid_fifo_to_master[3U] = 0U;
            this->__PVT__valid_fifo_to_master[4U] = 0U;
            this->__PVT__valid_fifo_to_master[5U] = 0U;
            this->__PVT__valid_fifo_to_master[6U] = 0U;
            this->__PVT__valid_fifo_to_master[7U] = 0U;
            this->__PVT__valid_fifo_to_master[8U] = 0U;
            this->stage_master_valid = 0U;
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [0U] | (0ULL != this->__PVT__valid_counter_q))) {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->stage_master_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [0U]
                                                  ? this->__PVT__valid_counter_q
                                                  : 
                                                 (this->__PVT__valid_counter_q 
                                                  - 1ULL)));
                    }
                }
            } else {
                if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->stage_master_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                           [0U] ? (1ULL 
                                                   + this->__PVT__valid_counter_q)
                                            : this->__PVT__valid_counter_q));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((3U & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x45bU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x45bU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x117U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x117U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [0U] | (0ULL != this->__PVT__valid_counter_q))) {
                        if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->walking_mem_master_mem_valid
                                    [0U] ? this->__PVT__valid_counter_q
                                     : (this->__PVT__valid_counter_q 
                                        - 1ULL)));
                        }
                    }
                } else {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [0U]
                                                  ? 
                                                 (1ULL 
                                                  + this->__PVT__valid_counter_q)
                                                  : this->__PVT__valid_counter_q));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0x7fffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x3fU 
                                                   & (((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->stage_master_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((3U & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            } else {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_fifo_status_d = 0U;
            }
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_reg__DOT__next_state = 
                (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                        & (IData)(this->__PVT__req_bus_ready)) 
                       | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                             & (IData)(this->__PVT__req_bus_ready)))));
        }
    } else {
        this->__PVT__req_reg__DOT__next_state = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    this->__PVT__req_reg__DOT__reg_data_d[0U] = this->__PVT__req_reg__DOT__reg_data_q[0U];
    this->__PVT__req_reg__DOT__reg_data_d[1U] = this->__PVT__req_reg__DOT__reg_data_q[1U];
    this->__PVT__req_reg__DOT__reg_data_d[2U] = this->__PVT__req_reg__DOT__reg_data_q[2U];
    this->__PVT__req_reg__DOT__reg_data_d[3U] = this->__PVT__req_reg__DOT__reg_data_q[3U];
    this->__PVT__req_reg__DOT__reg_data_d[4U] = this->__PVT__req_reg__DOT__reg_data_q[4U];
    this->__PVT__req_reg__DOT__reg_data_d[5U] = this->__PVT__req_reg__DOT__reg_data_q[5U];
    this->__PVT__req_reg__DOT__reg_data_d[6U] = this->__PVT__req_reg__DOT__reg_data_q[6U];
    this->__PVT__req_reg__DOT__reg_data_d[7U] = this->__PVT__req_reg__DOT__reg_data_q[7U];
    this->__PVT__req_reg__DOT__reg_data_d[8U] = this->__PVT__req_reg__DOT__reg_data_q[8U];
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & (IData)(this->__PVT__req_bus_ready))) {
                this->__PVT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                this->__PVT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                this->__PVT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                this->__PVT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                this->__PVT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                this->__PVT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                this->__PVT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                this->__PVT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                this->__PVT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            this->__PVT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            this->__PVT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            this->__PVT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            this->__PVT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            this->__PVT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            this->__PVT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            this->__PVT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            this->__PVT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            this->__PVT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->stage_slave_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & (IData)(this->__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & (IData)(this->__PVT__req_bus_ready))))) {
                    this->stage_slave_ready = 0U;
                }
            }
        }
    } else {
        this->stage_slave_ready = 1U;
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__mem_n[0U] = this->__PVT__valid_fifo_u__DOT__mem_q[0U];
    this->__PVT__valid_fifo_u__DOT__mem_n[1U] = this->__PVT__valid_fifo_u__DOT__mem_q[1U];
    this->__PVT__valid_fifo_u__DOT__mem_n[2U] = this->__PVT__valid_fifo_u__DOT__mem_q[2U];
    this->__PVT__valid_fifo_u__DOT__mem_n[3U] = this->__PVT__valid_fifo_u__DOT__mem_q[3U];
    this->__PVT__valid_fifo_u__DOT__mem_n[4U] = this->__PVT__valid_fifo_u__DOT__mem_q[4U];
    this->__PVT__valid_fifo_u__DOT__mem_n[5U] = this->__PVT__valid_fifo_u__DOT__mem_q[5U];
    this->__PVT__valid_fifo_u__DOT__mem_n[6U] = this->__PVT__valid_fifo_u__DOT__mem_q[6U];
    this->__PVT__valid_fifo_u__DOT__mem_n[7U] = this->__PVT__valid_fifo_u__DOT__mem_q[7U];
    this->__PVT__valid_fifo_u__DOT__mem_n[8U] = this->__PVT__valid_fifo_u__DOT__mem_q[8U];
    this->__PVT__valid_fifo_u__DOT__mem_n[9U] = this->__PVT__valid_fifo_u__DOT__mem_q[9U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xaU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xbU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xcU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xdU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xeU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xfU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__3\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__valid_fifo_pop = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_pop = 0U;
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_fifo_pop = 0U;
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            } else {
                this->__PVT__valid_fifo_pop = 0U;
            }
        }
    }
    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x117U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x117U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x117U) 
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
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_bus_valid = 1U;
        }
    } else {
        this->__PVT__req_bus_valid = 0U;
    }
    this->__PVT__stage_usage = (0x1ffffffffULL & ((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))));
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = ((0xfffffff0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & this->__Vcellout__grant_fifo_u__data_o[4U]));
    this->__PVT__grant_fifo_to_valid_fifo[5U] = ((0xfU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                     << 0x1cU) 
                                                                    | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                       >> 4U))) 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)) 
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
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0x7ffff0U 
                                                  & this->__Vcellout__grant_fifo_u__data_o[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [1U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_status_d = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
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
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((4ULL > (0x1ffffffffULL & (1ULL 
                                                + this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            this->__PVT__grant_fifo_status_d = ((2U 
                                                 == (IData)(this->__PVT__grant_fifo_status_q))
                                                 ? 
                                                ((4ULL 
                                                  > this->__PVT__stage_usage)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U);
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_addr = 0ULL;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  this->__PVT__req_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        this->memory_master_mem_addr = ((1U == (IData)(this->__PVT__grant_fifo_status_q))
                                         ? (((QData)((IData)(
                                                             this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              this->__PVT__req_reg__DOT__reg_data_q[2U])))
                                         : 0ULL);
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_req = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        this->memory_master_mem_req = ((1U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                       & (IData)(this->__PVT__req_bus_valid));
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_push = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_push = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        } else {
            this->__PVT__grant_fifo_push = 0U;
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__req_bus_ready = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__req_bus_ready = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__req_bus_ready = (4ULL 
                                              > (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + this->__PVT__stage_usage)));
            }
        } else {
            this->__PVT__req_bus_ready = ((2U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                          & (4ULL > this->__PVT__stage_usage));
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__mem_n[0U] = this->__PVT__grant_fifo_u__DOT__mem_q[0U];
    this->__PVT__grant_fifo_u__DOT__mem_n[1U] = this->__PVT__grant_fifo_u__DOT__mem_q[1U];
    this->__PVT__grant_fifo_u__DOT__mem_n[2U] = this->__PVT__grant_fifo_u__DOT__mem_q[2U];
    this->__PVT__grant_fifo_u__DOT__mem_n[3U] = this->__PVT__grant_fifo_u__DOT__mem_q[3U];
    this->__PVT__grant_fifo_u__DOT__mem_n[4U] = this->__PVT__grant_fifo_u__DOT__mem_q[4U];
    this->__PVT__grant_fifo_u__DOT__mem_n[5U] = this->__PVT__grant_fifo_u__DOT__mem_q[5U];
    this->__PVT__grant_fifo_u__DOT__mem_n[6U] = this->__PVT__grant_fifo_u__DOT__mem_q[6U];
    this->__PVT__grant_fifo_u__DOT__mem_n[7U] = this->__PVT__grant_fifo_u__DOT__mem_q[7U];
    this->__PVT__grant_fifo_u__DOT__mem_n[8U] = this->__PVT__grant_fifo_u__DOT__mem_q[8U];
    this->__PVT__grant_fifo_u__DOT__mem_n[9U] = this->__PVT__grant_fifo_u__DOT__mem_q[9U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xaU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xbU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xcU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xdU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xeU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xfU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__req_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__req_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__req_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__req_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__req_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__req_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__req_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__req_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__req_reg__DOT__reg_data_q[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__grant_fifo_pop = 0U;
        this->__PVT__valid_fifo_push = 0U;
        this->__PVT__valid_fifo_to_master[0U] = 0U;
        this->__PVT__valid_fifo_to_master[1U] = 0U;
        this->__PVT__valid_fifo_to_master[2U] = 0U;
        this->__PVT__valid_fifo_to_master[3U] = 0U;
        this->__PVT__valid_fifo_to_master[4U] = 0U;
        this->__PVT__valid_fifo_to_master[5U] = 0U;
        this->__PVT__valid_fifo_to_master[6U] = 0U;
        this->__PVT__valid_fifo_to_master[7U] = 0U;
        this->__PVT__valid_fifo_to_master[8U] = 0U;
        this->stage_master_valid = 0U;
        this->__PVT__valid_fifo_status_d = 0U;
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__grant_fifo_pop = 0U;
            this->__PVT__valid_fifo_push = 0U;
            this->__PVT__valid_fifo_to_master[0U] = 0U;
            this->__PVT__valid_fifo_to_master[1U] = 0U;
            this->__PVT__valid_fifo_to_master[2U] = 0U;
            this->__PVT__valid_fifo_to_master[3U] = 0U;
            this->__PVT__valid_fifo_to_master[4U] = 0U;
            this->__PVT__valid_fifo_to_master[5U] = 0U;
            this->__PVT__valid_fifo_to_master[6U] = 0U;
            this->__PVT__valid_fifo_to_master[7U] = 0U;
            this->__PVT__valid_fifo_to_master[8U] = 0U;
            this->stage_master_valid = 0U;
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [1U] | (0ULL != this->__PVT__valid_counter_q))) {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->stage_master_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [1U]
                                                  ? this->__PVT__valid_counter_q
                                                  : 
                                                 (this->__PVT__valid_counter_q 
                                                  - 1ULL)));
                    }
                }
            } else {
                if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->stage_master_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                           [1U] ? (1ULL 
                                                   + this->__PVT__valid_counter_q)
                                            : this->__PVT__valid_counter_q));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((3U & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x45bU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x45bU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x117U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x117U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [1U] | (0ULL != this->__PVT__valid_counter_q))) {
                        if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->walking_mem_master_mem_valid
                                    [1U] ? this->__PVT__valid_counter_q
                                     : (this->__PVT__valid_counter_q 
                                        - 1ULL)));
                        }
                    }
                } else {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [1U]
                                                  ? 
                                                 (1ULL 
                                                  + this->__PVT__valid_counter_q)
                                                  : this->__PVT__valid_counter_q));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0x7fffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x3fU 
                                                   & (((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->stage_master_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((3U & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            } else {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_fifo_status_d = 0U;
            }
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_reg__DOT__next_state = 
                (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                        & (IData)(this->__PVT__req_bus_ready)) 
                       | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                             & (IData)(this->__PVT__req_bus_ready)))));
        }
    } else {
        this->__PVT__req_reg__DOT__next_state = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    this->__PVT__req_reg__DOT__reg_data_d[0U] = this->__PVT__req_reg__DOT__reg_data_q[0U];
    this->__PVT__req_reg__DOT__reg_data_d[1U] = this->__PVT__req_reg__DOT__reg_data_q[1U];
    this->__PVT__req_reg__DOT__reg_data_d[2U] = this->__PVT__req_reg__DOT__reg_data_q[2U];
    this->__PVT__req_reg__DOT__reg_data_d[3U] = this->__PVT__req_reg__DOT__reg_data_q[3U];
    this->__PVT__req_reg__DOT__reg_data_d[4U] = this->__PVT__req_reg__DOT__reg_data_q[4U];
    this->__PVT__req_reg__DOT__reg_data_d[5U] = this->__PVT__req_reg__DOT__reg_data_q[5U];
    this->__PVT__req_reg__DOT__reg_data_d[6U] = this->__PVT__req_reg__DOT__reg_data_q[6U];
    this->__PVT__req_reg__DOT__reg_data_d[7U] = this->__PVT__req_reg__DOT__reg_data_q[7U];
    this->__PVT__req_reg__DOT__reg_data_d[8U] = this->__PVT__req_reg__DOT__reg_data_q[8U];
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & (IData)(this->__PVT__req_bus_ready))) {
                this->__PVT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                this->__PVT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                this->__PVT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                this->__PVT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                this->__PVT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                this->__PVT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                this->__PVT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                this->__PVT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                this->__PVT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            this->__PVT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            this->__PVT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            this->__PVT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            this->__PVT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            this->__PVT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            this->__PVT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            this->__PVT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            this->__PVT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            this->__PVT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->stage_slave_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & (IData)(this->__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & (IData)(this->__PVT__req_bus_ready))))) {
                    this->stage_slave_ready = 0U;
                }
            }
        }
    } else {
        this->stage_slave_ready = 1U;
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__mem_n[0U] = this->__PVT__valid_fifo_u__DOT__mem_q[0U];
    this->__PVT__valid_fifo_u__DOT__mem_n[1U] = this->__PVT__valid_fifo_u__DOT__mem_q[1U];
    this->__PVT__valid_fifo_u__DOT__mem_n[2U] = this->__PVT__valid_fifo_u__DOT__mem_q[2U];
    this->__PVT__valid_fifo_u__DOT__mem_n[3U] = this->__PVT__valid_fifo_u__DOT__mem_q[3U];
    this->__PVT__valid_fifo_u__DOT__mem_n[4U] = this->__PVT__valid_fifo_u__DOT__mem_q[4U];
    this->__PVT__valid_fifo_u__DOT__mem_n[5U] = this->__PVT__valid_fifo_u__DOT__mem_q[5U];
    this->__PVT__valid_fifo_u__DOT__mem_n[6U] = this->__PVT__valid_fifo_u__DOT__mem_q[6U];
    this->__PVT__valid_fifo_u__DOT__mem_n[7U] = this->__PVT__valid_fifo_u__DOT__mem_q[7U];
    this->__PVT__valid_fifo_u__DOT__mem_n[8U] = this->__PVT__valid_fifo_u__DOT__mem_q[8U];
    this->__PVT__valid_fifo_u__DOT__mem_n[9U] = this->__PVT__valid_fifo_u__DOT__mem_q[9U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xaU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xbU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xcU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xdU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xeU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xfU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__valid_fifo_pop = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_pop = 0U;
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_fifo_pop = 0U;
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            } else {
                this->__PVT__valid_fifo_pop = 0U;
            }
        }
    }
    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x117U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x117U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x117U) 
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
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_bus_valid = 1U;
        }
    } else {
        this->__PVT__req_bus_valid = 0U;
    }
    this->__PVT__stage_usage = (0x1ffffffffULL & ((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))));
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = ((0xfffffff0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & this->__Vcellout__grant_fifo_u__data_o[4U]));
    this->__PVT__grant_fifo_to_valid_fifo[5U] = ((0xfU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                     << 0x1cU) 
                                                                    | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                       >> 4U))) 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)) 
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
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0x7ffff0U 
                                                  & this->__Vcellout__grant_fifo_u__data_o[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [2U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_status_d = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
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
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((4ULL > (0x1ffffffffULL & (1ULL 
                                                + this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            this->__PVT__grant_fifo_status_d = ((2U 
                                                 == (IData)(this->__PVT__grant_fifo_status_q))
                                                 ? 
                                                ((4ULL 
                                                  > this->__PVT__stage_usage)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U);
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_addr = 0ULL;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  this->__PVT__req_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        this->memory_master_mem_addr = ((1U == (IData)(this->__PVT__grant_fifo_status_q))
                                         ? (((QData)((IData)(
                                                             this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              this->__PVT__req_reg__DOT__reg_data_q[2U])))
                                         : 0ULL);
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_req = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        this->memory_master_mem_req = ((1U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                       & (IData)(this->__PVT__req_bus_valid));
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_push = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_push = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        } else {
            this->__PVT__grant_fifo_push = 0U;
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__req_bus_ready = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__req_bus_ready = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__req_bus_ready = (4ULL 
                                              > (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + this->__PVT__stage_usage)));
            }
        } else {
            this->__PVT__req_bus_ready = ((2U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                          & (4ULL > this->__PVT__stage_usage));
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__mem_n[0U] = this->__PVT__grant_fifo_u__DOT__mem_q[0U];
    this->__PVT__grant_fifo_u__DOT__mem_n[1U] = this->__PVT__grant_fifo_u__DOT__mem_q[1U];
    this->__PVT__grant_fifo_u__DOT__mem_n[2U] = this->__PVT__grant_fifo_u__DOT__mem_q[2U];
    this->__PVT__grant_fifo_u__DOT__mem_n[3U] = this->__PVT__grant_fifo_u__DOT__mem_q[3U];
    this->__PVT__grant_fifo_u__DOT__mem_n[4U] = this->__PVT__grant_fifo_u__DOT__mem_q[4U];
    this->__PVT__grant_fifo_u__DOT__mem_n[5U] = this->__PVT__grant_fifo_u__DOT__mem_q[5U];
    this->__PVT__grant_fifo_u__DOT__mem_n[6U] = this->__PVT__grant_fifo_u__DOT__mem_q[6U];
    this->__PVT__grant_fifo_u__DOT__mem_n[7U] = this->__PVT__grant_fifo_u__DOT__mem_q[7U];
    this->__PVT__grant_fifo_u__DOT__mem_n[8U] = this->__PVT__grant_fifo_u__DOT__mem_q[8U];
    this->__PVT__grant_fifo_u__DOT__mem_n[9U] = this->__PVT__grant_fifo_u__DOT__mem_q[9U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xaU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xbU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xcU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xdU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xeU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xfU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__req_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__req_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__req_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__req_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__req_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__req_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__req_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__req_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__req_reg__DOT__reg_data_q[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__grant_fifo_pop = 0U;
        this->__PVT__valid_fifo_push = 0U;
        this->__PVT__valid_fifo_to_master[0U] = 0U;
        this->__PVT__valid_fifo_to_master[1U] = 0U;
        this->__PVT__valid_fifo_to_master[2U] = 0U;
        this->__PVT__valid_fifo_to_master[3U] = 0U;
        this->__PVT__valid_fifo_to_master[4U] = 0U;
        this->__PVT__valid_fifo_to_master[5U] = 0U;
        this->__PVT__valid_fifo_to_master[6U] = 0U;
        this->__PVT__valid_fifo_to_master[7U] = 0U;
        this->__PVT__valid_fifo_to_master[8U] = 0U;
        this->stage_master_valid = 0U;
        this->__PVT__valid_fifo_status_d = 0U;
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__grant_fifo_pop = 0U;
            this->__PVT__valid_fifo_push = 0U;
            this->__PVT__valid_fifo_to_master[0U] = 0U;
            this->__PVT__valid_fifo_to_master[1U] = 0U;
            this->__PVT__valid_fifo_to_master[2U] = 0U;
            this->__PVT__valid_fifo_to_master[3U] = 0U;
            this->__PVT__valid_fifo_to_master[4U] = 0U;
            this->__PVT__valid_fifo_to_master[5U] = 0U;
            this->__PVT__valid_fifo_to_master[6U] = 0U;
            this->__PVT__valid_fifo_to_master[7U] = 0U;
            this->__PVT__valid_fifo_to_master[8U] = 0U;
            this->stage_master_valid = 0U;
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [2U] | (0ULL != this->__PVT__valid_counter_q))) {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->stage_master_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [2U]
                                                  ? this->__PVT__valid_counter_q
                                                  : 
                                                 (this->__PVT__valid_counter_q 
                                                  - 1ULL)));
                    }
                }
            } else {
                if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->stage_master_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                           [2U] ? (1ULL 
                                                   + this->__PVT__valid_counter_q)
                                            : this->__PVT__valid_counter_q));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((3U & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x45bU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x45bU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x117U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x117U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [2U] | (0ULL != this->__PVT__valid_counter_q))) {
                        if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->walking_mem_master_mem_valid
                                    [2U] ? this->__PVT__valid_counter_q
                                     : (this->__PVT__valid_counter_q 
                                        - 1ULL)));
                        }
                    }
                } else {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [2U]
                                                  ? 
                                                 (1ULL 
                                                  + this->__PVT__valid_counter_q)
                                                  : this->__PVT__valid_counter_q));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0x7fffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x3fU 
                                                   & (((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->stage_master_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((3U & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            } else {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_fifo_status_d = 0U;
            }
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_reg__DOT__next_state = 
                (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                        & (IData)(this->__PVT__req_bus_ready)) 
                       | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                             & (IData)(this->__PVT__req_bus_ready)))));
        }
    } else {
        this->__PVT__req_reg__DOT__next_state = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    this->__PVT__req_reg__DOT__reg_data_d[0U] = this->__PVT__req_reg__DOT__reg_data_q[0U];
    this->__PVT__req_reg__DOT__reg_data_d[1U] = this->__PVT__req_reg__DOT__reg_data_q[1U];
    this->__PVT__req_reg__DOT__reg_data_d[2U] = this->__PVT__req_reg__DOT__reg_data_q[2U];
    this->__PVT__req_reg__DOT__reg_data_d[3U] = this->__PVT__req_reg__DOT__reg_data_q[3U];
    this->__PVT__req_reg__DOT__reg_data_d[4U] = this->__PVT__req_reg__DOT__reg_data_q[4U];
    this->__PVT__req_reg__DOT__reg_data_d[5U] = this->__PVT__req_reg__DOT__reg_data_q[5U];
    this->__PVT__req_reg__DOT__reg_data_d[6U] = this->__PVT__req_reg__DOT__reg_data_q[6U];
    this->__PVT__req_reg__DOT__reg_data_d[7U] = this->__PVT__req_reg__DOT__reg_data_q[7U];
    this->__PVT__req_reg__DOT__reg_data_d[8U] = this->__PVT__req_reg__DOT__reg_data_q[8U];
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & (IData)(this->__PVT__req_bus_ready))) {
                this->__PVT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                this->__PVT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                this->__PVT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                this->__PVT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                this->__PVT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                this->__PVT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                this->__PVT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                this->__PVT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                this->__PVT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            this->__PVT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            this->__PVT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            this->__PVT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            this->__PVT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            this->__PVT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            this->__PVT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            this->__PVT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            this->__PVT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            this->__PVT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->stage_slave_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & (IData)(this->__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & (IData)(this->__PVT__req_bus_ready))))) {
                    this->stage_slave_ready = 0U;
                }
            }
        }
    } else {
        this->stage_slave_ready = 1U;
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__mem_n[0U] = this->__PVT__valid_fifo_u__DOT__mem_q[0U];
    this->__PVT__valid_fifo_u__DOT__mem_n[1U] = this->__PVT__valid_fifo_u__DOT__mem_q[1U];
    this->__PVT__valid_fifo_u__DOT__mem_n[2U] = this->__PVT__valid_fifo_u__DOT__mem_q[2U];
    this->__PVT__valid_fifo_u__DOT__mem_n[3U] = this->__PVT__valid_fifo_u__DOT__mem_q[3U];
    this->__PVT__valid_fifo_u__DOT__mem_n[4U] = this->__PVT__valid_fifo_u__DOT__mem_q[4U];
    this->__PVT__valid_fifo_u__DOT__mem_n[5U] = this->__PVT__valid_fifo_u__DOT__mem_q[5U];
    this->__PVT__valid_fifo_u__DOT__mem_n[6U] = this->__PVT__valid_fifo_u__DOT__mem_q[6U];
    this->__PVT__valid_fifo_u__DOT__mem_n[7U] = this->__PVT__valid_fifo_u__DOT__mem_q[7U];
    this->__PVT__valid_fifo_u__DOT__mem_n[8U] = this->__PVT__valid_fifo_u__DOT__mem_q[8U];
    this->__PVT__valid_fifo_u__DOT__mem_n[9U] = this->__PVT__valid_fifo_u__DOT__mem_q[9U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xaU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xbU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xcU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xdU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xeU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xfU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__valid_fifo_pop = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_pop = 0U;
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_fifo_pop = 0U;
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            } else {
                this->__PVT__valid_fifo_pop = 0U;
            }
        }
    }
    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x117U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x117U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x117U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x117U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x117U) 
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
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_bus_valid = 1U;
        }
    } else {
        this->__PVT__req_bus_valid = 0U;
    }
    this->__PVT__stage_usage = (0x1ffffffffULL & ((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) 
                                                  + (QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))));
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = ((0xfffffff0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     << 4U)) 
                                                 | (0xfU 
                                                    & this->__Vcellout__grant_fifo_u__data_o[4U]));
    this->__PVT__grant_fifo_to_valid_fifo[5U] = ((0xfU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                               << 0x3cU) 
                                                              | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                  << 0x1cU) 
                                                                 | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                     << 0x1cU) 
                                                                    | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                       >> 4U))) 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[6U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[5U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                this->__Vcellout__grant_fifo_u__data_o[4U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)) 
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
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0x7ffff0U 
                                                  & this->__Vcellout__grant_fifo_u__data_o[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [3U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_status_d = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
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
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((4ULL > (0x1ffffffffULL & (1ULL 
                                                + this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            this->__PVT__grant_fifo_status_d = ((2U 
                                                 == (IData)(this->__PVT__grant_fifo_status_q))
                                                 ? 
                                                ((4ULL 
                                                  > this->__PVT__stage_usage)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U);
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_addr = 0ULL;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  this->__PVT__req_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        this->memory_master_mem_addr = ((1U == (IData)(this->__PVT__grant_fifo_status_q))
                                         ? (((QData)((IData)(
                                                             this->__PVT__req_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              this->__PVT__req_reg__DOT__reg_data_q[2U])))
                                         : 0ULL);
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->memory_master_mem_req = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        this->memory_master_mem_req = ((1U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                       & (IData)(this->__PVT__req_bus_valid));
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__grant_fifo_push = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_push = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        } else {
            this->__PVT__grant_fifo_push = 0U;
        }
    }
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        this->__PVT__req_bus_ready = 0U;
        if (((IData)(this->__PVT__req_bus_valid) & 
             (((4ULL > this->__PVT__stage_usage) & 
               (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
              & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((this->__PVT__req_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (this->__PVT__req_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__req_bus_ready = 0U;
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__req_bus_ready = (4ULL 
                                              > (0x1ffffffffULL 
                                                 & (1ULL 
                                                    + this->__PVT__stage_usage)));
            }
        } else {
            this->__PVT__req_bus_ready = ((2U == (IData)(this->__PVT__grant_fifo_status_q)) 
                                          & (4ULL > this->__PVT__stage_usage));
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__mem_n[0U] = this->__PVT__grant_fifo_u__DOT__mem_q[0U];
    this->__PVT__grant_fifo_u__DOT__mem_n[1U] = this->__PVT__grant_fifo_u__DOT__mem_q[1U];
    this->__PVT__grant_fifo_u__DOT__mem_n[2U] = this->__PVT__grant_fifo_u__DOT__mem_q[2U];
    this->__PVT__grant_fifo_u__DOT__mem_n[3U] = this->__PVT__grant_fifo_u__DOT__mem_q[3U];
    this->__PVT__grant_fifo_u__DOT__mem_n[4U] = this->__PVT__grant_fifo_u__DOT__mem_q[4U];
    this->__PVT__grant_fifo_u__DOT__mem_n[5U] = this->__PVT__grant_fifo_u__DOT__mem_q[5U];
    this->__PVT__grant_fifo_u__DOT__mem_n[6U] = this->__PVT__grant_fifo_u__DOT__mem_q[6U];
    this->__PVT__grant_fifo_u__DOT__mem_n[7U] = this->__PVT__grant_fifo_u__DOT__mem_q[7U];
    this->__PVT__grant_fifo_u__DOT__mem_n[8U] = this->__PVT__grant_fifo_u__DOT__mem_q[8U];
    this->__PVT__grant_fifo_u__DOT__mem_n[9U] = this->__PVT__grant_fifo_u__DOT__mem_q[9U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xaU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xbU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xcU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xdU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xeU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0xfU] = this->__PVT__grant_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__grant_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__grant_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__req_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__req_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__req_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__req_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__req_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__req_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__req_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__req_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__req_reg__DOT__reg_data_q[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        this->__PVT__grant_fifo_pop = 0U;
        this->__PVT__valid_fifo_push = 0U;
        this->__PVT__valid_fifo_to_master[0U] = 0U;
        this->__PVT__valid_fifo_to_master[1U] = 0U;
        this->__PVT__valid_fifo_to_master[2U] = 0U;
        this->__PVT__valid_fifo_to_master[3U] = 0U;
        this->__PVT__valid_fifo_to_master[4U] = 0U;
        this->__PVT__valid_fifo_to_master[5U] = 0U;
        this->__PVT__valid_fifo_to_master[6U] = 0U;
        this->__PVT__valid_fifo_to_master[7U] = 0U;
        this->__PVT__valid_fifo_to_master[8U] = 0U;
        this->stage_master_valid = 0U;
        this->__PVT__valid_fifo_status_d = 0U;
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__grant_fifo_pop = 0U;
            this->__PVT__valid_fifo_push = 0U;
            this->__PVT__valid_fifo_to_master[0U] = 0U;
            this->__PVT__valid_fifo_to_master[1U] = 0U;
            this->__PVT__valid_fifo_to_master[2U] = 0U;
            this->__PVT__valid_fifo_to_master[3U] = 0U;
            this->__PVT__valid_fifo_to_master[4U] = 0U;
            this->__PVT__valid_fifo_to_master[5U] = 0U;
            this->__PVT__valid_fifo_to_master[6U] = 0U;
            this->__PVT__valid_fifo_to_master[7U] = 0U;
            this->__PVT__valid_fifo_to_master[8U] = 0U;
            this->stage_master_valid = 0U;
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [3U] | (0ULL != this->__PVT__valid_counter_q))) {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->stage_master_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [3U]
                                                  ? this->__PVT__valid_counter_q
                                                  : 
                                                 (this->__PVT__valid_counter_q 
                                                  - 1ULL)));
                    }
                }
            } else {
                if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->stage_master_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                           [3U] ? (1ULL 
                                                   + this->__PVT__valid_counter_q)
                                            : this->__PVT__valid_counter_q));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((3U & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x45bU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x117U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x45bU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(0x117U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x117U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x117U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x117U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x117U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [3U] | (0ULL != this->__PVT__valid_counter_q))) {
                        if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->walking_mem_master_mem_valid
                                    [3U] ? this->__PVT__valid_counter_q
                                     : (this->__PVT__valid_counter_q 
                                        - 1ULL)));
                        }
                    }
                } else {
                    if (((4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x1ffffffffULL & (vlTOPp->walking_mem_master_mem_valid
                                                 [3U]
                                                  ? 
                                                 (1ULL 
                                                  + this->__PVT__valid_counter_q)
                                                  : this->__PVT__valid_counter_q));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x45bU >= (0x7ffU & ((IData)(0x117U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x117U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x117U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x117U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0x7fffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x117U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x3fU 
                                                   & (((IData)(0x117U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x117U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->stage_master_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((3U & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            } else {
                this->__PVT__grant_fifo_pop = 0U;
                this->__PVT__valid_fifo_push = 0U;
                this->__PVT__valid_fifo_to_master[0U] = 0U;
                this->__PVT__valid_fifo_to_master[1U] = 0U;
                this->__PVT__valid_fifo_to_master[2U] = 0U;
                this->__PVT__valid_fifo_to_master[3U] = 0U;
                this->__PVT__valid_fifo_to_master[4U] = 0U;
                this->__PVT__valid_fifo_to_master[5U] = 0U;
                this->__PVT__valid_fifo_to_master[6U] = 0U;
                this->__PVT__valid_fifo_to_master[7U] = 0U;
                this->__PVT__valid_fifo_to_master[8U] = 0U;
                this->stage_master_valid = 0U;
                this->__PVT__valid_fifo_status_d = 0U;
            }
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->__PVT__req_reg__DOT__next_state = 
                (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                        & (IData)(this->__PVT__req_bus_ready)) 
                       | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                             & (IData)(this->__PVT__req_bus_ready)))));
        }
    } else {
        this->__PVT__req_reg__DOT__next_state = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    this->__PVT__req_reg__DOT__reg_data_d[0U] = this->__PVT__req_reg__DOT__reg_data_q[0U];
    this->__PVT__req_reg__DOT__reg_data_d[1U] = this->__PVT__req_reg__DOT__reg_data_q[1U];
    this->__PVT__req_reg__DOT__reg_data_d[2U] = this->__PVT__req_reg__DOT__reg_data_q[2U];
    this->__PVT__req_reg__DOT__reg_data_d[3U] = this->__PVT__req_reg__DOT__reg_data_q[3U];
    this->__PVT__req_reg__DOT__reg_data_d[4U] = this->__PVT__req_reg__DOT__reg_data_q[4U];
    this->__PVT__req_reg__DOT__reg_data_d[5U] = this->__PVT__req_reg__DOT__reg_data_q[5U];
    this->__PVT__req_reg__DOT__reg_data_d[6U] = this->__PVT__req_reg__DOT__reg_data_q[6U];
    this->__PVT__req_reg__DOT__reg_data_d[7U] = this->__PVT__req_reg__DOT__reg_data_q[7U];
    this->__PVT__req_reg__DOT__reg_data_d[8U] = this->__PVT__req_reg__DOT__reg_data_q[8U];
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & (IData)(this->__PVT__req_bus_ready))) {
                this->__PVT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                this->__PVT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                this->__PVT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                this->__PVT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                this->__PVT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                this->__PVT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                this->__PVT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                this->__PVT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                this->__PVT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            this->__PVT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            this->__PVT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            this->__PVT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            this->__PVT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            this->__PVT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            this->__PVT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            this->__PVT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            this->__PVT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            this->__PVT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (this->__PVT__req_reg__DOT__current_state) {
        if (this->__PVT__req_reg__DOT__current_state) {
            this->stage_slave_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & (IData)(this->__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & (IData)(this->__PVT__req_bus_ready))))) {
                    this->stage_slave_ready = 0U;
                }
            }
        }
    } else {
        this->stage_slave_ready = 1U;
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (4U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (4U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__mem_n[0U] = this->__PVT__valid_fifo_u__DOT__mem_q[0U];
    this->__PVT__valid_fifo_u__DOT__mem_n[1U] = this->__PVT__valid_fifo_u__DOT__mem_q[1U];
    this->__PVT__valid_fifo_u__DOT__mem_n[2U] = this->__PVT__valid_fifo_u__DOT__mem_q[2U];
    this->__PVT__valid_fifo_u__DOT__mem_n[3U] = this->__PVT__valid_fifo_u__DOT__mem_q[3U];
    this->__PVT__valid_fifo_u__DOT__mem_n[4U] = this->__PVT__valid_fifo_u__DOT__mem_q[4U];
    this->__PVT__valid_fifo_u__DOT__mem_n[5U] = this->__PVT__valid_fifo_u__DOT__mem_q[5U];
    this->__PVT__valid_fifo_u__DOT__mem_n[6U] = this->__PVT__valid_fifo_u__DOT__mem_q[6U];
    this->__PVT__valid_fifo_u__DOT__mem_n[7U] = this->__PVT__valid_fifo_u__DOT__mem_q[7U];
    this->__PVT__valid_fifo_u__DOT__mem_n[8U] = this->__PVT__valid_fifo_u__DOT__mem_q[8U];
    this->__PVT__valid_fifo_u__DOT__mem_n[9U] = this->__PVT__valid_fifo_u__DOT__mem_q[9U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xaU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xaU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xbU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xbU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xcU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xcU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xdU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xdU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xeU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xeU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0xfU] = this->__PVT__valid_fifo_u__DOT__mem_q[0xfU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x10U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x10U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x11U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x11U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x12U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x12U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x13U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x13U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x14U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x14U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x15U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x15U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x16U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x16U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x17U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x17U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x18U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x18U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x19U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x19U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1aU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1aU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1bU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1bU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1cU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1cU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1dU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1dU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1eU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1eU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x1fU] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x1fU];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x20U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x20U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x21U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x21U];
    this->__PVT__valid_fifo_u__DOT__mem_n[0x22U] = 
        this->__PVT__valid_fifo_u__DOT__mem_q[0x22U];
    if (((IData)(this->__PVT__valid_fifo_push) & (4U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x45bU >= (0x7ffU & ((IData)(0x117U) * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(279,(0x7ffU & ((IData)(0x117U) 
                                             * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top_memory_read_stage__pi6::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi6::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, stage_slave_data);
    stage_slave_valid = VL_RAND_RESET_I(1);
    stage_slave_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, stage_master_data);
    stage_master_valid = VL_RAND_RESET_I(1);
    stage_master_ready = VL_RAND_RESET_I(1);
    memory_master_mem_req = VL_RAND_RESET_I(1);
    memory_master_mem_gnt = VL_RAND_RESET_I(1);
    memory_master_mem_valid = VL_RAND_RESET_I(1);
    memory_master_mem_addr = VL_RAND_RESET_Q(64);
    memory_master_mem_rdata = VL_RAND_RESET_Q(64);
    __PVT__memory_master_mem_wdata = VL_RAND_RESET_Q(64);
    __PVT__memory_master_mem_we = VL_RAND_RESET_I(1);
    __PVT__memory_master_mem_be = VL_RAND_RESET_I(8);
    memory_master_mem_error = VL_RAND_RESET_I(1);
    __PVT__req_bus_valid = VL_RAND_RESET_I(1);
    __PVT__req_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, __PVT__grant_fifo_to_valid_fifo);
    VL_RAND_RESET_W(279, __PVT__valid_fifo_to_master);
    __PVT__valid_do_walk = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_push = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_push = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__valid_counter_q = VL_RAND_RESET_Q(33);
    __PVT__valid_counter_d = VL_RAND_RESET_Q(33);
    __PVT__stage_usage = VL_RAND_RESET_Q(33);
    __PVT__grant_fifo_status_q = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_status_d = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_status_q = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_status_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(279, __Vcellout__grant_fifo_u__data_o);
    __PVT__req_reg__DOT__current_state = VL_RAND_RESET_I(1);
    __PVT__req_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, __PVT__req_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, __PVT__req_reg__DOT__reg_data_d);
    __PVT__req_reg__DOT__dummy = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(1116, __PVT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(1116, __PVT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(279, grant_fifo_u__DOT____Vlvbound1);
    __PVT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(1116, __PVT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(1116, __PVT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(279, valid_fifo_u__DOT____Vlvbound1);
}
