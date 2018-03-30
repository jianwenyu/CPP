#!/bin/bash

echo I am running the script

echo compling my function...
gcc -o main main.c fun1.c fun2.c fun3.c

./main

echo Execution complete, removing exe files....
rm main

echo Byebye
