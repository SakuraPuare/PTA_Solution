pair = {}

for _ in range(12):
    x = int(input())
    pair[x] = [[],[]]

    line = input().split()
    pair[x][0] = [int(i) for i in line[2:]]
    line = input().split()
    pair[x][1] = [int(i) for i in line[2:]]

n = int(input())
for _ in range(n):
    x,y = [int(i) for i in input().split()]
    f1 = x in pair[y][0] or y in pair[x][0]
    f2 = x in pair[y][1] or y in pair[x][1]

    if f1 and not f2:
        print('Yes')
    elif f2:
        print('No')
    else:
        print('NA')
    