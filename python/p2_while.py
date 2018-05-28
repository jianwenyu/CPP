#!/usr/bin/python3

# Practising using while loop
# The place holder is {}, then .format(variable)

condition = int(input("Please input a condition number"))
dummy = 10
while condition > 0:
    print("The current condition is:{}, dummy value is {} ".format(condition,dummy))
    condition = condition - 1
print("script complete")


