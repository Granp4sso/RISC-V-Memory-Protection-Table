#ifndef SIM
#define SIM

// Dependencies from Verilator
#include "Vmptw_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define CLK_HALF_PERIOD 10

struct uut_t {
    Vmptw_top* mod;
    VerilatedVcdC* trace;
    uint64_t clkcnt;

    // clkcnt
    uint64_t get_clkcnt() const { return clkcnt; }
    void set_clkcnt(uint64_t v) { clkcnt = v; }

    // scalar signals
    uint64_t get_access_type_i() const { return mod->access_type_i; }
    void set_access_type_i(uint64_t v) { mod->access_type_i = v; }

    uint8_t get_flush_all_i() const { return mod->flush_all_i; }
    void set_flush_all_i(uint8_t v) { mod->flush_all_i = v; }

    uint64_t get_mmpt_reg_i() const { return mod->mmpt_reg_i; }
    void set_mmpt_reg_i(uint64_t v) { mod->mmpt_reg_i = v; }

    uint8_t get_mptw_ready_o() const { return mod->mptw_ready_o; }
    uint8_t get_mptw_result_valid_o() const { return mod->mptw_result_valid_o; }

    uint8_t get_mptw_transaction_valid_i() const { return mod->mptw_transaction_valid_i; }
    void set_mptw_transaction_valid_i(uint8_t v) { mod->mptw_transaction_valid_i = v; }

    uint64_t get_plb_master_mem_addr() const { return mod->plb_master_mem_addr; }
    void set_plb_master_mem_addr(uint64_t v) { mod->plb_master_mem_addr = v; }

    uint8_t get_plb_master_mem_gnt() const { return mod->plb_master_mem_gnt; }
    void set_plb_master_mem_gnt(uint8_t v) { mod->plb_master_mem_gnt = v; }

    uint8_t get_plb_master_mem_req() const { return mod->plb_master_mem_req; }
    void set_plb_master_mem_req(uint8_t v) { mod->plb_master_mem_req = v; }

    uint64_t get_plb_master_mem_rdata() const { return mod->plb_master_mem_rdata; }
    void set_plb_master_mem_rdata(uint64_t v) { mod->plb_master_mem_rdata = v; }

    uint8_t get_plb_master_mem_valid() const { return mod->plb_master_mem_valid; }
    void set_plb_master_mem_valid(uint8_t v) { mod->plb_master_mem_valid = v; }

    uint8_t get_rst_ni() const { return mod->rst_ni; }
    void set_rst_ni(uint8_t v) { mod->rst_ni = v; }

    uint8_t get_spa_i() const { return mod->spa_i; }
    void set_spa_i(uint64_t v) { mod->spa_i = v; }

    uint8_t get_speculative_i() const { return mod->speculative_i; }
    void set_speculative_i(uint8_t v) { mod->speculative_i = v; }

    // array-based signals (walking_mem_master_*)
    uint64_t get_walking_mem_master_mem_addr(int i) const { return mod->walking_mem_master_mem_addr[i]; }
    void set_walking_mem_master_mem_addr(int i, uint64_t v) { mod->walking_mem_master_mem_addr[i] = v; }

    uint8_t get_walking_mem_master_mem_gnt(int i) const { return mod->walking_mem_master_mem_gnt[i]; }
    void set_walking_mem_master_mem_gnt(int i, uint8_t v) { mod->walking_mem_master_mem_gnt[i] = v; }

    uint8_t get_walking_mem_master_mem_valid(int i) const { return mod->walking_mem_master_mem_valid[i]; }
    void set_walking_mem_master_mem_valid(int i, uint8_t v) { mod->walking_mem_master_mem_valid[i] = v; }

    uint64_t get_walking_mem_master_mem_rdata(int i) const { return mod->walking_mem_master_mem_rdata[i]; }
    void set_walking_mem_master_mem_rdata(int i, uint64_t v) { mod->walking_mem_master_mem_rdata[i] = v; }

    uint8_t get_walking_mem_master_mem_req(int i) const { return mod->walking_mem_master_mem_req[i]; }
    void set_walking_mem_master_mem_req(int i, uint8_t v) { mod->walking_mem_master_mem_req[i] = v; }

	uint64_t get_plb_entry_o() const { return mod->plb_entry_o; }
};


void uut_init( uut_t * uut, const char * wave_path );
void uut_cycle(uut_t * uut);
void uut_tick(uut_t * uut);
void uut_eval(uut_t * uut);
void uut_half_eval(uut_t * uut, int clk_value);
void uut_destroy(uut_t * uut);

#endif