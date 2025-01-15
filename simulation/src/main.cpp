#include <stdio.h>
#include <stdlib.h>

#include "sim.hpp"

int main(int argc, char **argv){

	uut_t mtt;
	uut_init(&mtt);

    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");
    for(int i = 0; i < SIM_CYCLES; i++){
        // Change your signals here
        uut_eval(&mtt);

		mtt.mod->ptw_enable_i = 1;
		// Current test:
		// 1) reserved mmpt mode bits used
		// 2) access allowed 

		/*
		if (i == 5){
			mtt.mod->mmpt_reg_i = 0x1040000000000000;
			mtt.mod->addr_valid_i = 1;
			mtt.mod->access_type_i = 1; // ACCESS_READ
		}
		*/

		// Reserved mmpt mode bits used
		
		if (i == 5){
			mtt.mod->mmpt_reg_i = 0xF040000000000000;
			mtt.mod->addr_valid_i = 1;
			mtt.mod->access_type_i = 1; // ACCESS_READ
		}
		

	/*
		// Access page fault
		if (i == 5){
			mtt.mod->mmpt_reg_i = 0x1040000000000000;
			mtt.mod->addr_valid_i = 1;
			mtt.mod->access_type_i = 3; // ACCESS_EXEC
		}
	*/


		if (i == 6) mtt.mod->addr_valid_i = 0;

		// Change mppt value
		if (i == 7) {
			mtt.mod->mmpt_reg_i = 0x1F00000000000000;
			mtt.mod->access_type_i = 1; // ACCESS_READ
			mtt.mod->addr_valid_i = 1;
		}

		if (i==10) {
			mtt.mod->addr_valid_i = 0;
			mtt.mod->flush_i=1;
		}
		if (i==11) mtt.mod->flush_i=0;
    }

	// Stop Simulation
	printf("\n[Sim::Cycle::%08lu] Simulation completed\n", mtt.clkcnt);
	printf("[Sim::Cycle::%08lu] Press any key to exit\n", mtt.clkcnt);
	getchar();

	// Free Area
	uut_destroy(&mtt);

}
