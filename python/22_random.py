import random

print(random.randrange(10,20))

x = ['a','b','c','d','e']

#Get random choice
print(random.choice(x))

random.shuffle(x)

print(x)

print(random.random())

for name in dir(random):
    print("function name:",name)
