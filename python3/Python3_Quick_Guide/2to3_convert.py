#Here is a sample Python 2 code (area.py):

'''
def area(x,y = 3.14): 
   a = y*x*x
   print a
   return a

a = area(10)
print "area",a
'''

#To convert into Python 3 version:

#$2to3 -w area.py

#Converted code :
#!/usr/bin/python3

def area(x,y = 3.14): # formal parameters
   a = y*x*x
   print (a)
   return a

a = area(10)
print("area",a)

'''

'''