#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "sim.hpp"

// test cases struct
typedef struct {
    int access_type_i;
    int flush;
    #ifdef ARCH_rv32
        uint32_t mmpt_reg;
        uint32_t spa_i;
        uint32_t mptl2_entry;
        uint32_t mptl1_entry;
    #elif defined(ARCH_rv64)
        uint64_t mmpt_reg;
        uint64_t spa_i;
        uint64_t mptl5_entry;
        uint64_t mptl4_entry;
        uint64_t mptl3_entry;
        uint64_t mptl2_entry;
        uint64_t mptl1_entry;
    #endif
} test_case_t;

int split_line(char *line, char *tokens[], int max_tokens) {
    int count = 0;
    char *token = strtok(line, ",");
    while (token != NULL && count < max_tokens) {
        tokens[count++] = token;
        token = strtok(NULL, ",");
    }
    return count;
}

int read_test_cases(const char *input_file, test_case_t **test_cases) {
    FILE *file = fopen(input_file, "r");
    if (!file) {
        perror("Error opening input file");
        exit(1);
    }

    // Read the first line (header)
    char buffer[1024];
    if (!fgets(buffer, sizeof(buffer), file)) {
        fprintf(stderr, "Error: empty or unreadable CSV file\n");
        fclose(file);
        return 0;
    }

    // Count the number of lines into the file (test cases)
    int test_count = 0;
    while (fgets(buffer, sizeof(buffer), file)) {
        test_count++;
    }

    rewind(file);
    fgets(buffer, sizeof(buffer), file);

    // Memory alocation for test cases
    *test_cases = (test_case_t *)malloc(test_count * sizeof(test_case_t));
    if (!*test_cases) {
        perror("Memory allocation error for test cases");
        fclose(file);
        exit(1);
    }

    int i = 0;
    while (fgets(buffer, sizeof(buffer), file)) {
        char *tokens[12]; 
        int num_tokens = split_line(buffer, tokens, 12);

        if (num_tokens < 12) {
            fprintf(stderr, "Error parsing CSV line: %s\n", buffer);
            continue;
        }


        #ifdef ARCH_rv32
            (*test_cases)[i].mmpt_reg = strtoul(tokens[0], NULL, 16);
            (*test_cases)[i].spa_i = strtoul(tokens[1], NULL, 16);
            (*test_cases)[i].mptl2_entry = strtoul(tokens[7], NULL, 16);
            (*test_cases)[i].mptl1_entry = strtoul(tokens[8], NULL, 16);
        #elif defined(ARCH_rv64)
            (*test_cases)[i].mmpt_reg = strtoull(tokens[0], NULL, 16);
            (*test_cases)[i].spa_i = strtoull(tokens[1], NULL, 16);
            (*test_cases)[i].mptl5_entry = strtoull(tokens[7], NULL, 16);
            (*test_cases)[i].mptl4_entry = strtoull(tokens[8], NULL, 16);
            (*test_cases)[i].mptl3_entry = strtoull(tokens[9], NULL, 16);
            (*test_cases)[i].mptl2_entry = strtoull(tokens[10], NULL, 16);
            (*test_cases)[i].mptl1_entry = strtoull(tokens[11], NULL, 16);
        #endif

        (*test_cases)[i].access_type_i = atoi(tokens[2]);
        (*test_cases)[i].flush = atoi(tokens[3]);
        i++;
    }

    fclose(file);
    return test_count;
}

#ifdef ARCH_rv32
    void vmem_insert_entry(vmem_t* Memory, uint32_t mptl2_entry, uint32_t mptl1_entry) {
        for (int i = 0; i < 4; i++) {
            Memory->mem[i].cell = (mptl2_entry >> (i * 8)) & 0xFF;
            Memory->mem[i + 4].cell = (mptl1_entry >> (i * 8)) & 0xFF;
        }
    }
#elif defined(ARCH_rv64)
    void vmem_insert_entry(vmem_t* Memory, uint64_t mptl5_entry, uint64_t mptl4_entry, uint64_t mptl3_entry, uint64_t mptl2_entry, uint64_t mptl1_entry) {
        for (int i = 0; i < 8; i++) {
                Memory->mem[i].cell      = (mptl5_entry >> (i * 8)) & 0xFF;
                Memory->mem[i + 8].cell  = (mptl4_entry >> (i * 8)) & 0xFF;
                Memory->mem[i + 16].cell = (mptl3_entry >> (i * 8)) & 0xFF;
                Memory->mem[i + 24].cell = (mptl2_entry >> (i * 8)) & 0xFF;
                Memory->mem[i + 32].cell = (mptl1_entry >> (i * 8)) & 0xFF;
            }
        }
#endif



