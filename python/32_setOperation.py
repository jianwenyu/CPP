# Union of set
A = {1, 2, 3, 4, 5}
B = {4, 5, 6, 7, 8}
C = A|B
print(C)
print(A.union(B))
print(B.union(A))

# Intersection of set
print(A&B)
print(A.intersection(B))
print(B.intersection(A))

# Set difference
print(A-B)
print(A.difference(B))
print(B-A)
print(B.difference(A))

# Set Symmetric Difference
print(A^B)
print(A.symmetric_difference(B))
print(B.symmetric_difference(A))
