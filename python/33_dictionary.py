myDict={}

myDict = {1:'apple',2:'ball'}

myDict = dict({1:'apple',2:'ball'})
print(myDict)

myDict = dict([(1,'apple'),(2,'ball')])
print(myDict)

myDict = {'name':'john',1:[2,4,3]}
print(myDict)

myDict['name']='lee'
myDict[1] = 3
print(myDict)

# create a dictionary
squares = {1:1, 2:4, 3:9, 4:16, 5:25}
print(squares)
print(squares.pop(4))
print(squares)
print(squares.popitem())
print(squares)
