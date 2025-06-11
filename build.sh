#!/bin/bash

clear
rm ./build/logtest
g++ -std=c++20 -o ./build/logtest main.cc
./build/logtest
