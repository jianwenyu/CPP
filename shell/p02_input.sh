#!/bin/bash
#
# The read -p (prompt the text) -t(timeout second)
#
read -t 5 -p "Please input your first name:" firstName
read -t 5 -p "Please input your last name:" lastName
echo "Your full name is $firstName $lastName"
exit 0
