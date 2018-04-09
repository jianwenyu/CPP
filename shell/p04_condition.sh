#!/bin/bash
#
# Description:
#			  Using [] instead of test, basically the some	
#
# Date: Apr 08,2018
#
# 

read -p "Please input(Y/N):" yn
[ "$yn" == "Y" -o "$yn" == "y" -o "$yn" == "yes" -o "$yn" == "YES" ] && echo "OK, continue." && exit 0
[ "$yn" == "N" -o "$yn" == "n" -o "$yn" == "NO" -o "$yn" == "no" ] && echo "OK, interrupt." && exit 0
echo "I dont know what your choice is." && exit 0

