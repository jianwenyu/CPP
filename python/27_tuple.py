myTuple = (1,2,3)
print(myTuple)

myTuple = 4,5,6
print(myTuple)

myTuple = 7,"hello",4.3
print(myTuple)

a,b,c = myTuple
print(a)
print(b)
print(c)

myTuple = ('p','e','r','m','i','t')

print(myTuple[0])
print(myTuple[1:3])

# nested tuple
# String, list, tuple
n_tuple = ("mouse", [8, 4, 6], (1, 2, 3))

print(n_tuple[0][2])

print(n_tuple[:])

''' Tuple is immutable but if the element
itself is mutable item, it can be changed.
'''

# concatenation
print((1,2,3)+(4,5,6))
print(('repeat',)*3)
del n_tuple

myTuple = ('p','e','r','m','i','t')
print(myTuple.count('i'))
print(myTuple.index('t'))
