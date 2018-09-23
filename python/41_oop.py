class Parrot:

   # class attribute
   species = 'bird'

   def __init__(self,name,age):
      self.name = name
      self.age = age

   def sing(self,song):
      return "{} sing {}.".format(self.name,song)

   def dance(self):
      return "{} is now dancing.".format(self.name)

blu = Parrot('Blu',10)
woo = Parrot('Woo',15)

print('blu is a {}'.format(blu.__class__.species))
print('woo is a {}'.format(woo.__class__.species))

print("{} is {} years old".format(blu.name,blu.age))
print("{} is {} years old".format(woo.name,woo.age))

print(blu.sing("hello"))
print(woo.sing("world"))
print(blu.dance())
print(woo.dance())
