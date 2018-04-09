#!/bin/bash
#
# Description:
#			  case ${} in
#				"${}")
#					;;
#				"${}")
#					;;
#				*)
#					;;
#				esac
#
# Date: Apr 08,2018
#
# 

read -p "Please input your choice: " choice
case $choice in
"1")
	echo "your choice is 1"
	;;
"2")
	echo "your choice is 2"
	;;
"3")
	echo "your choice is 3"
	;;
"")
	echo "There is no input"
	;;
*)
	echo "your choice is $choice "
	;;
esac
