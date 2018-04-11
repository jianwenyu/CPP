#
# Description:
#			  until [ condition]
#			  do
#			  done
#
#			  Repeat question until user input correct answer
#
# Date: Apr 09,2018
#

until [ "$yn" == "yes" -o "$yn" == "YES" -o "$yn" == "y" ]
do
	read -p "Please input yes/YES/y to stop the program: " yn
done

echo "OK, you input the correct answer."
