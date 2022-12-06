import random

a, b = map(int, input().split())
random.seed(a)
for i in range(b):
    print(f"{random.randint(1, 9)}+{random.randint(1, 9)}=")
