#!/bin/bash
#
# Description:
#			  function fname(){
#					content
#			  }
#
# Date: Apr 08,2018
#
# 

function printit(){
	echo -n "Your choice is "
}
read -p "Please input your choice: " choice

case $choice in
"1")
	printit;echo "1"
	;;
"2")
	printit;echo "2"
	;;
"3")
	printit;echo "3"
	;;
"")
	echo "There is no input"
	;;
*)
	printit;echo "$choice "
	;;
esac
