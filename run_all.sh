#!/bin/bash
for dir in */; do
    pushd $dir
    ./run.sh
    printf "\n\n"
    popd
done
