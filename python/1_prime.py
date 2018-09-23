"""for n in range(2,10):
	for x in range(2,n):
		if n%x == 0:
			print(n,'equals',x,'*',n//x)
			break
	else:
		print(n,"n is a prime number.")
"""

for n in range(2,20):
	for x in range(2,n):
		if(n%x==0):
			print(n,"equal",x,"*",n//x)
			break;
	else:  # else condition when the loop not is terminated by a break
		print(n,"is a prime number.")
