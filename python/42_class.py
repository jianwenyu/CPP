class MyNewClass:
   '''This is a docstring. I have created a new class'''
   pass

class MyClass:
   "This is my seccond class"
   a = 10
   def func(self):
      print('hello')

print(MyClass.a)

print(MyClass.func)

print(MyClass.__doc__)

ob = MyClass()
print(ob.a)
ob.func()
print(ob.func)
