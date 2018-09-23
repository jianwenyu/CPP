""" write file """
with open("test.txt",'w',encoding = 'utf-8') as f:
    f.write("my first file\n")
    f.write("This file\n\n")
    f.write("contains three lines\n")
    
            
""" read file """
f = open("test.txt",'r',encoding='utf-8')
print(f.read(4))
print(f.read(4))
#print(f.read())
#print(f.read())

# get the current file position
print(f.tell())

# bring the file cursor to inital position
print(f.seek(0))

print(f.read())

f.seek(0)
print(f.readline(),end ='')
print(f.readline(),end ='')
print(f.readline(),end ='')
print(f.readline(),end ='')

f.seek(0)
print(f.readlines())
