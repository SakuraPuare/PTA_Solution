import math


def is_prime(x):
    if x <= 1:
        return False
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True


n = int(input())
l = []
for i in range(2, n):
    if is_prime(i):
        l.append(i)
print(l)
