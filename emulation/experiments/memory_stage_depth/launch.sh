#!/bin/bash

################
# Configuration #
################

CURR_DIR="$(pwd)"
BUILD_VALUES=(2 4 8 16 32 64 256 512 1024)
RESULTS_DIR="results"
PLOTS_DIR="plots"
TOP_MODULE_FILE="$RTL_DIR/mptw_top.sv"
MAKEFILE_PATH="../../"
LAUNCH_SCRIPT="pylaunch.py"
TARGET_PARAM=PLB_STAGE_DEPTH

########################
# Directory Preparation #
########################

# Create results and plots directories if not present
mkdir -p "$RESULTS_DIR"
mkdir -p "$PLOTS_DIR"

# Create subdirectories in results/
for VALUE in "${BUILD_VALUES[@]}"; do
    mkdir -p "$RESULTS_DIR/$VALUE"
done

#########
# Build #
#########

for VALUE in "${BUILD_VALUES[@]}"; do
    echo ">>> Building for $TARGET_PARAM=$VALUE"

    # Update parameter in mptw_top.sv
    if [[ -f "$TOP_MODULE_FILE" ]]; then
        sed -i "s/\(parameter \+unsigned \+$TARGET_PARAM \+= \+\)[0-9]\+/\1$VALUE/" "$TOP_MODULE_FILE"
    else
        echo "Error: Cannot find $TOP_MODULE_FILE"
        return
    fi

    # Call the Makefile
    cd $MAKEFILE_PATH;
    if ! make do; then
        echo "Make failed for VALUE=$VALUE"
        return
    fi
    cd $CURR_DIR;

    # Run launch.py
    if ! python3 "$LAUNCH_SCRIPT" "$VALUE"; then
        echo "Launch failed for VALUE=$VALUE"
        return
    fi

    echo ">>> Done with VALUE=$VALUE"
    echo ""
done

echo "✅ All builds and runs completed."
