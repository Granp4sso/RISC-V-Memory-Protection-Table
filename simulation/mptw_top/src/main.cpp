#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "sim.hpp"

#define TRANSACTION_NUM 24
#define TRANSACTION_RANDOM_FACTOR 1
#define PLB_GRANT_RANDOM_FACTOR 1
#define PLB_VALID_RANDOM_FACTOR 6
#define MEM_GRANT_RANDOM_FACTOR 1
#define MEM_VALID_RANDOM_FACTOR 1

struct transaction_t {
    uint8_t valid;
    uint64_t data;
};

uint32_t transaction_counter, grant_counter, valid_counter;
uint32_t transaction_spec_counter, grant_spec_counter, valid_spec_counter;

void gen_transaction( transaction_t * transaction, uint8_t mptw_ready );
void gen_grant( uint8_t * grant , uint8_t req );
void gen_valid( uint8_t * valid, uint64_t * rdata );

int main(int argc, char **argv) {

    uut_t uut;

    transaction_t transaction;
    uint8_t grant;
    uint8_t valid;
    uint64_t rdata;
    uint8_t mptw_ready;
    uint8_t req;

    int ending_clock_cycle = 0;

    transaction_counter = TRANSACTION_NUM;
    grant_counter = TRANSACTION_NUM;
    valid_counter = TRANSACTION_NUM;

    srand(time(NULL));

    transaction_spec_counter = ( TRANSACTION_RANDOM_FACTOR != 1 ) ? (rand() % TRANSACTION_RANDOM_FACTOR) : 0;
    grant_spec_counter = ( PLB_GRANT_RANDOM_FACTOR != 1 ) ? (rand() % PLB_GRANT_RANDOM_FACTOR) : 0;
    valid_spec_counter = ( PLB_VALID_RANDOM_FACTOR != 1 ) ? (rand() % PLB_VALID_RANDOM_FACTOR) : 0;


    uut_init(&uut);

    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");

    uut.mod->plb_master_mem_gnt = 0;
    // Run Simulation
    for (int i = 0; i < SIM_CYCLES; i++) {
        uut_eval(&uut);

        mptw_ready = uut.mod->mptw_ready_o;
        req = uut.mod->plb_master_mem_req;
        transaction.data = 0;
        transaction.valid = 0;
        grant = 0;
        valid = 0;
        rdata = 0;

        if( i > 2 ) {
            gen_valid(&valid, &rdata);
            gen_grant(&grant, req);
            gen_transaction(&transaction, mptw_ready);

            uut.mod->mptw_transaction_valid_i = transaction.valid;
            uut.mod->mmpt_reg_i = transaction.data;
            uut.mod->spa_i = transaction.data;
            uut.mod->access_type_i = 0x7; 

            uut.mod->plb_master_mem_gnt = grant;
            uut.mod->plb_master_mem_valid = valid;
            uut.mod->plb_master_mem_rdata = rdata;

        }

        if( valid_counter == 0 && ending_clock_cycle == 0 ) {
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

void gen_transaction( transaction_t * transaction, uint8_t mptw_ready ){

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
        transaction_spec_counter = ( TRANSACTION_RANDOM_FACTOR != 1 ) ? (rand() % TRANSACTION_RANDOM_FACTOR) : 0;
    }

    if( mptw_ready ){
        printf("Generating Transaction - %08u\n", transaction_counter);
        transaction->data = transaction_counter + 1;
        transaction->valid = 1;
        transaction_counter--;
    }

}

void gen_grant( uint8_t * grant,  uint8_t req ){

    // Grant is generated before  Req, correct this
    if( grant_counter == 0 ){
        *grant = 0;
        return;
    }

    // Random Generation
    if( grant_spec_counter != 0 ){
        grant_spec_counter--;
        *grant = 0;
        return;
    } else {
        grant_spec_counter = ( PLB_GRANT_RANDOM_FACTOR != 1 ) ? (rand() % PLB_GRANT_RANDOM_FACTOR) : 0;
    }


    if( transaction_counter < grant_counter && req ){
        printf("Generating Grant - %08u\n", grant_counter);
        grant_counter--;
        *grant = 1;
    }
}

void gen_valid( uint8_t * valid, uint64_t * rdata) {

    if( valid_counter == 0 ){
        *valid = 0;
        *rdata = 0;
        return;
    }

    // Random Generation
    if( valid_spec_counter != 0 ){
        valid_spec_counter--;
        *valid = 0;
        *rdata = 0;
        return;
    } else {
        valid_spec_counter = ( PLB_VALID_RANDOM_FACTOR != 1 ) ? (rand() % PLB_VALID_RANDOM_FACTOR) : 0;
    }

    if( grant_counter < valid_counter ){
        printf("Generating Valid - %08u\n", valid_counter);
        valid_counter--;
        *valid = 1;
        *rdata = 1;
    }
}

