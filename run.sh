#!/bin/sh
pwd
cd build
cmake .. .
make
cd ..
./build/Main