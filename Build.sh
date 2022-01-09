#!/bin/bash

for directory in */ ; do
    pushd "$directory"
    for file in *.c ; do
      echo "gcc $file"
      gcc $file > /dev/null
    done
    popd
done
