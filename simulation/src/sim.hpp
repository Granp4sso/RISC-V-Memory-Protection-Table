#ifndef SIM
#define SIM

//TEST vmem
#include "vmem.h"
#include "logger.h"

// Dependencies from Verilator
#include "Vmtt_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"



#define CLK_HALF_PERIOD 10
#define SIM_CYCLES 300


struct uut_t {
    Vmtt_top *     mod;
	VerilatedVcdC * trace;
	uint64_t		clkcnt;
	vmem_t       vRAM;
};

void uut_init(uut_t * uut);
void uut_cycle(uut_t * uut);
void uut_tick(uut_t * uut);
void uut_eval(uut_t * uut);
void uut_destroy(uut_t * uut);

#endif