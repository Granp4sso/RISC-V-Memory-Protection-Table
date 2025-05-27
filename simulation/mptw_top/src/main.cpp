#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "sim.hpp"


int main(int argc, char **argv) {

    uut_t uut;
    uut_init(&uut);

    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");

    // Run Simulation
    for (int i = 0; i < SIM_CYCLES; i++) {
        uut_eval(&uut);
        switch (i) {
            case 4:
                uut.mod->mptw_transaction_valid_i = 1;
                uut.mod->mmpt_reg_i = 0xffffffffffffffff;
                uut.mod->spa_i = 0xaaaaaaaaaaaaaaaa;
                uut.mod->access_type_i = 0x7;   
            break;

            case 5:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   
            break;
            
        }
    }

    // Stop Simulation
    printf("\n[Sim::Cycle::%08lu] Simulation completed\n", uut.clkcnt);
    printf("[Sim::Cycle::%08lu] Press any key to exit\n", uut.clkcnt);
    getchar();

    // Free Area
    uut_destroy(&uut);
}
