#!/bin/bash

# This script runs a C file through the preprocessor and saves the result into another file.

# Get the name of the C file.
echo "Enter the name of the C file (including the .c extension):"
read C_FILE

# Run the C file through the preprocessor and save the result to a new file.
cpp $C_FILE > c

# Print a message indicating that the preprocessing is complete.
echo "Preprocessing of $C_FILE is complete. Output saved to c."
