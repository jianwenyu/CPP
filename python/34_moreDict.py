marks = {}.fromkeys(['Math','English','Science'],0)
print(marks)

for item in marks.items():
    print(item)

print(list(sorted(marks.keys())))
print(marks)

# cool
squares = {x:x*x for x in range(6)}
print(squares)

squareList = [x for x in range (6)]
print(squareList)

# equal to this operation
squares = {}
for x in range(6):
    squares[x]=x*x

print(squares)


# more dictionary creation
odd = {x:x*x for x in range(6) if x%2==1}
print(odd)

# membership test for key only, not value
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}

print(1 in squares)

print(2 not in squares)

print(49 in squares)

# Iterating Through a Dictionary
for i in squares:
    print(i,squares[i])

print(len(squares))
print(sorted(squares))
