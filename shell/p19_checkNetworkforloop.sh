#
# Description:
#			  
#			  Use ping command to check the network's pc state
#
#	seq : generate sequence
#
# Date: Apr 10,2018
#

network="192.168.1"

for sitenu in $(seq 1 100)  # generate a sequence from 1 to 100
do
	# -c counting times
	# -w timeout
	ping -c1 -w ${network}.${sitenu} &> /dev/null && result=0||result=1
	
	if [ "$result" == 0 ];then
		echo "Server ${network}.${sitenu} is up."
	else
		echo "Server ${network}.${sitenu} is down."
	fi
done
