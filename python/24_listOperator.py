odd = [1,3,5]

odd.append(7)
print(odd)

odd.extend([9,11,13])
print(odd)

print(odd + [15,17])

print(['re']*3)

odd.insert(3,12)
print(odd)

odd[2:2] = [34,21]
print(odd)

print(odd.pop())
print(odd)

print(odd.append(22))
print(odd)

print(odd.pop(3))
print(odd)

#odd.clear()
odd.sort()
print(odd)

odd.reverse()
print(odd)
