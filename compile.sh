#!/bin/bash

# Running this (./compile.sh) uses the below g++ command to compile to bin/game.o

echo "Running compile command..."

g++ -std=c++11 src/userin.cpp src/dbstore.cpp src/print.cpp src/game.cpp -l sqlite3 -o bin/cosmic-horizon.o
rc=$?; if ! [[ $rc != 0 ]];
then
    echo "...Compiled to bin/cosmic-horizon.o"
else
    exit 1
fi
