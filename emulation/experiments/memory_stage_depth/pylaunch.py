import subprocess
import os
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed

#####################
# Configuration
#####################

NUM_TRANSACTIONS = 512
LOCALITY_PARAMETER = 0.0
MEM_GNT_DELAY_L = 24
MEM_GNT_DELAY_U = 48
MEM_VALID_DELAY_L = 48
MEM_VALID_DELAY_U = 96
PAGE_SIZE_DISTRIBUTION = [0.0, 0.0, 0.0, 1.0]
NUM_EXPERIMENTS = 10

TEST_SIM_PATH = "../../python/" 

#####################
# Experiment space
#####################

THROUGHPUT_OPTIONS = {
    "HIGH_THROUGHPUT": (1, 4),
    "LOW_THROUGHPUT": (8, 12)
}

PLB_HIT_RATES = [0.0, 0.2, 0.4, 0.6, 0.8, 0.9, 0.95, 0.99]

#####################
# Run Experiments
#####################

def run_single_experiment(process_id, throughput_label, t_l, t_u, hit_rate):
    cmd = [
        "python3", TEST_SIM_PATH + "emulation.py",
        "--num_transactions", str(NUM_TRANSACTIONS),
        "--throughput_delay_l", str(t_l),
        "--throughput_delay_u", str(t_u),
        "--locality_parameter", str(LOCALITY_PARAMETER),
        "--mem_gnt_delay_l", str(MEM_GNT_DELAY_L),
        "--mem_gnt_delay_u", str(MEM_GNT_DELAY_U),
        "--mem_valid_delay_l", str(MEM_VALID_DELAY_L),
        "--mem_valid_delay_u", str(MEM_VALID_DELAY_U),
        "--plb_hit_rate", str(hit_rate),
        "--page_size_distribution"
    ] + list(map(str, PAGE_SIZE_DISTRIBUTION)) + [
        "--process_id", str(process_id)
    ]

    try:
        result = subprocess.run(
                    cmd,
                    capture_output=True, text=True, check=True
                )
        # Read overhead output file
        overhead_file = f"overhead_{process_id}.out"
        with open(overhead_file) as f:
            overhead = float(f.read().strip())
        return overhead

    except subprocess.CalledProcessError as e:
        print(f"[ERROR] Failed experiment {process_id} for {throughput_label} @ hit={hit_rate}")
        print("Command:", ' '.join(cmd))
        print("stderr:", e.stderr)
        return None
    
if __name__ == "__main__":

    if len(sys.argv) != 2:
        print("Usage: python3 run_experiments.py TARGET_PARAM")
        sys.exit(1)

    TARGET_PARAM = sys.argv[1]
    RESULT_DIR = f"results/{TARGET_PARAM}"
    os.makedirs(RESULT_DIR, exist_ok=True)

    print(f"[RUNNING EXPERIMENT] For current Parameter Value {TARGET_PARAM}")

    for throughput_label, (t_l, t_u) in THROUGHPUT_OPTIONS.items():
        for hit_rate in PLB_HIT_RATES:
            print(f"Test for Throughput=({t_l},{t_u}) and PLB_HIT_RATE={hit_rate}")

            results = []
            with ThreadPoolExecutor(max_workers=NUM_EXPERIMENTS) as executor:
                futures = {
                    executor.submit(run_single_experiment, i, throughput_label, t_l, t_u, hit_rate): i
                    for i in range(NUM_EXPERIMENTS)
                }

                for future in as_completed(futures):
                    process_id = futures[future]
                    overhead = future.result()
                    if overhead is not None:
                        results.append(overhead)
                        print(f"\tCompleted experiment {process_id+1}/{NUM_EXPERIMENTS} --> {overhead}x")

            if results:
                min_v = min(results)
                max_v = max(results)
                avg_v = sum(results) / len(results)
            else:
                min_v = max_v = avg_v = 0.0

            # Write results
            filename = f"{RESULT_DIR}/EXP_{throughput_label}_{hit_rate:.2f}"
            with open(filename, "w") as f:
                f.write(f"{min_v:.4f},{avg_v:.4f},{max_v:.4f}\n")

            print(f"[OK] Written: {filename}")