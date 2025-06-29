#include "sim.hpp"


void uut_init( uut_t * uut, const char * wave_path ){

	bool trace_gen;
	/*if(strcmp(wave_path,"NONE")) trace_gen = false;
	else trace_gen = true;*/
	trace_gen = true;

    // Create module and testbench

	uut->mod = new Vmptw_top();

    uut->trace = (trace_gen) ? new VerilatedVcdC() : nullptr;
    uut->clkcnt = 0;

	// Generate trace.vcd file
	if(trace_gen){
		printf("[tb\t] Trace generation ON\n");
		Verilated::traceEverOn(true);
		uut->mod->trace(uut->trace,99);
		uut->trace->open(wave_path);
	} else {
		printf("[tb\t] Trace generation OFF\n");
	}

}

void uut_cycle(uut_t * uut){

    // During the first clock cycle, reset the device
    if(!uut->clkcnt) uut->mod->rst_ni = 0;
	else{
		uut->mod->rst_ni = 1;

		// Add fixed signals here (if any)
	}
}

void uut_tick(uut_t * uut){

    uut->clkcnt++;
    uint64_t tickcount = uut->clkcnt++;


	uut->mod->eval();
	if(uut->trace) //dump 2ns before the tick
		uut->trace->dump(tickcount*CLK_HALF_PERIOD - CLK_HALF_PERIOD*0.90);
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

void uut_half_eval(uut_t * uut, int clk_value){
	uut->mod->eval();
	uut_cycle(uut);
    uut->mod->clk_i = clk_value;
}

void uut_destroy(uut_t * uut){
	delete uut->mod;
	delete uut->trace;
}