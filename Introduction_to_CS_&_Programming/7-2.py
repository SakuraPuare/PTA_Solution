import math

x = float(input())
print('f({:.2f})={:.3f}'.format(x, math.sin(math.radians(35)) + (math.e ** x - 15 * x) / (
    math.sqrt(x ** 4 + 1)) - math.log(7 * x)))
