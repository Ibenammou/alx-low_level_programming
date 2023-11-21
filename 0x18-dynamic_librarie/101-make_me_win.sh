#!/bin/bash

# Download the shared library from the specified GitHub repository
wget -O /tmp/shlib.so https://github.com/Ibenammou/alx-low_level_programming/raw/0bdaf4b5310911c13a75594ba254f1a0c53bc931/0x18-dynamic_libraries/shlib.so

# Set LD_PRELOAD environment variable to use the downloaded shared library
export LD_PRELOAD=/tmp/shlib.so

