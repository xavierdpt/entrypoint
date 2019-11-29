# From Python Basics, H. Bhasin
import math
from fractions import Fraction
from decimal import Decimal
import sys
import os

print(5+2)
print(5-2)
print(5*2)
print(5/2)
print(5%2)
print(5**2)
print(True and False)
print(True or False)
print(not True)

print(math.ceil(2.678))
print(math.copysign(1,2))
print(math.fabs(2))
print(math.factorial(2))
print(math.floor(2))

print(Fraction(1,2))

print(Fraction(Decimal('1.1')))

mystring = 'mystring'
print(mystring)
print(mystring[0])
print(mystring[-1])
print(len(mystring))
print(mystring+mystring)
print(3*mystring)
print(mystring[1:])
print(mystring[:2])
print(mystring[:-2])
print(mystring[-2:])

mylist = []
mylist.append('hello')
mylist.append('world')
print(len(mylist))
print(mylist[1])

mytuple=(1,2)
print(mytuple)
(b,a)=mytuple
print((a,b))
print(mytuple+mytuple)

if a == b:
    print('equality')
elif a == b+1:
    print('equality + 1')
else:
    print('inequality')

a = input("Enter something: ")
print("Input was {}".format(a))
print(int(a))

print(True & False)
print(True | False)
print('equality' if a==b else 'inequality')

mymap = {'a':1}
print(mymap.get('b','na'))

i=0
while i != 10:
    print('Still counting')
    i=i+1
else:
    print('Done counting')
print(i)

for i in range(3):
    print(i)

print('something',end=';\n')

print(1,2,3,sep='!')

def f(x):
    print(x)
    return x

titi=5
def g():
    titi=6
g()
print(titi)

for x in [1,5,7]:
    print(x)

for x in "hello":
    print(x)

for x in {'a':1,'b':2}:
    print(x)

it = iter([1,2,3])
try:
    while True:
        # Python 3: next => __next__
        print(it.__next__())
except StopIteration:
    print("End of iteration")

it = iter("hello")
try:
    while True:
        print(it.__next__())
except StopIteration:
    print("End of iteration")

print(sorted([2,5,1]))

def mygen():
    i=1
    while True:
        yield i
        i=i+1
print(mygen())
for i in mygen():
    if(i==5):
        break
    print(i)

print([2*x for x in range(1,4)])
print([(x,y) for x in range(1,3) for y in "hello"])
print(sys.argv)

f=open('myfile.txt','w')
f.write('Hello there!\n')
f.write('How are you?\n')
f.close()
f=open('myfile.txt','r')
text = f.read()
print(text)
f.close()
os.rename('myfile.txt','mynewfile.txt')
print(os.getcwd())

# Stopped at chapter 8: strings
