#
# Description:
#			  while [ condition]
#			  do
#			  done
#
#			  Repeat question until user input correct answer
#
# Date: Apr 09,2018
#

while [ "$yn" != "yes" -a "$yn" != "YES" ]
do
	read -p "Please input yes/YES to stop this program:" yn
done

echo "OK, you input the correct answer."
 


