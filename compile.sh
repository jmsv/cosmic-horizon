#!/bin/bash

# Running this (./compile.sh) uses the below command to compile to bin/game.o

python cpplint.py src/*
rc=$?; if [[ $rc != 0 ]];
then
    echo -e
    read -e -p "Linting warnings. Enter 'y' to abort : " choice
    if [ "$choice" == "y" ]; then
        echo "Aborting"
        exit $rc;
    else
        echo "Compiling..."
    fi

fi

g++ src/userin.cpp src/dbstore.cpp src/print.cpp src/game.cpp -l sqlite3 -o bin/game.o
rc=$?; if ! [[ $rc != 0 ]];
then
    echo "Compiled successfully"
fi
