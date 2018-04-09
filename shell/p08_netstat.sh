#!/bin/bash
#
# Description:
#			  Practise condition
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

echo "Now, I will detect your Linux server's services! "
echo -e "The www, ftp, ssh, and mail will be detect!\n"

# use variable to store big bulk of resut
testing=$(netstat -tuln | grep ":80") # check port 80

if [ "$testing" != "" ];then
	echo "WWW is running in your system, they are:"
	#echo $testing
fi

testing=$(netstat -tuln | grep ":22") # check port 22

if [ "$testing" != "" ];then
	echo "SSH is running in your system, they are:"
	#echo $testing
fi

testing=$(netstat -tuln | grep ":21") # check port 21

if [ "$testing" != "" ];then
	echo "FTP is running in your system, they are:"
	#echo $testing
fi

testing=$(netstat -tuln | grep ":25") # check port 25

if [ "$testing" != "" ] ;then
	echo "Mail service is running in your system, they are:"
	#echo $testing
fi

