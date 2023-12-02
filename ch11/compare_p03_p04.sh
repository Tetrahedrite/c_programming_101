#!/bin/sh

X_BEFORE_SOURCE="11_p03"
X_AFTER_SOURCE="11_p04"

X_BEFORE="11_p03.out"
X_AFTER="11_p04.out"

if ! [ -x "$X_BEFORE" ] || ! [ -x "$X_AFTER" ]; then
    echo "There is no $X_BEFORE and $X_AFTER... Try to make..."
    make "$X_BEFORE_SOURCE" "$X_AFTER_SOURCE"
fi

if [ -x "$X_BEFORE" ] && [ -x "$X_AFTER" ]; then
    echo "Executing $X_BEFORE..."
    time ./$X_BEFORE
    echo "Executing $X_AFTER..."
    time ./$X_AFTER
else
    echo "Fatal error: failed to find $X_BEFORE and $X_AFTER"
fi
