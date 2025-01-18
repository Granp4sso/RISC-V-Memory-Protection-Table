#!/bin/bash

# Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
# This file checks for existing dependencies and set up env. variables

###################
# Bash Formatting #
###################

SUCCESS='\033[0;32m'  
WARNING='\033[0;33m'  
FAILURE='\033[0;31m' 
VANILLA='\033[0m'
BOLD='\033[1m' 

# Required dependencies (modify these accordingly to your locations)
export CC=g++
export VERILATOR=verilator
export GTKWAVE=gtkwave

# Check if dependencies exists
DEPENDENCIES=(
    ${CC} 
    ${VERILATOR}
    ${GTKWAVE}
)

for dep in "${DEPENDENCIES[@]}"; do
    dep_bin=$(basename "$dep")
    dep_path="${dep%/*}"
    if ! command -v "$dep" &> /dev/null; then
        echo -e "${FAILURE}[dependencies_check] Can't find $dep_bin at $dep_path${VANILLA}, aborting ..." >&2
        return
    else
        echo -e "${SUCCESS}[dependencies_check] Found $dep_bin at $dep_path${VANILLA}"
    fi
done

# Path Envvar
export ROOT_DIR=$( dirname $( realpath $BASH_SOURCE[0]} ) )
export RTL_DIR=${ROOT_DIR}/rtl
export SIM_DIR=${ROOT_DIR}/simulation
export SIM_SRC_DIR=${SIM_DIR}/src
export SIM_WAVES_DIR=${SIM_DIR}/waves