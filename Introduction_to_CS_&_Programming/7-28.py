import math

r = int(input())
while r <= 0:
    r = int(input())

print('半径为{}的圆的面积是{:10.5f}'.format(r, math.pi * r * r))
