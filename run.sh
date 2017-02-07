
./compile.sh

rc=$?; if [[ $rc != 0 ]];
then
    echo "Aborting"
    exit $?
fi

echo "Running..."
echo "--------------------------------------------------"

./bin/cosmic-horizon.o
