
#########
# Paths #
#########

# source files paths
DIR_NAME := $(notdir $(CURDIR))
TOP_MODULE := mptw_top
PKG_FILES := $(shell find $(PACKAGE_DIR) -type f)
HEADER_FILES := $(shell find $(HEADERS_DIR) -type f)
DEP_FILES := $(shell find $(DEP_DIR) -type f)

# emulation file paths
EMU_PROJECT_ROOT = ./verilator
EMU_SRC_DIR = ${EMU_PROJECT_ROOT}/src
EMU_SRC = $(wildcard $(EMU_PROJECT_ROOT)/src/*.cpp)
EMU_LIB_DIR = ${EMU_PROJECT_ROOT}/lib 

# Python
EMU_PYTHON_DIR = python
EMU_LSU_DIR = ${EMU_PYTHON_DIR}/lsu
EMU_MMU_DIR = ${EMU_PYTHON_DIR}/mmu

EMU_LSU_WAVES_DIR = ${EMU_LSU_DIR}/waves
EMU_MMU_WAVES_DIR = ${EMU_MMU_DIR}/waves

#############
# Verilator #
#############

# Variables
VERILATOR_INCLUDE = /usr/share/verilator/include
VERILATOR_INCLUDE_VLTSTD = /usr/share/verilator/include/vltstd/

# Include sv headers (if any)
VINCLUDE = -I${RTL_DIR} -I${HEADERS_DIR}

# Disable warnings
VERILATOR_WARNINGSBYPASS = -Wno-UNUSED -Wno-SYNCASYNCNET -Wno-PINMISSING

# Verilator CPP sources
VERILATOR_CPP_SRC = $(wildcard $(EMU_PROJECT_ROOT)/obj_dir/*.cpp) ${VERILATOR_INCLUDE}/verilated.cpp ${VERILATOR_INCLUDE}/verilated_vcd_c.cpp

VERILATOR_BUILD_INCLUDE = -I${VERILATOR_INCLUDE} -I${VERILATOR_INCLUDE_VLTSTD} -I${EMU_PROJECT_ROOT}/obj_dir -I${EMU_SRC_DIR} \

##########
# Python #
##########

PYTHON_INC := $(shell python3 -m pybind11 --includes)
PYTHON_EXT := $(shell python3-config --extension-suffix)
CXX := g++
CXXFLAGS := -O3 -Wall -shared -std=c++17 -fPIC $(PYTHON_INC) ${VERILATOR_BUILD_INCLUDE}

BUILD_SRC := ${EMU_SRC} ${VERILATOR_CPP_SRC}

TARGET = sim_bindings$(PYTHON_EXT)

###########
# Targets #
###########

# Run the simulation
run_lsu: 
	cd ${EMU_LSU_DIR}; \
	python3 emulation.py

run_mmu:
	cd ${EMU_MMU_DIR}; \
	python3 emulation.py	

build:
	${MAKE} clean
	${MAKE} verilate
	${MAKE} compile

compile: $(TARGET)
	cp $(TARGET) ${EMU_LIB_DIR};
	cp $(TARGET) ${EMU_LSU_DIR};
	mv $(TARGET) ${EMU_MMU_DIR};

# Build the pybind11 wrapper
$(TARGET): ${BUILD_SRC}
	$(CXX) $(CXXFLAGS) -o $@ $^


# Build Verilator Wrapper for MPT Walker Top
verilate:
	cd ${EMU_PROJECT_ROOT}; \
	${VERILATOR} -Wall ${VERILATOR_WARNINGSBYPASS} --top-module ${TOP_MODULE} --trace -cc ${PKG_FILES} ${DEP_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE} \
	-DAXI_DATA_WIDTH=${AXI_DATA_WIDTH} -DAXI_ADDR_WIDTH=${AXI_ADDR_WIDTH} +define+ARCH_${ARCH}; \
	cd obj_dir; make -f V${TOP_MODULE}.mk

# Generate Waves
wave_lsu:
	${GTKWAVE} ${EMU_LSU_WAVES_DIR}/trace.vcd ${EMU_LSU_WAVES_DIR}/conf.gtkw &

wave_mmu:
	${GTKWAVE} ${EMU_MMU_WAVES_DIR}/gptw_trace.vcd ${EMU_MMU_WAVES_DIR}/conf.gtkw &
#${GTKWAVE} ${EMU_MMU_WAVES_DIR}/mptw_trace.vcd ${EMU_MMU_WAVES_DIR}/conf.gtkw &

	
# Remove files
clean:
	rm -rf ${EMU_PROJECT_ROOT}/obj_dir
	rm -rf ${EMU_PROJECT_ROOT}/lib/*
	rm -f ${EMU_LSU_WAVES_DIR}/*_trace.vcd
	rm -f ${EMU_MMU_WAVES_DIR}/*_trace.vcd

# Targets for building simulation
.PHONY: run_lsu run_mmu build verilate wave_lsu wave_mmu clean
