#!/bin/bash
wget -P /tmp https://github.com/daniels8945/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
