#!/bin/bash
for filename in *.out; do
    echo "----- Start $filename -----"
    ./$filename
    echo "----- End $filename -----"
    printf "\n"
done
