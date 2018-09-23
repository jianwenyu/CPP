class ComplexNumber:
   def __init__(self,r=0,i=0):
      self.real=r
      self.imag=i
   def getData(self):
      print("{0}+{1}j".format(self.real,self.imag))

#create a new complex number object
c1 = ComplexNumber(2,3)

c1.getData()

#create another complex number object with attr
c2 = ComplexNumber(5)
c2.attr = 10

print((c2.real,c2.imag,c2.attr))
c2.getData()
