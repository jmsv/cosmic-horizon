#!/bin/bash

# Running this (./compile.sh) uses the below g++ command to compile to bin/game.o

echo "Making the code all nice and pretty..."
# If this causes problems, just comment it out
# by shoving a '#' in-front of the below line:
./beautify.sh

echo "Running compile command..."

# Compile
g++ -std=c++11 src/userin.cpp src/dbstore.cpp src/story.cpp src/print.cpp src/story-branches/story_B.cpp src/story-branches/story_D.cpp src/story-branches/story_E.cpp src/story-branches/story_J.cpp src/story-branches/story_L.cpp src/story-branches/story_S.cpp src/misc.cpp src/game.cpp -l sqlite3 -o bin/cosmic-horizon.o

# Check return value to see whether or not it all crashed and burned
rc=$?; if ! [[ $rc != 0 ]];
then
    echo "...Compiled to bin/cosmic-horizon.o"
else
    exit 1 # Exit, while complaining
fi
exit 0
