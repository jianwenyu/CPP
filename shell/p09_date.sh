#!/bin/bash
#
# Description:
#			  date calculation
#
# Date: Apr 08,2018
#
# 

echo "This program will try to calculate:"
echo "The total days that you need to serve before demobilization"
read -p "Please input your demobilization date(YYYYMMDD):" date2

date_d=$(echo $date2 | grep '[0-9]\{8\}') #check whether has 8 number
if [ "$date_d" == "" ];then
	echo "You input the wrong time format."
	exit 1
fi
declare -i date_dem=`date --date="$date2" +%s` 	# demobilization date in second
declare -i date_now=`date +%s` 					# second of today
declare -i date_total=$(($date_dem-$date_now)) 	# difference in second
declare -i date_d=$(($date_total/60/60/24))		# convert the total second into day

if [ "$date_d" -lt "0" ];then
	echo "You have been demobilized before:" $((-1*$date_d)) "days ago"
else
	echo "You will be demobilized in" $date_d "days."
fi

