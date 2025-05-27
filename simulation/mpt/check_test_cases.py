# Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
# Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

# Description:
# This script compares expected values from a test case file with actual results 
# from an output file. It checks specific fields ("allow_o", "format_error_o", 
# "access_page_fault_o") and writes a match result (1 for match, 0 for mismatch) 
# to a result file.

import csv

# Define input and output file names
test_cases_file = "test_cases_rv64.csv"
output_file = "simulation_output_rv64.csv"
result_file = "test_cases_results_rv64.csv"

# Open both input files and the result file
with open(test_cases_file, mode="r", newline="") as test_cases, \
     open(output_file, mode="r", newline="") as output, \
     open(result_file, mode="w", newline="") as result:
    
    # Create CSV readers and writer
    test_reader = csv.DictReader(test_cases)
    output_reader = csv.DictReader(output)
    result_writer = csv.writer(result)
    
    # Write header for the result file
    result_writer.writerow(["check", "mmpt_reg", "spa_i", "access_type_i", "flush_i", "mptl2_entry", "mptl1_entry"])
    
    # Iterate over both files line by line
    for test_row, output_row in zip(test_reader, output_reader):
        # Extract values for comparison
        expected_values = (test_row["allow_o"], test_row["format_error_o"], test_row["access_page_fault_o"])
        actual_values = (output_row["allow_o"], output_row["format_error_o"], output_row["access_page_fault_o"])
        
        # Compare expected and actual values
        match = 1 if expected_values == actual_values else 0
        
        additional_columns = [
            test_row["mmpt_reg"], 
            test_row["spa_i"], 
            test_row["access_type_i"], 
            test_row["flush_i"], 
            test_row["mptl2_entry"], 
            test_row["mptl1_entry"]
        ]
        
        # Write the result to the new CSV file
        result_writer.writerow([match] + additional_columns)

print(f"Comparison complete. Results saved in {result_file}")
