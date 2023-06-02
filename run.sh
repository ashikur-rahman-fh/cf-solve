#!/bin/bash

if [[ $# -lt 1 ]]; then
    echo "Fetal error: Filename required."
    exit 1
fi
filename=$1

if [[ ! -f $filename ]]; then
    echo "Error: File expected."
    exit 1
fi

if [[ ! -f sol.exe || $(stat -c '%Y' $filename) -gt $(stat -c '%Y' sol.exe) ]]; then
    echo "Building $filename ..."
    g++ $filename -std=c++17 -Wall -o sol.exe -fmax-errors=2

else
    echo "$filename is not modified since the last build"
fi

if [[ $? -eq 0 ]]; then
    echo "Executing $filename"
    echo "----------------------------------------------------"
    time timeout 2 ./sol.exe

else
    exit 1
fi

exitcode=$?

# new line for good formatting
echo

if [[ exitcode -eq 124 ]]; then
    echo "Time limit exeeded."
elif [[ exitcode -eq 0 ]]; then
    echo "Successful."
else
    echo "Runtime error."
fi
