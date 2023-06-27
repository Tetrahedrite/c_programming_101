#!/bin/bash
for filename in *.c; do
    gcc -o "$(basename $filename .c).out" $filename -lm -g
done
