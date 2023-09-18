#!/bin/bash
# Load the LD_PRELOAD environment variable to inject our shared library

export LD_PRELOAD="./winning.so"

# Run the Giga Millions program with the desired numbers
./gm 9 8 10 24 75 9

