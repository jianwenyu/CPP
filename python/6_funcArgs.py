def f(a,l=[]):
	l.append(a)
	return l

print("Default value call:")
print(f(1))
print(f(2))
print(f(3))
print(f(4))


def f1(a,l=None):
	if l is None:
		l = []
	l.append(a)
	return l
	
print("None Default value call:")
print(f1(1))
print(f1(2))
print(f1(3))
print(f1(4))

print("Variable value call:")
l=[]
print(f1(1,l))
print(f1(2,l))
print(f1(3,l))
print(f1(4,l))