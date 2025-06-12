#ifndef SIM
#define SIM

// Dependencies from Verilator
#include "Vmptw_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define CLK_HALF_PERIOD 10
#define SIM_CYCLES 300000

struct uut_t {
	Vmptw_top * 	mod;
	VerilatedVcdC * trace;
	uint64_t		clkcnt;
};

void uut_init(uut_t * uut);
void uut_cycle(uut_t * uut);
void uut_tick(uut_t * uut);
void uut_eval(uut_t * uut);
void uut_destroy(uut_t * uut);

#endif