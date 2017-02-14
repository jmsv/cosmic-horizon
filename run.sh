#!/bin/bash

clear

# Call compile script
./compile.sh

# Check exit code
rc=$?; if [[ $rc != 0 ]];
then
    echo "Aborting" # It went wrong - don't run the executable
    exit $? # Exit
fi

echo "Running..."
echo ""

# Run executable
./bin/cosmic-horizon.o

exit $? # Exit with code returned by game executable
