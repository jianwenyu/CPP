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

case $1 in
"1")
	echo "argv[1] is 1"
	;;
"2")
	echo "argv[2] is 2"
	;;
"3")
	echo "argv[3] is 3"
	;;
"")
	echo "There is no argument"
	;;
*)
	echo "Usage $0 #1~3"
	;;
esac
