mySet = {1,2,3}
print(mySet)

mySet = {1.0,"hello",(1,2,3)}
print(mySet)

mySet = {1,2,3,3,5,3,2}
print(mySet)

# Set's element must be immutable(no list)
# Make set from list
my_set = set([1,2,3,2])
print(my_set)


# initialize a with {}
a = {}

# check data type of a
# Output: <class 'dict'>
print(type(a))

# initialize a with set()
a = set()

# check data type of a
# Output: <class 'set'>
print(type(a))
