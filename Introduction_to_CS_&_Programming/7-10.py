l = map(int, input().split())
m = 0
n = 0
for i, j in enumerate(l):
    if j > m:
        m = j
        n = i
print('{} {}'.format(m, n), end='')
