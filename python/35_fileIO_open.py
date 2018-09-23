# open file in current directory
f = open("33_fileIO_test.txt")    # equal to 'r' or 'rt'

# open file with full path
#f = open("C:\Users\Jerry Yu\Desktop\python\33_fileIO_test.txt")  # specifying full path

# open file in write mode
f = open("test.txt",'w')

# open file in read and wirte in binary mode
f = open("img.bmg",'r+b')

# Highly recommand to specific the encoding type
f = open("test.txt",mode = 'r',encoding = 'utf-8')

""" Close file """
#Close file
f.close()


""" safe way to use try...finally block."""
try:
    f = open("test.txt",enconding='utf-8')

    # perform file operation
finally:
    f.close()

""" The best way to do is using the with statement."""

with open("test.txt", encoding = 'utf-8') as f:
    # perform file operation
