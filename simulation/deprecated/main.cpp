#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "sim.hpp"

#define PLB_PORTS_NUM 1
#define MEM_PORTS_NUM 3

#define BACK_TO_BACK 0

#define TRANSACTION_NUM 2
#define TRANSACTION_RANDOM_FACTOR 1
#define PLB_GRANT_RANDOM_FACTOR 1
#define PLB_VALID_RANDOM_FACTOR 1
#define MEM_GRANT_RANDOM_FACTOR 1
#define MEM_VALID_RANDOM_FACTOR 1

const uint32_t TOT_PORTS_NUM = PLB_PORTS_NUM + MEM_PORTS_NUM;

struct transaction_t {
    uint8_t valid;
    uint64_t data;
};

int event_tab[3*TOT_PORTS_NUM][TRANSACTION_NUM]; // REQ, GRANT, VALID
uint32_t transaction_counter;
uint32_t transaction_spec_counter;

void gen_transaction( transaction_t * transaction, uint8_t mptw_ready, uint32_t random_factor );
void print_event();
/*void req_cnt_update( uint8_t port_id, uint8_t * req );
void gen_memory_grant( uint8_t port_id, uint8_t * grant , uint8_t * req, uint32_t random_factor );
void gen_memory_valid( uint8_t port_id, uint8_t * valid, uint64_t * rdata, uint32_t random_factor );*/

