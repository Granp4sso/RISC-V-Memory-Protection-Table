#include "sim.hpp"

void uut_init(uut_t * uut){

    // Create module and testbench
    uut->mod = new Vmtt_top();
    uut->trace = new VerilatedVcdC();
    uut->clkcnt = 0;

	// Generate trace.vcd file
	Verilated::traceEverOn(true);
	printf("[tb\t] Trace generation ON\n");
	uut->mod->trace(uut->trace,99);
	uut->trace->open("waves/trace.vcd");

}

void uut_cycle(uut_t * uut){

    // During the first clock cycle, reset the device
    if(!uut->clkcnt) uut->mod->rst_ni = 0;
	else{
		uut->mod->rst_ni = 1;
		
		// Add fixed signals here (if any)
		uut->mod->paddr_i=0xFFFFFFFFFFFFFFFF;
		uut->mod->flush_i = uut->flush_i;
		uut->mod->ptw_enable_i = uut->ptw_enable_i;
		uut->mod->addr_valid_i = uut->addr_valid_i;
	}
}

void uut_tick(uut_t * uut){

    uut->clkcnt++;
    uint64_t tickcount = uut->clkcnt++;

	uut->mod->eval();
	if(uut->trace) //dump 2ns before the tick
		uut->trace->dump(tickcount*CLK_HALF_PERIOD - 1);
	uut->mod->clk_i = 1;

	uut->mod->eval();
	if(uut->trace) //Tick every CLK_HALF_PERIOD
		uut->trace->dump(tickcount*CLK_HALF_PERIOD);
	uut->mod->clk_i = 0;

	uut->mod->eval();
	if(uut->trace){ //Trailing edge dump
		uut->trace->dump(tickcount*CLK_HALF_PERIOD+CLK_HALF_PERIOD);
		uut->trace->flush();
	}


}

void uut_eval(uut_t * uut){

	uut_cycle(uut);
    uut_tick(uut);
}

void uut_destroy(uut_t * uut){

	delete uut->mod;
	delete uut->trace;
}