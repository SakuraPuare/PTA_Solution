def gcd(a, b):
    return a if b == 0 else gcd(b, a % b)


def lcm(a, b):
    return int(a * b / gcd(a, b))


x = int(input())
y = int(input())
print('{} {}'.format(gcd(x, y), lcm(x, y)), end='')