int main(int argc, char **argv) {

    
    uut_t uut;

    transaction_t transaction;
    uint8_t mptw_ready;

    uint8_t grant[TOT_PORTS_NUM];
    uint8_t valid[TOT_PORTS_NUM];
    uint64_t rdata[TOT_PORTS_NUM];
    uint8_t req[TOT_PORTS_NUM];


    uint32_t random_seed;

    srand(time(NULL));

    int ending_clock_cycle = 0;

    transaction_counter = TRANSACTION_NUM;
    transaction_spec_counter = 0;

    for( int i = 0; i < 3*TOT_PORTS_NUM; i++ ){
        for( int j = 0; j < TRANSACTION_NUM; j++ ){
            event_tab[i][j] = 0;
        }
    }

    uut_init(&uut);

    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");

    uut.mod->plb_master_mem_gnt = 0;
    // Run Simulation
    for (int i = 0; i < SIM_CYCLES; i++) {
        uut_eval(&uut);

        mptw_ready = uut.mod->mptw_ready_o;
        transaction.data = 0;
        transaction.valid = 0;
        
        if( i > 2 ) {

            // Generate Input Transaction
            gen_transaction(&transaction, mptw_ready, TRANSACTION_RANDOM_FACTOR);

            // Assign Transaction
            uut.mod->mptw_transaction_valid_i = transaction.valid;
            uut.mod->mmpt_reg_i = transaction.data;
            uut.mod->spa_i = transaction.data;
            uut.mod->access_type_i = 0x7; 

            print_event();

            // Handle Event Tab
            for( int j = 0; j < 3*TOT_PORTS_NUM; j++ ){
                for( int t = 0; t < TRANSACTION_NUM; t++ ){

                        //////////////
                        // Requests //
                        //////////////
                        
                        if( t == 0 || event_tab[j][t-1] ) {
                            if( j == 0 ){ // PLB ports
                                // Request Just happened
                                if( uut.mod->plb_master_mem_req && !event_tab[j][t] ) {
                                    event_tab[j][t] = 1;
                                    // Init Grant Counter
                                    event_tab[j+1][t] = 1;
                                    // Initi Valid Counter
                                    event_tab[j+2][t] = event_tab[j+1][t] + 1;
                                } 
                                } else if ( j % 3 == 0 ){
                                if( uut.mod->walking_mem_master_mem_req[j/3-1] && !event_tab[j][t] ) {
                                    event_tab[j][t] = 1;
                                    event_tab[j+1][t] = 1;
                                    event_tab[j+2][t] = event_tab[j+1][t] + 1;
                                } 
                            }
                        }

                        ///////////
                        // Grant //
                        ///////////

                        if( t == 0 || event_tab[j-1][t-1] && event_tab[j][t-1] < 0 ) {
                            if( j == 1 ){ // PLB ports
                                // Wait 
                                if( event_tab[j-1][t] == 1 && event_tab[j][t] != 0 ) {
                                    event_tab[j][t]--;
                                    uut.mod->plb_master_mem_gnt = 0;
                                } else if (event_tab[j-1][t] == 1 && event_tab[j][t] == 0) {
                                    uut.mod->plb_master_mem_gnt = 1;
                                    event_tab[j][t]--;
                                } else if ( event_tab[j][t] < 0 ){
                                    uut.mod->plb_master_mem_gnt = 0;
                                }
                            } else if ( j % 3 == 1 ){
                                if( event_tab[j-1][t] == 1 && event_tab[j][t] != 0 ) {
                                    event_tab[j][t]--;
                                    uut.mod->walking_mem_master_mem_gnt[(j-1)/3-1] = 0;
                                } else if (event_tab[j-1][t] == 1 && event_tab[j][t] == 0) {
                                    uut.mod->walking_mem_master_mem_gnt[(j-1)/3-1] = 1;
                                    event_tab[j][t]--;
                                } else if ( event_tab[j][t] < 0 ){
                                    uut.mod->walking_mem_master_mem_gnt[(j-1)/3-1] = 0;
                                } 
                            }
                        }

                        ///////////
                        // Valid //
                        ///////////

                        if( t == 0 || event_tab[j-2][t-1] && event_tab[j][t-1] < 0 ) {
                            if( j == 2 ){ // PLB ports
                                // Wait
                                if( event_tab[j-2][t] == 1 && event_tab[j][t] != 0 ) {
                                    event_tab[j][t]--;
                                    uut.mod->plb_master_mem_valid = 0;
                                } else if (event_tab[j-2][t] == 1 && event_tab[j][t] == 0) {
                                    uut.mod->plb_master_mem_valid = 1;
                                    event_tab[j][t]--;
                                } else if ( event_tab[j][t] < 0 ) {
                                    uut.mod->plb_master_mem_valid = 0;
                                }
                            } else if ( j % 3 == 2 ){
                                if( event_tab[j-2][t] == 1 && event_tab[j][t] != 0 ) {
                                    event_tab[j][t]--;
                                    uut.mod->walking_mem_master_mem_valid[(j-2)/3-1] = 0;
                                } else if (event_tab[j-2][t] == 1 && event_tab[j][t] == 0) {
                                    uut.mod->walking_mem_master_mem_valid[(j-2)/3-1] = 1;
                                    event_tab[j][t]--;
                                } else if ( event_tab[j][t] < 0 ){
                                    uut.mod->walking_mem_master_mem_valid[(j-2)/3-1] = 0;
                                } 
                            }
                        }
                }
            }


        }
        
        /*if( valid_counters[TOT_PORTS_NUM - 1] == 0 && ending_clock_cycle == 0 ) {
            ending_clock_cycle = i;
        } else if ( ending_clock_cycle != 0 && i == ending_clock_cycle + 200 ) {
            printf("\nDone: %u transactions completed in %d clock cycles\n", TRANSACTION_NUM, ending_clock_cycle);
            break;
        }*/

        if( i == SIM_CYCLES-1 ) printf("\nDone: couldn't finish in %d clock cycles", i);
    }


    // Stop Simulation
    printf("\n[Sim::Cycle::%08lu] Simulation completed\n", uut.clkcnt);
    printf("[Sim::Cycle::%08lu] Press any key to exit\n", uut.clkcnt);
    getchar();

    // Free Area
    uut_destroy(&uut);
}

void gen_transaction( transaction_t * transaction, uint8_t mptw_ready , uint32_t random_factor ){

    if( transaction_counter == 0 ) {
        transaction->data = 0;
        transaction->valid = 0;
        return;
    }

    // Random Generation
    if( transaction_spec_counter != 0 ){
        transaction_spec_counter--;
        transaction->data = 0;
        transaction->valid = 0;
        return;
    } else if( mptw_ready ) {
        transaction_spec_counter = ( random_factor != 1 ) ? (rand() % random_factor) : 0;
        printf("Generating Transaction - %08u\n", transaction_counter);
        transaction->data = transaction_counter + 1;
        transaction->valid = 1;
        transaction_counter--;
    }

}


void print_event(){

    printf("\n");
    for( int i = 0; i < 1 + 2*TOT_PORTS_NUM; i++ ){
        for( int j = 0; j < TRANSACTION_NUM; j++ ){
            printf("\t%08d", event_tab[i][j]);
        }
        printf("\n");
    }
}