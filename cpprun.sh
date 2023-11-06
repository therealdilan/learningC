#!/bin/bash

# Check for the correct number of arguments
if [ "$#" -ne 1 ]; then
    echo "Usage: run <filename>"
    exit 1
fi

# Append .cpp extension to the provided filename
file="$1.cpp"

# Compilation using g++
g++ "$file" -o "${file%.*}.out"

# Check if compilation was successful
if [ -x "${file%.*}.out" ]; then
    # Run the compiled program
    "./${file%.*}.out"
else
    echo "Compilation failed"
fi
