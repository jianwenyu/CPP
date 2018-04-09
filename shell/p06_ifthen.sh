#!/bin/bash
#
# Description:
#			  if [ condition ];
#				then
#			  fi
#
# Date: Apr 08,2018
#
# 

read -p "Please input Y/N: " yn
if [ "$yn" == "Y" ]||[ "$yn" == "y" ];then
	echo "OK, continue."
	exit 0
fi

if [ "$yn" == "N" ] || [ "$yn" == "n" ];then
	echo "OK, interrupt."
	exit 0
fi

echo "I dont know what your choice is" && exit 0
