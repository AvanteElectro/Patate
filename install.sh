#!/bin/bash

mkdir build install
cd build
cmake ..
cmake --build .
cmake --install .