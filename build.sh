#!/bin/bash

echo "#pragma once" > git_version.h
echo "#define GIT_COMMIT_HASH \"$(git rev-parse --short HEAD)\"" >> git_version.h

clear
rm ./build/logtest
g++ -std=c++20 -o ./build/logtest main.cc
./build/logtest
