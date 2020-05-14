#!/bin/bash

rm -rf bin
mkdir -p bin

pushd bin

cmake ..

if [[ $? -ne 0 ]]; then
	echo "BUILD ERROR"
fi
make clean
make

popd