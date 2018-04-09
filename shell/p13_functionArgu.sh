#!/bin/bash
#
# Description:
#			  function fname(){
#					$0,$1 same as script
#			  }
#
# Date: Apr 08,2018
#
# 

function printit(){
	echo "Your choice is $1"
}
read -p "Please input your choice: " choice

case $choice in
"1")
	printit 1
	;;
"2")
	printit 2
	;;
"3")
	printit 3
	;;
"")
	echo "There is no input"
	;;
*)
	printit $choice
	;;
esac
