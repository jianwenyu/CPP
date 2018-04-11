#
# Description:
#			  calculate 1+2+..${input}
#			  for((init;condition;steps))
#				do
#				done
#
#	seq : generate sequence
#
# Date: Apr 10,2018
#

read -p "Please input a number, calculate the sum from 1 to input: " input

s=0
for((i=1;i<=$input;i=i+1))
do
	s=$(($s+$i))
done

echo "The result is $s"
