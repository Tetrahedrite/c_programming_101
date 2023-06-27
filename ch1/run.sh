#!/bin/bash
for filename in *.out; do
    ./$filename
    printf "\n\n"
done
