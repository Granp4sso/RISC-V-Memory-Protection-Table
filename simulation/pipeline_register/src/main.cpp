#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "sim.hpp"


int main(int argc, char **argv) {

    uut_t uut;
    uut_init(&uut);


    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");

    // Master starts always ready
    uut.mod->m_data_ready = 1;

    // Run Simulation
    for (int i = 0; i < SIM_CYCLES; i++) {
        uut_eval(&uut);
        switch (i) {
            case 0:
            break;
            case 1:
                uut.mod->s_data_valid = 1;
                uut.mod->s_data_rdata = i+1;
            break;
            case 2:
                uut.mod->s_data_valid = 1;
                uut.mod->s_data_rdata = i+1;
                uut.mod->s_ctrl_stall = 1;
            break;
            case 12:
                uut.mod->s_ctrl_stall = 0;
            break;
            case 13:
                uut.mod->s_data_valid = 0;
                uut.mod->s_data_rdata = 0;
            break;
            case 14:
                uut.mod->s_data_valid = 1;
                uut.mod->s_data_rdata = i+1;
                uut.mod->s_ctrl_flush = 1;
            break;
            case 15:
                uut.mod->s_data_valid = 1;
                uut.mod->s_data_rdata = i+1;
                uut.mod->m_data_ready = 0;
                uut.mod->s_ctrl_flush = 0;
            break;
            case 20:
                uut.mod->m_data_ready = 1;
            break;
            case 21:
                uut.mod->s_data_valid = 0;
                uut.mod->s_data_rdata = 0;
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
