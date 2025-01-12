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
    }

	// Stop Simulation
	printf("\n[Sim::Cycle::%08lu] Simulation completed\n", mtt.clkcnt);
	printf("[Sim::Cycle::%08lu] Press any key to exit\n", mtt.clkcnt);
	getchar();

	// Free Area
	uut_destroy(&mtt);

}