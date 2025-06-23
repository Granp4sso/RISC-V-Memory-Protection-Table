# test_sim.py

import sim_bindings
from memory import Memory
from transaction_gen import TransactionGenerator

CLK_CYCLES = 1024*32
NUM_STAGES = 4
num_transactions = (512+256)
throughput_delay_l = 2
throughput_delay_u = 4
mem_gnt_delay_l = 24
mem_gnt_delay_u = 48
mem_valid_delay_l = 48
mem_valid_delay_u = 96
plb_hit_rate = 0
                            # Tera Pages    # Giga Pages    # Mega Pages    # Kilo Pages
page_size_distribution = [  0.0               , 0.0           , 0.0           , 1         ]

# Debug Memory
def main():

    ##############
    # parameters #
    ##############


    ##################################
    # Simulation MPT Walker Instance #
    ##################################

    print("Creating simulation unit (UUT)...")
    uut = sim_bindings.UUT()
    uut.init("waves/trace.vcd")

    ##########################
    # Transaction Definition #
    ##########################

    transaction_gen = TransactionGenerator(num_transactions, delay_range=(throughput_delay_l, throughput_delay_u))

    #####################
    # Memory Definition #
    #####################

    print("Initializing memory units...")
    memories = [
        Memory(size=num_transactions,
               grant_delay=(mem_gnt_delay_l, mem_gnt_delay_u),
               valid_delay=(mem_valid_delay_l, mem_valid_delay_u)
        )
        for _ in range(NUM_STAGES + 1)
    ]

    for i in range(1, NUM_STAGES + 1):
        memories[i].setup_page_size(page_size_distribution[i-1])

    # PLB
    memories[0] = Memory(size=num_transactions,
               grant_delay=(0, 0),
               valid_delay=(1, 1)
    )
    
    memories[0].setup_cache(plb_hit_rate)

    #########
    # Begin #
    #########

    print("Starting simulation loop...")
    for clk in range(CLK_CYCLES):
        #print(f"\n--- Cycle {clk} ---")
        transaction_gen.ready = uut.get_mptw_ready_o()
        transaction_gen.valid_result = uut.get_mptw_result_valid_o()
        transaction_gen.result_data = uut.get_plb_entry_o()
        #uut.set_flush_all_i(0)
        #if clk > 1000 and uut.get_mptw_ready_o():
        #    if clk % 1000 == 0:
        #        uut.set_flush_all_i(1)

        # Memories
        for i in range(NUM_STAGES + 1):
            mem = memories[i]
            if i == 0:
                # Use PLB memory ports
                mem.req = bool(uut.get_plb_master_mem_req())
                mem.addr = uut.get_plb_master_mem_addr()

                uut.set_plb_master_mem_gnt(int(mem.gnt))
                uut.set_plb_master_mem_valid(int(mem.valid))
                uut.set_plb_master_mem_rdata(mem.data)

            else:
                # Use walking memory ports (indexed)
                mem.req = bool(uut.get_walking_mem_master_mem_req(i - 1))
                mem.addr = uut.get_walking_mem_master_mem_addr(i - 1)

                uut.set_walking_mem_master_mem_gnt(i - 1, int(mem.gnt))
                uut.set_walking_mem_master_mem_valid(i - 1, int(mem.valid))
                uut.set_walking_mem_master_mem_rdata(i - 1, mem.data)

            mem.cycle(clk, verbose=False)
            
        # Transaction Generation
        transaction_gen.cycle(clk, verbose = False)        
        uut.set_mptw_transaction_valid_i(transaction_gen.valid)
        uut.set_mmpt_reg_i(transaction_gen.mmpt)
        uut.set_spa_i(transaction_gen.spa)
        uut.set_access_type_i(transaction_gen.access_type)

        # Update Verilator MPTW Instance
        uut.eval()

    transaction_gen.print_results()
    transaction_gen.print_overhead_percentage(plb_hit_rate)
    

    print("Destroying simulation...")
    uut.destroy()

if __name__ == "__main__":
    main()
