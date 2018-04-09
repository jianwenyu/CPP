#!/bin/bash
#
# Description:
#			  if [ condition ];then
#				
#			  elif [ condition ];then
#			  elif [ condition ];then
#			  else
#			  fi
#			  
#
# Date: Apr 08,2018
#
# 

read -p "Please input Y/N: " yn
if [ "$yn" == "Y" ]||[ "$yn" == "y" ];then
	echo "OK, continue."
	exit 0
elif [ "$yn" == "N" ] || [ "$yn" == "n" ];then
	echo "OK, interrupt."
	exit 0
else

	echo "I dont know what your choice is" && exit 0

fi
