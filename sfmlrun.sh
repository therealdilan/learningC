#!/bin/bash

# Check for the correct number of arguments
if [ "$#" -ne 1 ]; then
    echo "Usage: sfml <filename>"
    exit 1
fi

# Append .cpp extension to the provided filename
file="$1.cpp"

# Compilation using g++
g++ "$file" "-I/opt/homebrew/Cellar/sfml/2.6.1/include"  -o "${file%.*}.out" -L/opt/homebrew/Cellar/sfml/2.6.1/lib -lsfml-graphics -lsfml-window -lsfml-system

# Check if compilation was successful
if [ -x "${file%.*}.out" ]; then
    # Run the compiled program
    "./${file%.*}.out"
else
    echo "Compilation failed"
fi