#
# Description:
#			  
#			  User input dir name, I find the permission of files
#
#	seq : generate sequence
#
# Date: Apr 10,2018
#

# 1. check existance of the directory
read -p "Please input a directly:" dir

if [ "$dir" == "" -o ! -d "$dir" ];then
	echo "The $dir is not exist in your system."
	exit 1
fi

# 2. start checking the directory

filelist=$(ls $dir)
for filename in $filelist
do
	perm=""
	test -r $filename && perm="$perm readable"
	test -w $filename && perm="$perm writable"
	test -x $filename && perm="$perm executable"
	echo "The $dir/$filename is $perm."
done
