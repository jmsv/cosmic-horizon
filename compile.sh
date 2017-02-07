# Running this (./compile.sh) uses the below command to compile to bin/game.o

g++ src/userin.cpp src/dbstore.cpp src/print.cpp src/game.cpp -l sqlite3 -o bin/game.o
