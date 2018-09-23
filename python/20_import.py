from math import pi,e
#import math as m  # renaming import
#from math import *

print(pi,e)


import sys
for path in sys.path:
    print(path)

import example
for name in dir(example):
    print("function name include:",name)
    
print(example.__name__)

import math
for name in dir(math):
    print("function name include:",name)
