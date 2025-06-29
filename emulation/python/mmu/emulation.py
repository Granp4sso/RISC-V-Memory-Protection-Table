# test_sim.py

import sim_bindings
import argparse
from memory import Memory
from transaction_gen import TransactionGenerator

NUM_STAGES = 4
CLK_CYCLES = 1024

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
    gtlb_cache.setup_cache(0.5)

    
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
        htlb_cache[i].setup_cache(0.0)

    # PLB
    print("[Cache Generation] Create MPT Walker PLB")
    plb_cache = Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(0, 0),
            valid_delay=(1, 1)
        )
    plb_cache.setup_cache(1.0)
    
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
        transaction_gen.ready[0] = gptw_uut.get_mptw_ready_o()

        # Check gTLB
        transaction_gen.g_hit_valid = 0
        gtlb_cache.addr = transaction_gen.spa
        gtlb_cache_index = gtlb_cache.convert_addr_to_id()
        if gtlb_cache_index != -1:
            if gtlb_cache.read(gtlb_cache_index) == 1:
                transaction_gen.g_hit_valid = 1
                transaction_gen.g_hit_data = gtlb_cache.addr

        # G-Stage Walking (One Column)
        for i in range(NUM_STAGES):
            if i == 0:
                assign_cache_signals(htlb_cache[0], gptw_uut)
                htlb_cache[0].cycle(clk, verbose=False)
            else:
                assign_mem_signals(hmem[i], gptw_uut, i-1)
                hmem[i].cycle(clk, verbose=False)

        transaction_gen.result_valid[0] = gptw_uut.get_mptw_result_valid_o()
        transaction_gen.result_data[0] = gptw_uut.get_plb_entry_o()
        if transaction_gen.result_valid[0]:
            print(f"VALID @{clk} for {transaction_gen.result_data[0]}")

        # MPTW Walking
        transaction_gen.ready[1] = 0
        
        # Connect Wires to GPTW
        gptw_uut.set_mptw_transaction_valid_i(transaction_gen.valid[0])
        gptw_uut.set_mmpt_reg_i(transaction_gen.mmpt)
        gptw_uut.set_spa_i(transaction_gen.spa)
        gptw_uut.set_access_type_i(transaction_gen.access_type)

        # Connect Wires to MPTW

        # EVAL SIMULATIOn
                
        # Transaction Generator
        transaction_gen.cycle(clk, verbose=True)
        gptw_uut.eval()

    #transaction_gen.print_results()
    #overhead = transaction_gen.return_overhead(plb_hit_rate)
    transaction_gen.dump_transactions()
    transaction_gen.dump_pqueue()
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
        num_transactions        =16,
        throughput_delay_l      =1,
        throughput_delay_u      =4,
        locality_parameter      =0.6,
        mem_gnt_delay_l         =4,#24,
        mem_gnt_delay_u         =8,#48,
        mem_valid_delay_l       =8,#48,
        mem_valid_delay_u       =12,#96,
        plb_hit_rate            =0.9,
        page_size_distribution  =[0.0, 0.0, 0.0, 1.0],
        process_id              =0  # pass it along
    )


