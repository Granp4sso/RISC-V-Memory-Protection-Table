#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "sim.hpp"

#define PLB_PORTS_NUM 1
#define MEM_PORTS_NUM 3

#define BACK_TO_BACK 0

#define TRANSACTION_NUM 128
#define TRANSACTION_RANDOM_FACTOR 1
#define PLB_GRANT_RANDOM_FACTOR 2
#define PLB_VALID_RANDOM_FACTOR 5
#define MEM_GRANT_RANDOM_FACTOR 16
#define MEM_VALID_RANDOM_FACTOR 32

const uint32_t TOT_PORTS_NUM = PLB_PORTS_NUM + MEM_PORTS_NUM;

struct transaction_t {
    uint8_t valid;
    uint64_t data;
};

uint32_t transaction_counter, transaction_spec_counter;
uint32_t req_counters[TOT_PORTS_NUM];
uint32_t grant_counters[TOT_PORTS_NUM];
uint32_t valid_counters[TOT_PORTS_NUM];
uint32_t grant_spec_counters[TOT_PORTS_NUM];
uint32_t valid_spec_counters[TOT_PORTS_NUM];

void gen_transaction( transaction_t * transaction, uint8_t mptw_ready, uint32_t random_factor );
void req_cnt_update( uint8_t port_id, uint8_t * req );
void gen_memory_grant( uint8_t port_id, uint8_t * grant , uint8_t * req, uint32_t random_factor );
void gen_memory_valid( uint8_t port_id, uint8_t * valid, uint64_t * rdata, uint32_t random_factor );

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
    transaction_spec_counter = ( TRANSACTION_RANDOM_FACTOR != 1 ) ? (rand() % TRANSACTION_RANDOM_FACTOR) : 0;

    for(int i = 0; i < TOT_PORTS_NUM; i++){

        grant_counters[i] = TRANSACTION_NUM;
        valid_counters[i] = TRANSACTION_NUM;

        random_seed = (i == 0) ? PLB_GRANT_RANDOM_FACTOR : MEM_GRANT_RANDOM_FACTOR;
        grant_spec_counters[i] = ( random_seed != 1 ) ? (rand() % random_seed) : 0;
        if( !BACK_TO_BACK ) grant_spec_counters[i]++;

        random_seed = (i == 0) ? PLB_VALID_RANDOM_FACTOR : MEM_VALID_RANDOM_FACTOR;
        valid_spec_counters[i] = ( random_seed != 1 ) ? (rand() % random_seed) : 0;
        if( !BACK_TO_BACK ) valid_spec_counters[i]++;

        grant[i] = 0;
        valid[i] = 0;
        rdata[i] = 0;
        req[i] = 0;

        req_counters[i] = TRANSACTION_NUM;
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

            // Generate Memory Transactions
            for(uint32_t j = 0; j < TOT_PORTS_NUM; j++) {

                random_seed = (j == 0) ? PLB_VALID_RANDOM_FACTOR : MEM_VALID_RANDOM_FACTOR;
                gen_memory_valid(j, valid, rdata, random_seed);

                random_seed = (j == 0) ? PLB_GRANT_RANDOM_FACTOR : MEM_GRANT_RANDOM_FACTOR;
                gen_memory_grant(j, grant, req, random_seed);

                if( j == 0 ) {
                    uut.mod->plb_master_mem_gnt = grant[j];
                    uut.mod->plb_master_mem_valid = valid[j];
                    uut.mod->plb_master_mem_rdata = rdata[j];
                    req[j] = uut.mod->plb_master_mem_req;

                } else {
                    uut.mod->walking_mem_master_mem_gnt[j-1] = grant[j];
                    uut.mod->walking_mem_master_mem_valid[j-1] = valid[j];
                    uut.mod->walking_mem_master_mem_rdata[j-1] = rdata[j];
                    req[j] = uut.mod->walking_mem_master_mem_req[j-1];
                }

                req_cnt_update(j, req);

            }



            // Generate Transaction
            gen_transaction(&transaction, mptw_ready, TRANSACTION_RANDOM_FACTOR);
            // Assign Transaction
            uut.mod->mptw_transaction_valid_i = transaction.valid;
            uut.mod->mmpt_reg_i = transaction.data;
            uut.mod->spa_i = transaction.data;
            uut.mod->access_type_i = 0x7; 

        }

        if( valid_counters[TOT_PORTS_NUM - 1] == 0 && ending_clock_cycle == 0 ) {
            ending_clock_cycle = i;
        } else if ( ending_clock_cycle != 0 && i == ending_clock_cycle + 200 ) {
            printf("\nDone: %u transactions completed in %d clock cycles\n", TRANSACTION_NUM, ending_clock_cycle);
            break;
        }

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
    } else {
        transaction_spec_counter = ( random_factor != 1 ) ? (rand() % random_factor) : 0;
    }

    if( mptw_ready ){
        printf("Generating Transaction - %08u\n", transaction_counter);
        transaction->data = transaction_counter + 1;
        transaction->valid = 1;
        transaction_counter--;
    }

}

void req_cnt_update( uint8_t port_id, uint8_t * req ){
    // Check  req counter
    if( req_counters[port_id] == grant_counters[port_id] && req[port_id] && req_counters[port_id] != 0 ) req_counters[port_id]--;
}

void gen_memory_grant( uint8_t port_id, uint8_t * grant,  uint8_t * req , uint32_t random_factor ){

    grant[port_id] = 0;

    if( grant_counters[port_id] == 0 ){
        grant[port_id] = 0;
        return;
    }

    // Random Generation
    if( grant_spec_counters[port_id] != 0 ){
        grant_spec_counters[port_id]--;
        grant[port_id] = 0;
        return;
    } else {
        grant_spec_counters[port_id] = ( random_factor != 1 ) ? (rand() % random_factor) : 0;
        if( !BACK_TO_BACK ) grant_spec_counters[port_id]++;
    }

    if( req_counters[port_id] < grant_counters[port_id] && req[port_id] ){
        printf("[%02u] Generating Grant - %08u\n", port_id, grant_counters[port_id]);
        grant_counters[port_id]--;
        grant[port_id] = 1;
    }
}

void gen_memory_valid( uint8_t port_id, uint8_t * valid, uint64_t * rdata, uint32_t random_factor ){

    valid[port_id] = 0;
    rdata[port_id] = 0;

    if( valid_counters[port_id] == 0 ){
        valid[port_id] = 0;
        rdata[port_id] = 0;
        return;
    }

    // Random Generation
    if( valid_spec_counters[port_id] != 0 ){
        valid_spec_counters[port_id]--;
        valid[port_id] = 0;
        rdata[port_id] = 0;
        return;
    } else {
        valid_spec_counters[port_id] = ( random_factor != 1 ) ? (rand() % random_factor) : 0;
        if( !BACK_TO_BACK ) valid_spec_counters[port_id]++;
    }

    if( grant_counters[port_id] < valid_counters[port_id] ){
        printf("[%02u] Generating Valid - %08u\n", port_id, valid_counters[port_id]);
        valid_counters[port_id]--;
        valid[port_id] = 1;
        rdata[port_id] = 1;
    }
}
