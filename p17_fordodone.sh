#
# Description:
#			  
#			  for var in con1 con2 con3 ...
#			  do
#					content
#			  done
#
# Date: Apr 10,2018
#

files=$(more ss.csv | cut -d ',' -f2-5)

echo -e "$files\n"
#for data in $files
#do
#echo $data
#done
