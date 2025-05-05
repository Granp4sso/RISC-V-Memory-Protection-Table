## Introduction
This repository provides an open-source SystemVerilog implementation of the [**Memory Protection Table (MPT)**](https://github.com/riscv/riscv-smmtt), compliant with the official **RISC-V Privileged Specification**. The MPT is designed to work with both **32-bit (RV32)** and **64-bit (RV64)** systems. The MPT is a hardware unit that extends the concept of memory protection by adding fine-grained permission control over physical memory regions. It maps physical page addresses to access permissions based on the *supervisor domain ID* of the current execution context.

## Environment and Tools Version
This project was verified on Ubuntu 22.04 and the following tools version:
| Tool            | Verified version |
|-----------------|------------------|
| Vivado          | 2024.2           |
| g++             | 11.4.0           |
| GTKWave         | 3.3.104          |
| Verilator       | 4.038            |


## Setting
Before starting any simulation, you need to configure the environment for your target architecture (RV32 or RV64).  
Run the following command from the root directory:
```bash
$ source settings.sh rv32   # For 32-bit systems
$ source settings.sh rv64   # For 64-bit systems
```
If no argument is provided (i.e., if the script is executed as `source settings.sh`), the environment will be configured by default for the RV64 architecture.
## Simulation Flow
Follow these steps to generate test cases, build, run, and verify the MPT simulation:
1. #### Generate Test Cases
> ⚠️ **Important:** The current version of the simulation test flow in this branch is **not compatible** with the `generate_test_cases.py` and `check_test_cases.py` scripts.  
> To use the test generation and checking functionalities, you must **revert to commit `d42df3d`**.  
> For more details, refer to the following issue: https://github.com/Granp4sso/RISC-V-Memory-Protection-Table/issues/7#issue-3039046262.

Navigate to the `simulation` directory and run the `generate_test_cases.py` script to generate the test cases. Specify the number of test cases as an argument:

```bash
$ cd simulation
$ python3 generate_test_cases.py <num_test_cases>
```
This will create a file named `test_cases_rv64.csv` (for 64-bit systems) or `test_cases_rv32.csv` (for 32-bit systems) containing randomly generated test cases. Each test case includes the following fields:
- `mmpt_reg`
- `spa_i`
- `access_type_i`
- `flush_i`
- `allow_o`
- `format_error_o`
- `access_page_fault_o`
- `mptl2_entry`
- `mptl1_entry`


2. #### Build
After generating the test cases, compile the simulation with the following command:

```bash
$ make build
```
This will produce the `mpt_top.elf` file.

3. #### Run the Simulation
Execute the compiled simulation with:
```bash
$ ./mpt_top.elf
```

The simulation will take the generated test cases as input and produce an output file named `simulation_output_rv64.csv` (or `simulation_output_rv32.csv` depending on your architecture). This output file will contain the actual values for the same fields generated in the test cases.

4. #### Check Results
> ⚠️ **Important:** The current version of the simulation test flow in this branch is **not compatible** with the `generate_test_cases.py` and `check_test_cases.py` scripts.  
> To use the test generation and checking functionalities, you must **revert to commit `d42df3d`**.  
> For more details, refer to the following issue: https://github.com/Granp4sso/RISC-V-Memory-Protection-Table/issues/7#issue-3039046262.

To compare the actual simulation output with the expected results (the "oracle" from the generated test cases), use the `check_test_cases.py` script:

```bash
$ python3 check_test_cases.py
```
This will verify if the values in the simulation output match the expected values from the test case generation process and generate an output file named  `test_cases_results_rv64.csv` for 64-bit systems.

5. #### View Waveform (Optional)
If you want to visually inspect the internal signal behavior during the simulation, you can generate a waveform using GTKWave:
```bash
$ make wave
```
## Usage
The Memory Protection Table operates after the address translation stage performed by the Memory Management Unit. Once the virtual address is translated into a physical address, the MPT is queried to retrieve the access permissions associated with the corresponding physical page. These permissions are domain-specific and ensure that memory accesses respect the security policies defined for each supervisor domain.
The MPT interfaces with the main memory using a dedicated protocol named mem, which is widely used across the system architecture.

### Interface Overview
#### Control Port
- `clk_i`, `rst_i` : Standard clock/reset.
- `flush_i`: Flushes internal state.
- `ptw_enable_i`: Starts the MPT walking process.
- `addr_valid_i`: Indicates that spa_i is valid.

#### CSR Port
- `mmpt_reg_i`: Contains control info such as the root PPN of the MPT and the Supervisor Domain ID (SDID).
####  Memory Port
The MPT interacts with memory through a memory interface based on the mem protocol. The interface is instantiated using the  **DEFINE_MEM_MASTER_PORTS** macro which expands to:

- `m_mem_req`
- `m_mem_gnt`
- `m_mem_valid`
- `m_mem_addr`
- `m_mem_rdata`
- `m_mem_wdata`
- `m_mem_we`
- `m_mem_be`
- `m_mem_error`

####  Status Port
- `ptw_busy_o`: High while the walk is ongoing
- `ptw_valid_o`: High when PTW completes successfully.

#### Input Signals
- `spa_i`: The Supervisor Physical Address.
- `access_type_i`: Specifies the type of access (read, write, execute).

####  Output Signals
- `plb_entry_o`: Permission lookaside buffer entry.
- `allow_o`: High if access is allowed.
- `access_page_fault_o`: High if access is denied.
- `format_error_o`:Indicates format issues.