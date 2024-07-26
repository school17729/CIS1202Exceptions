#!/bin/bash

rm -r Build/
cmake -B Build/ -S Source/
bear -- cmake --build Build/
cd Source/
../Build/Main
cd ..
