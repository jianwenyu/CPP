def fib(n):
	result = []
	a,b=0,1
	while a < n :
		result.append(a)
		a,b=b,a+b
	return result
	
n = int(input("Please input a positive integer number:"))
result = fib(n)
print(result)