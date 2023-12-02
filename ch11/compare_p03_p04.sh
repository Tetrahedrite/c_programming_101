#!/bin/sh

X_BEFORE="11_p03.out"
X_AFTER="11_p04.out"

if [ -x "$X_BEFORE" ] && [ -x "$X_AFTER" ]; then
    echo "Executing $X_BEFORE..."
    time ./$X_BEFORE
    echo "Executing $X_AFTER..."
    time ./$X_AFTER
fi
