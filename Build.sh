#!/bin/bash

set -e

for directory in */ ; do
    cd "$directory"
    for file in *.c ; do
      echo "gcc $file"
      gcc -w -lm $file > /dev/null
    done
    cd ..
done
