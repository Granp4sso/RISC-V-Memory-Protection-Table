
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
EMU_WAVES_DIR = ${EMU_PYTHON_DIR}/waves

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
run: 
	cd ${EMU_PYTHON_DIR}; \
	python3 emulation.py

do:
	${MAKE} clean
	${MAKE} verilate
	${MAKE} build

build: $(TARGET)
	cp $(TARGET) ${EMU_LIB_DIR};
	mv $(TARGET) ${EMU_PYTHON_DIR};

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
wave:
	${GTKWAVE} ${EMU_WAVES_DIR}/trace.vcd ${EMU_WAVES_DIR}/conf.gtkw &

	
# Remove files
clean:
	rm -rf ${EMU_PROJECT_ROOT}/obj_dir
	rm -rf ${EMU_PROJECT_ROOT}/lib/*
	rm -f ${EMU_WAVES_DIR}/trace.vcd

# Targets for building simulation
.PHONY: run build verilate wave clean
