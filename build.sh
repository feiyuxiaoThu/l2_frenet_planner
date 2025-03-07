#!/bin/bash
sudo apt-get install -y libeigen3-dev clang cmake libgflags-dev libmsgpack-dev
if [ ! -d "build" ]; then
  mkdir build
fi
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build . --target all -- -j 8
