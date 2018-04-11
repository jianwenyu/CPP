#
# Description:
#			  Use loop to calculate the sum 1~100
#			  while [ condition]
#			  do
#			  done
#			  double (( )) for calculation
# Date: Apr 09,2018
#

s=0
i=0
while [ "$i" != "100" ]
do
	i=$(($i+1))
	s=$(($i+$s))
	
done

echo "The sum of 1-100 is: " $s

i=0
s=0
until [ "$i" == "100" ]
do
	i=$(($i+1))
	s=$(($s+$i))
done
echo "The sume of 1~100 is: "$s
