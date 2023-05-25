x = int(input())
dit = {}
for i in range(x):
    n = int(input())
    dit[n] = i+1

x = int(input())
for i in range(x):
    n = int(input())
    if n in dit:
        print(dit[n])
    else:
        print('Sorry')

