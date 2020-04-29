#/bin/env bash

rm -f a.out && g++ --std=c++14 -no-pie hello_world.cpp && ./a.out
