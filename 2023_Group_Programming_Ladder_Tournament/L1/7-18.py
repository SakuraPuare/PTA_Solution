s = input().split(' ')

l = []
for i in s:
    if i.count('6') <= 3:
        l.append(i)
    elif i.count('6') <= 9:
        l.append('9')
    else:
        l.append('27')

print(' '.join(l))
