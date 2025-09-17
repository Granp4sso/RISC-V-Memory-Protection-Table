# test_sim.py

import sim_bindings
import argparse
from memory import Memory
from transaction_gen import *


NUM_STAGES = 4
CLK_CYCLES = 4096

PARAM_MMU_MODE = PARAM_MMU_MODE_2D

def run_sim(num_transactions,
            throughput_delay_l,
            throughput_delay_u,
            locality_parameter,
            mem_gnt_delay_l,
            mem_gnt_delay_u,
            mem_valid_delay_l,
            mem_valid_delay_u,
            plb_hit_rate,
            page_size_distribution,
            process_id):

    clk_cycles = CLK_CYCLES
    overhead = 0

    ##############################
    # Initialize Verilated Units #
    ##############################

    print("[Initialization] Creating simulation unit (UUT)...")
    gptw_uut = sim_bindings.UUT()
    gptw_uut.init("waves/gptw_trace.vcd")

    mptw_uut = sim_bindings.UUT()
    mptw_uut.init("waves/mptw_uut.vcd")

    #########################
    # Transaction Generator #
    #########################

    # Transaction Generator
    print("[Transaction Generation] Creating Transaction Generator")
    delay_range = (throughput_delay_l, throughput_delay_u)
    transaction_gen = TransactionGenerator(
        num_transactions,
        delay_range=delay_range,
        locality_parameter=locality_parameter,
        levels=NUM_STAGES
    )

    ####################
    # Cache Generation #
    ####################

    # Guest TLB
    print("[Cache Generation] Create Guest TLB")
    gtlb_cache = Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(0, 0),
            valid_delay=(1, 1)
        )
    gtlb_cache.setup_cache(0.8)

    
    # Host TLB(s) (multiple for simulation reasons)
    print("[Cache Generation] Create Host TLB")
    htlb_cache = [
        Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(0, 0),
            valid_delay=(1, 1)
        )
        for _ in range(NUM_STAGES)
    ]
    for i in range(NUM_STAGES):
        htlb_cache[i].setup_cache(0.9)

    # PLB
    print("[Cache Generation] Create MPT Walker PLB")
    plb_cache = Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(0, 0),
            valid_delay=(1, 1)
        )
    plb_cache.setup_cache(0.9)
    
    #######################
    # Memories Generation #
    #######################
    
    print("[Memory Generation] Create Virtual Memory system")
    hmem = [
        Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(mem_gnt_delay_l, mem_gnt_delay_u),
            valid_delay=(mem_valid_delay_l, mem_valid_delay_u)
        )
        for _ in range(NUM_STAGES*NUM_STAGES)
    ]
    for i in range(NUM_STAGES*NUM_STAGES):
        hmem[i].setup_page_size(page_size_distribution[i % NUM_STAGES])

    print("[Memory Generation] Create Permission Memory system")
    pmem = [
        Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(mem_gnt_delay_l, mem_gnt_delay_u),
            valid_delay=(mem_valid_delay_l, mem_valid_delay_u)
        )
        for _ in range(NUM_STAGES)
    ]
    for i in range(NUM_STAGES):
        pmem[i].setup_page_size(page_size_distribution[i])

    ###################
    # Simulation loop #
    ###################
    transaction_gen.dump_transactions()
    print()

    print("Starting simulation loop...")
    for clk in range(clk_cycles):
        transaction_gen.ready[PTW_ID] = gptw_uut.get_mptw_ready_o()
        transaction_gen.ready[MPTW_ID] = mptw_uut.get_mptw_ready_o()

        ##############
        # Global TLB #
        ##############
         
        # Check gTLB
        transaction_gen.g_hit_valid = 0
        gtlb_cache.addr = transaction_gen.spa[PTW_ID]
        gtlb_cache_index = gtlb_cache.convert_addr_to_id()
        if gtlb_cache_index != -1:
            if gtlb_cache.read(gtlb_cache_index) == 1:
                transaction_gen.g_hit_valid = 1
                transaction_gen.g_hit_data = gtlb_cache.addr

        ##############
        # PT Walking #
        ##############

        # G-Stage Walking (One Column)
        for i in range(NUM_STAGES + 1):
            if i == 0:
                assign_cache_signals(htlb_cache[0], gptw_uut)
                htlb_cache[0].cycle(clk, verbose=False)
            else:
                assign_mem_signals(hmem[i], gptw_uut, i-1)
                hmem[i-1].cycle(clk, verbose=False)

        transaction_gen.result_valid[PTW_ID] = gptw_uut.get_mptw_result_valid_o()
        transaction_gen.result_data[PTW_ID] = gptw_uut.get_plb_entry_o()
        if transaction_gen.result_valid[PTW_ID]:
            print(f"VALID @{clk} for {transaction_gen.result_data[PTW_ID]}")
        
        # Connect Wires to GPTW
        gptw_uut.set_mptw_transaction_valid_i(transaction_gen.valid[PTW_ID])
        gptw_uut.set_mmpt_reg_i(transaction_gen.mmpt)
        gptw_uut.set_spa_i(transaction_gen.spa[PTW_ID])
        gptw_uut.set_access_type_i(transaction_gen.access_type)

        ###############
        # MPT Walking #
        ###############

        # MPT Walking
        for i in range(NUM_STAGES + 1):
            if i == 0:
                assign_cache_signals(plb_cache, mptw_uut)
                plb_cache.cycle(clk, verbose=False)
            else:
                assign_mem_signals(pmem[i-1], mptw_uut, i-1)
                pmem[i-1].cycle(clk, verbose=False)

        transaction_gen.result_valid[MPTW_ID] = mptw_uut.get_mptw_result_valid_o()
        transaction_gen.result_data[MPTW_ID] = mptw_uut.get_plb_entry_o()
        if transaction_gen.result_valid[MPTW_ID]:
            print(f"VALID @{clk} for {transaction_gen.result_data[MPTW_ID]}")

        # Connect Wires to MPTW
        mptw_uut.set_mptw_transaction_valid_i(transaction_gen.valid[MPTW_ID])
        mptw_uut.set_mmpt_reg_i(transaction_gen.mmpt)
        mptw_uut.set_spa_i(transaction_gen.spa[MPTW_ID])
        mptw_uut.set_access_type_i(transaction_gen.access_type)

        #########################
        # Update the simulation #
        #########################

        transaction_gen.cycle(clk, True, PARAM_MMU_MODE)
        gptw_uut.eval()
        mptw_uut.eval()

    #transaction_gen.print_results()
    #overhead = transaction_gen.return_overhead(plb_hit_rate)
    transaction_gen.dump_transactions()
    transaction_gen.dump_pqueue()
    transaction_gen.dump_hqueue()
    print("Destroying simulation...")
    gptw_uut.destroy()
    mptw_uut.destroy()
    
    return overhead

