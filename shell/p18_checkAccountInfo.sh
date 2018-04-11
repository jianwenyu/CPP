#
# Description:
#			  
#			  Use id, finger command to check system account's information
#
# Date: Apr 10,2018
#

users=$(cut -d ':' -f1 /etc/passwd) # account name
for username in $users
do
	#  id - print real and effective user and group IDs
	id $username
	
	# finger - user information lookup program
	finger $username
	
done
