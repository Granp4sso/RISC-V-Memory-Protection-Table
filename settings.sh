#!/bin/bash

# Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
# This file checks for existing dependencies and sets up env. variables

###################
# Bash Formatting #
###################

SUCCESS='\033[0;32m'  
WARNING='\033[0;33m'  
FAILURE='\033[0;31m' 
VANILLA='\033[0m'
BOLD='\033[1m' 

# If no parameter is passed, default to 'rv64'
if [ "$#" -eq 0 ]; then
    ARCH="rv64"
else
    ARCH=$1
fi

# Validate input architecture
if [[ "$ARCH" != "rv32" && "$ARCH" != "rv64" ]]; then
    echo -e "${FAILURE}Invalid architecture: $ARCH. Use 'rv32' or 'rv64'.${VANILLA}"
    return 1  # Use 'return' instead of 'exit' when sourcing the script
fi

# Export architecture variable for Makefile or Verilog
export ARCH

# Set AXI parameters based on architecture
if [ "$ARCH" == "rv32" ]; then
    export AXI_DATA_WIDTH=32
    export AXI_ADDR_WIDTH=32
else
    export AXI_DATA_WIDTH=64
    export AXI_ADDR_WIDTH=64
fi

# Required dependencies (modify these accordingly to your locations)
export CC=g++
export VERILATOR=verilator
export GTKWAVE=gtkwave

# Check if dependencies exist
DEPENDENCIES=(
    ${CC} 
    ${VERILATOR}
    ${GTKWAVE}
)

for dep in "${DEPENDENCIES[@]}"; do
    dep_bin=$(basename "$dep")
    dep_path="$(command -v "$dep")"
    if [ -z "$dep_path" ]; then
        echo -e "${FAILURE}[dependencies_check] Can't find $dep_bin${VANILLA}, aborting ..." >&2
        exit 1
    else
        echo -e "${SUCCESS}[dependencies_check] Found $dep_bin at $dep_path${VANILLA}"
    fi
done

# Path Envvar
export ROOT_DIR=$( dirname $( realpath ${BASH_SOURCE[0]} ) )
export RTL_DIR=${ROOT_DIR}/rtl
export SIM_DIR=${ROOT_DIR}/simulation
export SIM_SRC_DIR=${SIM_DIR}/src
export SIM_WAVES_DIR=${SIM_DIR}/waves

echo -e "${SUCCESS}Environment set for ${ARCH}${VANILLA}"