def assign_cache_signals(mem, ptw):
    mem.req = bool(ptw.get_plb_master_mem_req())
    mem.addr = ptw.get_plb_master_mem_addr()

    ptw.set_plb_master_mem_gnt(int(mem.gnt))
    ptw.set_plb_master_mem_valid(int(mem.valid))
    ptw.set_plb_master_mem_rdata(mem.data)

def assign_mem_signals(mem, ptw, port_num):
    mem.req = bool(ptw.get_walking_mem_master_mem_req(port_num))
    mem.addr = ptw.get_walking_mem_master_mem_addr(port_num)

    ptw.set_walking_mem_master_mem_gnt(port_num, int(mem.gnt))
    ptw.set_walking_mem_master_mem_valid(port_num, int(mem.valid))
    ptw.set_walking_mem_master_mem_rdata(port_num, mem.data)


if __name__ == "__main__":
    '''
    parser = argparse.ArgumentParser(description="Run MPTW simulation.")

    parser.add_argument("--num_transactions", type=int, required=True)
    parser.add_argument("--throughput_delay_l", type=int, required=True)
    parser.add_argument("--throughput_delay_u", type=int, required=True)
    parser.add_argument("--locality_parameter", type=float, required=True)
    parser.add_argument("--mem_gnt_delay_l", type=int, required=True)
    parser.add_argument("--mem_gnt_delay_u", type=int, required=True)
    parser.add_argument("--mem_valid_delay_l", type=int, required=True)
    parser.add_argument("--mem_valid_delay_u", type=int, required=True)
    parser.add_argument("--plb_hit_rate", type=float, required=True)
    parser.add_argument("--page_size_distribution", type=float, nargs=4, required=True)
    parser.add_argument("--process_id", type=int, default=None, help="ID of the process")
    args = parser.parse_args()

    overhead = run_sim(
        num_transactions=args.num_transactions,
        throughput_delay_l=args.throughput_delay_l,
        throughput_delay_u=args.throughput_delay_u,
        locality_parameter=args.locality_parameter,
        mem_gnt_delay_l=args.mem_gnt_delay_l,
        mem_gnt_delay_u=args.mem_gnt_delay_u,
        mem_valid_delay_l=args.mem_valid_delay_l,
        mem_valid_delay_u=args.mem_valid_delay_u,
        plb_hit_rate=args.plb_hit_rate,
        page_size_distribution=args.page_size_distribution,
        process_id=args.process_id  # pass it along
    )

    

    # Write to a file named with the process_id if provided, else default to overhead.out
    output_file = f"overhead_{args.process_id}.out" if args.process_id is not None else "overhead.out"

    with open(output_file, "w") as f:
        f.write(f"{overhead}\n")'''
    
    overhead = run_sim(
        num_transactions        =32,
        throughput_delay_l      =1,
        throughput_delay_u      =4,
        locality_parameter      =0.6,
        mem_gnt_delay_l         =24,#4,
        mem_gnt_delay_u         =48,#8,
        mem_valid_delay_l       =48,#8,
        mem_valid_delay_u       =96,#12,
        plb_hit_rate            =0.9,
        page_size_distribution  =[0.0, 0.0, 0.0, 1.0],
        process_id              =0  # pass it along
    )


