# test_sim.py

import sim_bindings
import argparse
from memory import Memory
from transaction_gen import TransactionGenerator

NUM_STAGES = 4
CLK_CYCLES = 1024*24

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

    # Initialize simulation
    print("Creating simulation unit (UUT)...")
    uut = sim_bindings.UUT()
    #uut.init("waves/trace.vcd")
    uut.init("NONE")
    
    # Transaction Generator
    delay_range = (throughput_delay_l, throughput_delay_u)
    transaction_gen = TransactionGenerator(
        num_transactions,
        delay_range=delay_range,
        locality_parameter=locality_parameter
    )

    # Memory setup
    print("Initializing memory units...")
    memories = [
        Memory(
            size=num_transactions,
            transaction_generator=transaction_gen,
            grant_delay=(mem_gnt_delay_l, mem_gnt_delay_u),
            valid_delay=(mem_valid_delay_l, mem_valid_delay_u)
        )
        for _ in range(NUM_STAGES + 1)
    ]

    # Page size per stage
    for i in range(1, NUM_STAGES + 1):
        memories[i].setup_page_size(page_size_distribution[i - 1])

    # PLB setup
    memories[0] = Memory(
        size=num_transactions,
        transaction_generator=transaction_gen,
        grant_delay=(0, 0),
        valid_delay=(1, 1)
    )
    memories[0].setup_cache(plb_hit_rate)

    # Simulation loop
    print("Starting simulation loop...")
    for clk in range(clk_cycles):
        transaction_gen.ready = uut.get_mptw_ready_o()
        transaction_gen.valid_result = uut.get_mptw_result_valid_o()
        transaction_gen.result_data = uut.get_plb_entry_o()

        for i in range(NUM_STAGES + 1):
            mem = memories[i]
            if i == 0:
                mem.req = bool(uut.get_plb_master_mem_req())
                mem.addr = uut.get_plb_master_mem_addr()

                uut.set_plb_master_mem_gnt(int(mem.gnt))
                uut.set_plb_master_mem_valid(int(mem.valid))
                uut.set_plb_master_mem_rdata(mem.data)
            else:
                mem.req = bool(uut.get_walking_mem_master_mem_req(i - 1))
                mem.addr = uut.get_walking_mem_master_mem_addr(i - 1)

                uut.set_walking_mem_master_mem_gnt(i - 1, int(mem.gnt))
                uut.set_walking_mem_master_mem_valid(i - 1, int(mem.valid))
                uut.set_walking_mem_master_mem_rdata(i - 1, mem.data)

            mem.cycle(clk, verbose=False)

        transaction_gen.cycle(clk, verbose=False)
        uut.set_mptw_transaction_valid_i(transaction_gen.valid)
        uut.set_mmpt_reg_i(transaction_gen.mmpt)
        uut.set_spa_i(transaction_gen.spa)
        uut.set_access_type_i(transaction_gen.access_type)
        uut.eval()

    transaction_gen.print_results()
    overhead = transaction_gen.return_overhead(plb_hit_rate)

    print("Destroying simulation...")
    uut.destroy()

    return overhead


if __name__ == "__main__":
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
        f.write(f"{overhead}\n")


