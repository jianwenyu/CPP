def make_incrementor(n):
	return lambda x:x+n
	
f = make_incrementor(42)
print(f)
f(0)
f(1)