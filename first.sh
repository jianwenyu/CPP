#!/bin/sh

for file in *
do
    if grep -q swap $file
    then 
    more $file
    fi
    done
    exit 0
