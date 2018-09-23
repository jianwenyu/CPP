# method 1
pow2 = [2**x for x in range(10)]
print(pow2)

# method 2

pow2 = []
for x in range(10):
    pow2.append(2**x)
    
print(pow2)


# method 3, add condition

pow2 = [2**x for x in range(10) if x >5]
print(pow2)

# method 4, more condition

oddList = [x for x in range(20) if x%2==1 ]
print(oddList)

# mothod 5, more condition
comList = [x+y for x in ['Python ','c '] for y in ['Language', 'Programming'] ]
print(comList)

