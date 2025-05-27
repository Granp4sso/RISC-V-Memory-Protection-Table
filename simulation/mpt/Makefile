# Variables
VERILATOR_FILE = /usr/share/verilator/include
VLTSTD = /usr/share/verilator/include/vltstd/

# Targets for building simulation
.PHONY: run build verilate wave clean

# Set architecture-dependent variables based on environment variable ARCH
TOP_MODULE = mpt_top
PKG_FILE = $(RTL_DIR)/mpt_pkg.sv

TESTBENCH = tb_verilator/$(TOP_MODULE)_tb
SIM_SRC = $(wildcard $(SIM_SRC_DIR)/*.cpp)
TRACE_DIR = waves

# Include sv headers (if any)
VINCLUDE = -I$(RTL_DIR)

# Disable warnings
WARNINGSBYPASS = -Wno-UNUSED 

###########
# Targets #
###########

# Run the simulation
run: build
	./$(TOP_MODULE).elf

# Build the Testbench
build: verilate
	$(CC) \
	-I $(VERILATOR_FILE) -I $(VLTSTD) -I $(SIM_DIR)/obj_dir -I $(SIM_SRC_DIR) \
	-DARCH_$(ARCH) \
	$(VERILATOR_FILE)/verilated.cpp $(VERILATOR_FILE)/verilated_vcd_c.cpp $(SIM_SRC) $(SIM_DIR)/obj_dir/V$(TOP_MODULE)__ALL.a \
	-o $(TOP_MODULE).elf


# Build Verilator
verilate:
	$(VERILATOR) -Wall $(WARNINGSBYPASS) --top-module $(TOP_MODULE) --trace -cc $(PKG_FILE) $(RTL_DIR)/$(TOP_MODULE).sv $(VINCLUDE) \
	-DAXI_DATA_WIDTH=$(AXI_DATA_WIDTH) -DAXI_ADDR_WIDTH=$(AXI_ADDR_WIDTH) +define+ARCH_$(ARCH)
	cd $(SIM_DIR)/obj_dir; make -f V$(TOP_MODULE).mk

# Generate Waves
wave:
	$(GTKWAVE) $(SIM_WAVES_DIR)/trace.vcd $(SIM_WAVES_DIR)/conf.gtkw &

# Remove files
clean:
	rm -r $(SIM_DIR)/obj_dir
	rm $(TOP_MODULE).elf
	rm $(SIM_WAVES_DIR)/trace.vcd
	rm simulation_output_rv32.csv
	rm simulation_output_rv64.csv
	rm test_cases_results_rv64.csv
