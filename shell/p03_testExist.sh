#!/bin/bash
#
# Description:
#			  practise the use of test command	
#
# Date: Apr 08,2018
#
# 1.check file name is valid (not null)
# 2.check existance of file
# 3.check permission of file
# 4.Output result
#

# 1. -p, prompt and store file name variable
read -p "Please enter the file name to check existance: " filename

# 1. -z, test whether is null string, if yes, return true
test -z $filename && echo "filename cannot be null."

# 2. !-e, if file not exist, output string and exit
test ! -e $filename && echo "file not exist" && exit 0

# 3. check permission
# 	 -f file
#	 -d directory
#	 -r readable
#	 -w writable
#	 -x executable

test -f $filename && filetype="regular file"
test -d $filename && filetype="directory"
test -r $filename && perm="readable"
test -w $filename && perm="$perm writable"
test -x $filename && perm="$perm executable"

# 4. Output result
echo "The file name $filename is $filetype."
echo "And the permissions is/are $perm."
