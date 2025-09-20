#!/bin/bash

################
# Configuration #
################

CURR_DIR="$(pwd)"
TLB_VALUES=(0.0 0.4 0.6 0.8 0.9 0.95)
RESULTS_DIR="results"
PLOTS_DIR="plots"
TOP_MODULE_FILE="$RTL_DIR/mptw_top.sv"
MAKEFILE_PATH="../../"
LAUNCH_SCRIPT="pylaunch.py"

########################
# Directory Preparation #
########################

# Create results and plots directories if not present
mkdir -p "$RESULTS_DIR"
mkdir -p "$PLOTS_DIR"

# Create subdirectories in results/
for VALUE in "${TLB_VALUES[@]}"; do
    mkdir -p "$RESULTS_DIR/$VALUE"
done

#########
# Build #
#########

TARGET_PARAM_NUM_STAGES=4
TARGET_PARAM_DATA_WIDTH=64
TARGET_PARAM_ADDR_WIDTH=64
TARGET_PARAM_PLB_STAGE_DEPTH=256
TARGET_PARAM_PLB_TRANSACTION_DATA_WIDTH=64
TARGET_PARAM_PLB_TRANSACTION_ADDR_WIDTH=64
TARGET_PARAM_FORWARDING_BUFFER_DEPTH=128
TARGET_PARAM_REORDER_BUFFER_DEPTH=512
TARGET_PARAM_PIPELINE_PASSTHROUGH=0
TARGET_PARAM_TEST_MODE=1

echo ">>> BUILD MPT for Indirect Access experiments"

# Update parameter in mptw_top.sv
if [[ -f "$TOP_MODULE_FILE" ]]; then
    sed -i "s/\(parameter \+unsigned \+NUM_STAGES \+= \+\)[0-9]\+/\1$TARGET_PARAM_NUM_STAGES/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+DATA_WIDTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_DATA_WIDTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+ADDR_WIDTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_ADDR_WIDTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+PLB_STAGE_DEPTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_PLB_STAGE_DEPTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+PLB_TRANSACTION_DATA_WIDTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_PLB_TRANSACTION_DATA_WIDTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+PLB_TRANSACTION_ADDR_WIDTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_PLB_TRANSACTION_ADDR_WIDTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+FORWARDING_BUFFER_DEPTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_FORWARDING_BUFFER_DEPTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+REORDER_BUFFER_DEPTH \+= \+\)[0-9]\+/\1$TARGET_PARAM_REORDER_BUFFER_DEPTH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+PIPELINE_PASSTHROUGH \+= \+\)[0-9]\+/\1$TARGET_PARAM_PIPELINE_PASSTHROUGH/" "$TOP_MODULE_FILE"
    sed -i "s/\(parameter \+unsigned \+TEST_MODE \+= \+\)[0-9]\+/\1$TARGET_PARAM_TEST_MODE/" "$TOP_MODULE_FILE"
else
    echo "Error: Cannot find $TOP_MODULE_FILE"
    return
fi

# Call the Makefile
#cd $MAKEFILE_PATH;
#if ! make build; then
#    echo "Make failed for VALUE=$VALUE"
#    return
#fi

##########
# Launch #
##########

cd $CURR_DIR;

EMULATION_FILE=$CURR_DIR/$MAKEFILE_PATH"python/mmu/emulation.py"

for VALUE in "${TLB_VALUES[@]}"; do
    echo ">>> Running experiment for TLB Hit Rate=$VALUE"

    # Update python script with the current TLB_VALUE
    #sed -i "s/\(TLB_VALUE \+= \+\)[0-9]\+/\1$VALUE/" "$EMULATION_FILE"
    sed -i "s/^TLB_HIT_RATE = .*/TLB_HIT_RATE = $VALUE/" $EMULATION_FILE

    # Run launch.py
    if ! python3 "$LAUNCH_SCRIPT" "$VALUE"; then
        echo "Launch failed for VALUE=$VALUE"
        return
    fi

#
    #echo ">>> Done with VALUE=$VALUE"
    #echo ""
done

echo "✅ All builds and runs completed."
