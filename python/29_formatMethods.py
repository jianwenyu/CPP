defaultOrder = "{},{},{}".format('lee','john','tom')
print(defaultOrder)

positionalOrder = "{1},{2},{0}".format('lee','john','tom')
print(positionalOrder)

keywordOrder = "{s},{b},{n}".format(b='lee',s='john',n='tom')
print(keywordOrder)

print("Binary representation of {0} is {0:b}".format(12))
print("Octal representation of {0} is {0:o}".format(12))
print("Hex representation of {0} is {0:x}".format(12))

print("Exponent representation of {0} is {0:e}".format(12654))

# Lower case
print("PrOgRaMiZ".lower())

# Upper case
print("PrOgRaMiZ".upper())

# split string
print("This will split all words into a list".split())

# split string
print("This will split all words into a list".split('i'))

# join string
print( ' '.join(['This', 'will', 'join', 'all', 'words', 'into', 'a', 'string']))

# join string
print( ','.join(['This', 'will', 'join', 'all', 'words', 'into', 'a', 'string']))
