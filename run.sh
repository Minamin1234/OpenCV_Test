#!/bin/sh
pwd
mkdir ./build
cd build
cmake .. .
make
cd ..
./build/Main