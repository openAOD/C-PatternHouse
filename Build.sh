#!/bin/bash

for directory in */ ; do
    cd "$directory"
    for file in *.c ; do
      echo "gcc $file"
      gcc $file > /dev/null
    done
    cd ..
done
