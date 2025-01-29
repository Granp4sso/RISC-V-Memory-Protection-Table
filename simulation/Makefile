


#Variables
VERILATOR_FILE = /usr/share/verilator/include
VLTSTD = /usr/share/verilator/include/vltstd/
TOP_MODULE = mtt_top

TESTBENCH = tb_verilator/$(TOP_MODULE)_tb
OLDTESTBENCH = tb_verilator/$(OLDTOP_MODULE)_tb

SIM_SRC = $(wildcard $(SIM_SRC_DIR)/*.cpp)

TRACE_DIR = waves

# Use this envvar to include sv headers (if any)
VINCLUDE = -I$(RTL_DIR)
# Filename for the top module
TOP_MODULE = mtt_top

# Disable warnings
WARNINGSBYPASS = -Wno-UNUSED \
#-Wno-PINCONNECTEMPTY \
#-Wno-SYNCASYNCNET \
#-Wno-IMPORTSTAR \
#-Wno-MODDUP \
#-Wno-VARHIDDEN \
#-Wno-WIDTH \
#-Wno-LITENDIAN 	
#-Wno-UNOPTFLAT \
#-Wno-UNDRIVEN

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
	$(VERILATOR_FILE)/verilated.cpp $(VERILATOR_FILE)/verilated_vcd_c.cpp $(SIM_SRC) $(SIM_DIR)/obj_dir/V$(TOP_MODULE)__ALL.a \
	-o $(TOP_MODULE).elf

# Build Verilator
verilate:
	$(VERILATOR) -Wall $(WARNINGSBYPASS) --top-module $(TOP_MODULE) --trace -cc $(RTL_DIR)/mpt_pkg.sv $(RTL_DIR)/$(TOP_MODULE).sv $(VINCLUDE);
	cd $(SIM_DIR)/obj_dir; make -f V$(TOP_MODULE).mk

# Generate Waves
wave:
	$(GTKWAVE) $(SIM_WAVES_DIR)/trace.vcd $(SIM_WAVES_DIR)/conf.gtkw &

# Remove files
clean:
	rm -r $(SIM_DIR)/obj_dir
	rm $(TOP_MODULE).elf
	rm $(SIM_WAVES_DIR)/trace.vcd
