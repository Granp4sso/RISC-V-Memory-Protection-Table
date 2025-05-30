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
        // Cache memory is always active
        uut.mod->plb_cache_mem_gnt = 1;
        switch (i) {
            case 2:
                // First Transaction
                uut.mod->mptw_transaction_valid_i = 1;
                uut.mod->mmpt_reg_i = 0x1111111111111111;
                uut.mod->spa_i = 0x1111111111111111;
                uut.mod->access_type_i = 0x7;   
            break;

            case 3:
                // Second Transaction
                uut.mod->mptw_transaction_valid_i = 1;
                uut.mod->mmpt_reg_i = 0x2222222222222222;
                uut.mod->spa_i = 0x2222222222222222;
                uut.mod->access_type_i = 0x7;     
            break;

            case 4:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   
                uut.mod->plb_cache_mem_valid = 1;
                uut.mod->plb_cache_mem_rdata = 1;
            break;

            case 5:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   

                uut.mod->plb_cache_mem_valid = 1;
                uut.mod->plb_cache_mem_rdata = 1;
            break;

            case 6:
                uut.mod->mptw_transaction_valid_i = 1;
                uut.mod->mmpt_reg_i = 0x3333333333333333;
                uut.mod->spa_i = 0x3333333333333333;
                uut.mod->access_type_i = 0x7;     

                uut.mod->plb_cache_mem_valid = 0;
                uut.mod->plb_cache_mem_rdata = 0;
            break;

            case 7:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   

                uut.mod->plb_cache_mem_valid = 0;
                uut.mod->plb_cache_mem_rdata = 0;
            break;

            case 8:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   

                uut.mod->plb_cache_mem_valid = 1;
                uut.mod->plb_cache_mem_rdata = 1;
            break;

            case 9:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   

                uut.mod->plb_cache_mem_valid = 0;
                uut.mod->plb_cache_mem_rdata = 0;
            break;

            case 10:
                uut.mod->mptw_transaction_valid_i = 0;
                uut.mod->mmpt_reg_i = 0;
                uut.mod->spa_i = 0;
                uut.mod->access_type_i = 0;   

                uut.mod->plb_cache_mem_valid = 0;
                uut.mod->plb_cache_mem_rdata = 0;
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
