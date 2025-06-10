# Variables
VERILATOR_INCLUDE = /usr/share/verilator/include
VERILATOR_INCLUDE_VLTSTD = /usr/share/verilator/include/vltstd/

# Targets for building simulation
.PHONY: run build verilate wave clean

# source files paths
DIR_NAME := $(notdir $(CURDIR))
TOP_MODULE := ${DIR_NAME}
PKG_FILES := $(shell find $(PACKAGE_DIR) -type f)
HEADER_FILES := $(shell find $(HEADERS_DIR) -type f)
DEP_FILES := $(shell find $(DEP_DIR) -type f)

# simulation files paths
SIM_PROJECT_ROOT = ${SIM_DIR}/${DIR_NAME}
SIM_SRC_DIR = ${SIM_PROJECT_ROOT}/src
SIM_SRC = $(wildcard $(SIM_PROJECT_ROOT)/src/*.cpp)
SIM_WAVES_DIR = ${SIM_PROJECT_ROOT}/waves

# Include sv headers (if any)
VINCLUDE = -I${RTL_DIR} -I${HEADERS_DIR}

# Disable warnings
WARNINGSBYPASS = -Wno-UNUSED -Wno-SYNCASYNCNET

###########
# Targets #
###########

# Run the simulation
run: build
	./${TOP_MODULE}.elf

# Build the Testbench
build: verilate patch_sim
	${CC} \
	-I ${VERILATOR_INCLUDE} -I ${VERILATOR_INCLUDE_VLTSTD} -I ${SIM_PROJECT_ROOT}/obj_dir -I ${SIM_SRC_DIR} \
	-DARCH_${ARCH} \
	${VERILATOR_INCLUDE}/verilated.cpp ${VERILATOR_INCLUDE}/verilated_vcd_c.cpp \
	${SIM_SRC} ${SIM_PROJECT_ROOT}/obj_dir/V${TOP_MODULE}__ALL.a \
	-o ${TOP_MODULE}.elf

patch_sim:
	@find ${SIM_PROJECT_ROOT}/src -type f -exec sed -i -E 's|#include "V[^"]+\.h"|#include "V${TOP_MODULE}.h"|' {} +

# Build Verilator Wrapper
verilate:
	${VERILATOR} -Wall ${WARNINGSBYPASS} --top-module ${TOP_MODULE} --trace -cc ${PKG_FILES} ${DEP_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE} \
	-DAXI_DATA_WIDTH=${AXI_DATA_WIDTH} -DAXI_ADDR_WIDTH=${AXI_ADDR_WIDTH} +define+ARCH_${ARCH}; \
	cd obj_dir; make -f V${TOP_MODULE}.mk

# Generate Waves
wave:
	${GTKWAVE} ${SIM_WAVES_DIR}/trace.vcd ${SIM_WAVES_DIR}/conf.gtkw &

# Remove files
clean:
	rm -r ${SIM_PROJECT_ROOT}/obj_dir
	rm ${TOP_MODULE}.elf
	rm ${SIM_WAVES_DIR}/trace.vcd
