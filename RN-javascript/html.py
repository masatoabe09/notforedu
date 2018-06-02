# -*- coding: utf-8 -*-

print("HelloWorld")                                                         
print """<html lnag="ja">
<body>
</body>
 </html>"""

a = 100

b = c = 200

d,e = 300,400

print("a=",a)
print("b=",b)
print("c=",c)
print("d=",d)
print("e=",e)

for char in 'Hello':
    print(char)

for num in range(5, 10):
    print\
    (num - 4)

for i in range(10):
	print("Hello World!")

print\
    ("""alphabet
    a
    bc
    def
    ghij
    klmno
    pqrstu
    vwxyz
    """)
a = 3
b = 5
c = a * b
c

file = open('test.txt', 'r')
string = file.read()
 
print(string)

aaa = 80
for i in range(30, aaa):
    if i % 5 == 0:
        print(i)
        
x = 5
y = 3
a = x - y
b = x * y
c = a + b
c

z = "Hello World"
z

#出力して結果を確かめよう。

z="Hello"
a="World"
print(z,a)

2 != 3

z = "Hello World"
z == "Hello World"

z == "Hello WOrld"

1 == 1 and 2 < 10 and 3 != 10

1 == 2 or 2 > 3 or 5 != 8

not 1 == 1

Country = "Japan"
if Country == "Japan":
 print("You're in Japan")
else:
 print("You're not in Japan")

x = "Hello"
y = "World"

if x == "Hell":
 if y == "World":
  print(x + y)
else:
  print("Wrong Word")