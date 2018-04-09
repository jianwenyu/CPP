#!/bin/bash
#
# Description:
#			  Arguments
#			  $#  - number of arguments
#			  $@  - collection of arguments
#			  shift "argument shift left"
#
# Date: Apr 08,2018
#
# 

echo "The script name is: " $0
echo "The total number of argument is: " $#
echo "There is/are: " $@
shift
echo "The total number of argument is: " $#
echo "There is/are: " $@
shift 2
echo "The total number of argument is: " $#
echo "There is/are: " $@
shift
echo "The total number of argument is: " $#
echo "There is/are: " $@
