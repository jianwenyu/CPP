import os

# get current directory
print(os.getcwd())

#print(os.getcwdb())

#os.chdir('c:\\Users\\Jerry Yu\\Desktop')
print(os.getcwd())


""" Obtain directories inside a directory can be know by listdir()"""
os.listdir()
#for file in os.listdir():
#    print(file)

print("Making a new dir")
os.mkdir("testDir")

print("Remove it")
os.rmdir('testDir')

print("Renaming directory")
#os.rename('testDir','afterRename')


""" To remove the non empty directory """
import shutil
os.mkdir("test")
os.chdir(".\\test")
print(os.getcwd())
with open("testFile.txt",'w',encoding = 'utf-8') as f:
    f.write("This is a test string")

os.chdir("..\\")
print(os.getcwd())
shutil.rmtree('test')
