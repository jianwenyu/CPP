myset={1,3}

print(myset)

myset.add(2)

print(myset)

# add multiple elements
myset.update([2,3,4])
print(myset)

myset.update([1,2,3],(3,7,8))
print(myset)

# remove element from set
myset.discard(3)
print(myset)

# remove method will raise exception if element not exist
myset.remove(7)
print(myset)


# obtain random element by pop()
print(myset.pop())
print(myset)
# remove all elements by clear
myset.clear()
print(myset)

