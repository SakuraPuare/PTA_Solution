import math

l = []
inp = input().split()
m, n = min(map(int, inp)), max(map(int, inp))


def is_prime(x):
    if x <= 1:
        return False
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True


for i in range(m, n + 1):
    if is_prime(i):
        l.append(i)

if l:
    sum = 0
    for k in l:
        sum += k
    print(sum)
else:
    print('not have prime!')
