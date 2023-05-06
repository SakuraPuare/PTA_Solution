import random

a = random.randint(1, 100)
b = random.randint(1, 100)
c = random.randint(1, 100)


def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def lcm(a, b):
    return a * b // gcd(a, b)