// Function to run the simulation and save results to CSV
void run_simulation_and_save_results(const char *input_file, const char *output_file, uut_t* uut) {
    // Read test cases from CSV file
    test_case_t *test_cases = NULL;
    int test_count = read_test_cases(input_file, &test_cases);

    FILE *file = fopen(output_file, "w");
    if (!file) {
        perror("Error opening output file");
        free(test_cases);
        exit(1);
    }

    // Output CSV header
    fprintf(file, "mmpt_reg,spa_i,access_type_i,flush_i,allow_o,format_error_o,access_page_fault_o,mptl5_entry,mptl4_entry,mptl3_entry,mptl2_entry,mptl1_entry\n");

    int test_index = 0;   // Current test case index
    int waiting_for_result = 0;  // Flag: waiting for a result?
    int flush_delay = 0;  // Counter to handle delay after a flush

    for (int i = 0; i < SIM_CYCLES; i++) {
        uut_eval(uut);
        uut->mod->ptw_enable_i = 1;

        // If waiting for a flush, decrement the counter
        if (flush_delay > 0) {
            flush_delay--;
            if (flush_delay == 0) {
                test_index++;  // After the delay, move to the next test
            }
            continue;
        }

        // If waiting for a test case result
        if (waiting_for_result) {
            if (uut->mod->ptw_valid_o) {
                // Read outputs
                int allow_o = uut->mod->allow_o;
                int format_error_o = uut->mod->format_error_o;
                int access_page_fault_o = uut->mod->access_page_fault_o;

                // Save results to CSV
                #ifdef ARCH_rv32
                   fprintf(file, "0x%08x,0x%08x,%d,%d,%d,%d,%d,0x%08x,0x%08x\n",
                        test_cases[test_index].mmpt_reg, test_cases[test_index].spa_i,
                        test_cases[test_index].access_type_i, test_cases[test_index].flush,
                        allow_o, format_error_o, access_page_fault_o,
                        test_cases[test_index].mptl2_entry, test_cases[test_index].mptl1_entry);
                #elif defined(ARCH_rv64)
                    fprintf(file, "0x%016lx,0x%016lx,%d,%d,%d,%d,%d,0x%016lx,0x%016lx,0x%016lx,0x%016lx,0x%016lx\n",
                        test_cases[test_index].mmpt_reg, test_cases[test_index].spa_i,
                        test_cases[test_index].access_type_i, test_cases[test_index].flush,
                        allow_o, format_error_o, access_page_fault_o,
                        test_cases[test_index].mptl5_entry,test_cases[test_index].mptl4_entry,test_cases[test_index].mptl3_entry, test_cases[test_index].mptl2_entry, test_cases[test_index].mptl1_entry);
                #endif
                    
                // Reset signals after test completion
                uut->mod->addr_valid_i = 0;
                waiting_for_result = 0; // Move to the next test case
                test_index++; 
            }
        }
        // If NOT waiting for results, load a new test case
        else if (test_index < test_count && !uut->mod->ptw_valid_o) {
            // Inject new inputs
            uut->mod->mmpt_reg_i = test_cases[test_index].mmpt_reg;
            uut->mod->spa_i = test_cases[test_index].spa_i;
            uut->mod->access_type_i = test_cases[test_index].access_type_i;
            uut->mod->flush_i = test_cases[test_index].flush;
            uut->mod->addr_valid_i = 1;

            // Load the mptl2_entry value into memory
            uint64_t mptl5_entry = test_cases[test_index].mptl5_entry;
            uint64_t mptl4_entry = test_cases[test_index].mptl4_entry;
            uint64_t mptl3_entry = test_cases[test_index].mptl3_entry;
            uint64_t mptl2_entry = test_cases[test_index].mptl2_entry;
            uint64_t mptl1_entry = test_cases[test_index].mptl1_entry;

            // Insert the entry into the memory at the correct location, for example:
            vmem_insert_entry(&uut->vRAM, mptl5_entry, mptl4_entry, mptl3_entry, mptl2_entry, mptl1_entry);

            // If the test uses flush, save outputs immediately
            if (test_cases[test_index].flush) {
                int allow_o = uut->mod->allow_o;
                int format_error_o = uut->mod->format_error_o;
                int access_page_fault_o = uut->mod->access_page_fault_o;

                #ifdef ARCH_rv32
                    fprintf(file, "0x%x,0x%x,%d,%d,%d,%d,%d,0x%x,0x%x\n",
                        test_cases[test_index].mmpt_reg, test_cases[test_index].spa_i,
                        test_cases[test_index].access_type_i, 1,  // flush_i = 1
                        allow_o, format_error_o, access_page_fault_o,
                        test_cases[test_index].mptl2_entry, test_cases[test_index].mptl1_entry);
                #elif defined(ARCH_rv64)
                    fprintf(file, "0x%lx,0x%lx,%d,%d,%d,%d,%d,0x%lx,0x%lx,0x%lx,0x%lx,0x%lx\n",
                        test_cases[test_index].mmpt_reg, test_cases[test_index].spa_i,
                        test_cases[test_index].access_type_i, 1,  // flush_i = 1
                        allow_o, format_error_o, access_page_fault_o,
                        test_cases[test_index].mptl5_entry, test_cases[test_index].mptl4_entry, test_cases[test_index].mptl3_entry, test_cases[test_index].mptl2_entry, test_cases[test_index].mptl1_entry);
                #endif
                

                // Set delay of 3 cycles
                flush_delay = 3;
            } else {
                waiting_for_result = 1;  // Now waiting for output
            }
        }
    }

    fclose(file);
    free(test_cases);  // Free allocated memory for test cases
}


int main(int argc, char **argv) {
    uut_t uut;
    uut_init(&uut);

    printf("\n[Sim::Cycle::00000000] Starting Simulation\n");

    // Call the function that runs the simulation and saves results
    #ifdef ARCH_rv32
        run_simulation_and_save_results("test_cases_rv32.csv", "simulation_output_rv32.csv", &uut);
	#elif defined(ARCH_rv64)
        run_simulation_and_save_results("test_cases_rv64.csv", "simulation_output_rv64.csv", &uut);
	#endif

    // Stop Simulation
    printf("\n[Sim::Cycle::%08lu] Simulation completed\n", uut.clkcnt);
    printf("[Sim::Cycle::%08lu] Press any key to exit\n", uut.clkcnt);
    getchar();

    // Free Area
    uut_destroy(&uut);
}
