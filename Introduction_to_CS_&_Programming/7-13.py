import random

x = int(input())
n = int(input())
m = int(input())

s = [chr(i) for i in range(97, 123)]
b = [chr(i) for i in range(65, 91)]
num = [chr(i) for i in range(48, 58)]
l = s + b + num
random.seed(x)
for i in range(n):
    s = ""
    for j in range(m):
        ch = random.choice(l)
        s = s + ch
    print(s)
