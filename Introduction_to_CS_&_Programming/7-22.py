s = input()
l = []
d = {}
while s != '':
    l.append(s)
    s = input()

for i in l:
    k, v = i.split(':')
    d[k] = v

name = input()
print('请输入要查询的课程：')
print(d[name] if d.__contains__(name) else '没有该门课程')
