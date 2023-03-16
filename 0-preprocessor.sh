#!/bin/bash

# This script runs a C file through the preprocessor and saves the result into another file.

# Get the name of the C file

echo "Enter the name of the C file (including the .c extension):"

read CFILE

# Run the C file through the preprocessor and save the result to a new file

cpp $CFILE > c

# Print a message indicating that the preprocessing is complete

echo "Preprocessing of $CFILE is complete. Output saved to c."

