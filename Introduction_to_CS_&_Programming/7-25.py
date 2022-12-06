bian = []
a = float(input())
bian.append(a)
b = float(input())
bian.append(b)
c = float(input())
bian.append(c)
Bian = sorted(bian)  # 边排序
if Bian[0] + Bian[1] > Bian[2] and Bian[2] - Bian[1] < Bian[0]:
    s = (a + b + c) / 2  # 计算半周长
    area = (s * (s - a) * (s - b) * (s - c)) ** 0.5  # 计算面积
    print('{:.2f}'.format(area))
else:
    print('数据错误')
