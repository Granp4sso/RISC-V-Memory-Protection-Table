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

	//TEST vmem
	vmem_init(&uut->vRAM, 1000000, 1, 1);
}

void uut_cycle(uut_t * uut){

    // During the first clock cycle, reset the device
    if(!uut->clkcnt) uut->mod->rst_ni = 0;
	else{
		uut->mod->rst_ni = 1;
		vmem_protocol (&uut->vRAM, uut->mod);

		// Add fixed signals here (if any)
		uut->mod->m_mem_gnt=1;
		uut->mod->m_mem_be=0xFF;

		//uut->mod->mmpt_reg_i = 0x1040000000000000; //MODE = 46, SDID = 1, PPN = 0
								
		// 0000 0000 00.00 0000 0000 0000 0000 001.0 0000 0001 1111 1111 1111 1111 
		//		PN3				PN2					PN1		    PN0      OFFSET
		//  0	 0	   0	0	 0	  0	   0    2     0    1     F	  F	  F	   F
		uut->mod->spa_i=0x0000000201FFFF; //PN3 = 0, PN2 = 1,  PN1 = 1, PN0 = F
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
	vmem_free(&uut->vRAM);
}