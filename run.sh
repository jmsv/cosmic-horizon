
./compile.sh

rc=$?; if [[ $rc != 0 ]];
then
    echo "Aborting"
    exit $?
fi

echo "Running..."
echo "--------------------------------------------------"
echo ""

./bin/cosmic-horizon.o

exit $? # Exit with code returned by executable
