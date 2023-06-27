#!/bin/bash
RUN_SCRIPT="run.sh"

for dir in */; do
    pushd $dir
    if [ -x "$RUN_SCRIPT" ]; then
        ./$RUN_SCRIPT
    else
        echo "ERROR: Cannot find $RUN_SCRIPT in $dir"
    fi
    popd
done
