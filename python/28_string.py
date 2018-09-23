#String doesn't support single element assignment, and deletion

myString = 'programiz'
print(myString)

myString = "Hello"
print(myString)

str1 = 'hello '
str2 = 'world'
print("str1+str2 = ",str1+str2)

s = str1+str2
print(s)
count=0
for ss in s:
    if ss=='l':
       count+=1
print('There is/are {} l in the string s'.format(count))

str = 'cold'

#enumerate()
listEnumerate = list(enumerate(str))
print(listEnumerate)
print('list(enumerate(str)) = ',listEnumerate)
print("Length of the string is:",len(str))

# using triple quotes
print('''He said, "What's there?"''')

# escaping single quotes
print('He said, "What\'s there?"')

# escaping double quotes
print("He said, \"What's there?\"")
