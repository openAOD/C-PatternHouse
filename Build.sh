#!/bin/bash

for directory in */ ; do
    cd $directory
    for file in ./& do
      gcc file
    done
done
