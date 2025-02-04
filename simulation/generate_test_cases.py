# Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
# Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

# Description:
# This script generates randomized test cases for memory protection translation. 
# It creates a CSV file with various fields, including `mmpt_reg`, `spa_i`, 
# `access_type_i`, and control signals, applying specific probability distributions 
# and constraints. The generated test cases help validate access permissions, 
# format errors, and page faults.

import csv
import random
import sys

# Check if the user provided an argument for the number of test cases
if len(sys.argv) != 2:
    print(f"Usage: {sys.argv[0]} <num_cases>")
    sys.exit(1)

# Get the number of test cases from the command line
try:
    num_cases = int(sys.argv[1])
    if num_cases <= 0:
        raise ValueError
except ValueError:
    print("Error: num_cases must be a positive integer.")
    sys.exit(1) 

# Output file name
output_file = "test_cases.csv"

# Function to generate a random value between 0 and 6 excluding 3
def generate_format_error():
    value = random.randint(0, 6)
    while value == 3:
        value = random.randint(0, 6)
    return value

# Open the file in write mode
with open(output_file, mode="w", newline="") as file:
    writer = csv.writer(file)

    # Write the CSV header
    writer.writerow(["mmpt_reg", "spa_i", "access_type_i", "flush_i", "allow_o", "format_error_o", "access_page_fault_o", "mptl2_entry", "mptl1_entry"])

    for _ in range(num_cases):
        mptl2_entry_hex = "0x0000000000000000"
        mptl1_entry_hex = "0x0000000000000000"
        # Generate the first 4 bits of mmpt_reg with new probabilities
        prob = random.random()
        if prob < 0.10:
            mmpt_mode = 0
        elif prob < 0.95:
            mmpt_mode = 1 
        else:
            mmpt_mode = random.randint(3, 15)
        
        # Generate the next 6 bits of mmpt_reg (from 0 to 0x3F)
        mmpt_sdid = random.randint(0, 0x3F)  # Generates values between 0x00 and 0x3F
        # Set mmpt_ppn to all zeros (44 bits)
        mmpt_reg = f"0x{mmpt_mode:01X}{mmpt_sdid:02X}0000000000000"

        # Generate spa_i with the required bit structure
        spa_i = (0 << 46) | (0 << 25)  | (8 << 16)  | (1 << 12)  | 0xFFF;
        spa_i_hex = f"0x{spa_i:014X}"

        # Generate access_type_i between 0 and 3
        access_type_i = random.randint(0, 3)

        # Generate flush_i with 10% probability of being 1
        flush_i = 1 if random.random() < 0.10 else 0
        

        # Rules for allow_o, format_error_o, and access_page_fault_o
        if flush_i == 0:
            if mmpt_mode == 0:
                allow_o = 1
                format_error_o = 0
                access_page_fault_o = 0
            elif 3 <= mmpt_mode <= 15:
                allow_o = 0
                format_error_o = 1
                access_page_fault_o = 0
            else:  # mmpt_mode is 1 or 2
                if mmpt_mode == 1:
                    # First check on spa_i before considering access_type_i
                    if spa_i >= 0x400000000000:  # Check on 46-bit range
                        format_error_o = 3
                        allow_o = 0
                        access_page_fault_o = 0
                    elif access_type_i == 0:
                        allow_o = 0
                        format_error_o = 0
                        access_page_fault_o = 1
                    else:
                        allow_o = random.randint(0, 1)
                        format_error_o = generate_format_error()  # Use function to exclude 3
                        access_page_fault_o = random.randint(0, 1) 
                elif mmpt_mode == 2:
                    if access_type_i == 0:
                            allow_o = 0
                            format_error_o = 0
                            access_page_fault_o = 1
                    else:
                        allow_o = random.randint(0, 1)
                        format_error_o = generate_format_error()
                        access_page_fault_o = random.randint(0, 1)
                
                if access_type_i == 0 and mmpt_mode != 0:
                    allow_o = 0
                    format_error_o = 0
                    access_page_fault_o = 1
                    mptl2_reserved = 0
                    mptl2_type = random.randint(0, 3)
                    mptl2_info = 0  # All 44 bits set to 0
                    mptl2_entry = (mptl2_reserved << 47) | (mptl2_type << 44) | mptl2_info
                    mptl2_entry_hex = f"0x{mptl2_entry:016X}"
                    mptl1_reserved = 0 
                    mptl1_perm = 0
                    mptl1_entry = (mptl1_reserved << 32) | mptl1_perm
                    mptl1_entry_hex = f"0x{mptl1_entry:016X}"
            
        
                if access_type_i != 0 and mmpt_mode != 0:
                    mptl1_reserved = 0 
                    mptl1_perm = 0
                    if allow_o == 0:
                        format_error_o = 0
                        access_page_fault_o = 1
                        mptl2_reserved = 0
                        if access_type_i == 1:
                            mptl2_type = random.choice([0, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0 
                                mptl1_perm = 0
                        elif access_type_i == 2:
                            mptl2_type = random.choice([0, 1, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0
                                mptl1_perm = 0
                        elif access_type_i == 3:
                            mptl2_type = random.choice([0, 2, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0
                                mptl1_perm = 0
                        else:
                            mptl2_type = 0
                        mptl2_info = 0
                    else:
                        format_error_o = 0
                        access_page_fault_o = 0
                        mptl2_reserved = 0
                        if access_type_i == 1:
                            mptl2_type = random.choice([1, 2, 3, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0
                                mptl1_perm = 0xFFFFFFFF
                        elif access_type_i == 2:
                            mptl2_type = random.choice([2, 3, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0
                                mptl1_perm = 0xFFFFFFFF
                        elif access_type_i == 3:
                            mptl2_type = random.choice([1, 3, 4])
                            if mptl2_type == 4:
                                mptl1_reserved = 0
                                mptl1_perm = 0xFFFFFFFF
                        else:
                            mptl2_type = 0
                        mptl2_info = 0
                
                    mptl2_entry = (mptl2_reserved << 47) | (mptl2_type << 44) | mptl2_info
                    mptl2_entry_hex = f"0x{mptl2_entry:016X}"
                    mptl1_entry = (mptl1_reserved << 32) | mptl1_perm
                    mptl1_entry_hex = f"0x{mptl1_entry:016X}"
        else:
            format_error_o = 0
            access_page_fault_o = 0
            allow_o = 0

        # Write generated values to CSV file
        writer.writerow([mmpt_reg, spa_i_hex, access_type_i, flush_i, allow_o, format_error_o, access_page_fault_o, mptl2_entry_hex, mptl1_entry_hex])

print(f"Generated {num_cases} test cases in {output_file}")