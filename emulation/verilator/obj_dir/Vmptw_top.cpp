// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmptw_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmptw_top::Vmptw_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmptw_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , flush_all_i{vlSymsp->TOP.flush_all_i}
    , flush_spec_i{vlSymsp->TOP.flush_spec_i}
    , stall_i{vlSymsp->TOP.stall_i}
    , busy_o{vlSymsp->TOP.busy_o}
    , stalled_o{vlSymsp->TOP.stalled_o}
    , access_type_i{vlSymsp->TOP.access_type_i}
    , speculative_i{vlSymsp->TOP.speculative_i}
    , mptw_transaction_valid_i{vlSymsp->TOP.mptw_transaction_valid_i}
    , mptw_ready_o{vlSymsp->TOP.mptw_ready_o}
    , mptw_result_valid_o{vlSymsp->TOP.mptw_result_valid_o}
    , access_page_fault_o{vlSymsp->TOP.access_page_fault_o}
    , format_error_o{vlSymsp->TOP.format_error_o}
    , plb_master_mem_req{vlSymsp->TOP.plb_master_mem_req}
    , plb_master_mem_gnt{vlSymsp->TOP.plb_master_mem_gnt}
    , plb_master_mem_valid{vlSymsp->TOP.plb_master_mem_valid}
    , plb_master_mem_we{vlSymsp->TOP.plb_master_mem_we}
    , plb_master_mem_be{vlSymsp->TOP.plb_master_mem_be}
    , plb_master_mem_error{vlSymsp->TOP.plb_master_mem_error}
    , spa_i{vlSymsp->TOP.spa_i}
    , mmpt_reg_i{vlSymsp->TOP.mmpt_reg_i}
    , plb_entry_o{vlSymsp->TOP.plb_entry_o}
    , plb_master_mem_addr{vlSymsp->TOP.plb_master_mem_addr}
    , plb_master_mem_rdata{vlSymsp->TOP.plb_master_mem_rdata}
    , plb_master_mem_wdata{vlSymsp->TOP.plb_master_mem_wdata}
    , walking_mem_master_mem_req{vlSymsp->TOP.walking_mem_master_mem_req}
    , walking_mem_master_mem_gnt{vlSymsp->TOP.walking_mem_master_mem_gnt}
    , walking_mem_master_mem_valid{vlSymsp->TOP.walking_mem_master_mem_valid}
    , walking_mem_master_mem_addr{vlSymsp->TOP.walking_mem_master_mem_addr}
    , walking_mem_master_mem_rdata{vlSymsp->TOP.walking_mem_master_mem_rdata}
    , walking_mem_master_mem_wdata{vlSymsp->TOP.walking_mem_master_mem_wdata}
    , walking_mem_master_mem_we{vlSymsp->TOP.walking_mem_master_mem_we}
    , walking_mem_master_mem_be{vlSymsp->TOP.walking_mem_master_mem_be}
    , walking_mem_master_mem_error{vlSymsp->TOP.walking_mem_master_mem_error}
    , __PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u{vlSymsp->TOP.__PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u}
    , __PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u{vlSymsp->TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u}
    , __PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u{vlSymsp->TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u}
    , __PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u{vlSymsp->TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u}
    , __PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u{vlSymsp->TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmptw_top::Vmptw_top(const char* _vcname__)
    : Vmptw_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmptw_top::~Vmptw_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmptw_top___024root___eval_debug_assertions(Vmptw_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmptw_top___024root___eval_static(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___eval_initial(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___eval_settle(Vmptw_top___024root* vlSelf);
void Vmptw_top___024root___eval(Vmptw_top___024root* vlSelf);

void Vmptw_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmptw_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmptw_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmptw_top___024root___eval_static(&(vlSymsp->TOP));
        Vmptw_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmptw_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmptw_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmptw_top::eventsPending() { return false; }

uint64_t Vmptw_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmptw_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmptw_top___024root___eval_final(Vmptw_top___024root* vlSelf);

VL_ATTR_COLD void Vmptw_top::final() {
    Vmptw_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmptw_top::hierName() const { return vlSymsp->name(); }
const char* Vmptw_top::modelName() const { return "Vmptw_top"; }
unsigned Vmptw_top::threads() const { return 1; }
void Vmptw_top::prepareClone() const { contextp()->prepareClone(); }
void Vmptw_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmptw_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmptw_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmptw_top___024root__trace_init_top(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmptw_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmptw_top___024root*>(voidSelf);
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmptw_top___024root__trace_decl_types(tracep);
    Vmptw_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmptw_top___024root__trace_register(Vmptw_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmptw_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmptw_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmptw_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
