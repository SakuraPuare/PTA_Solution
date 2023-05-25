n = int(input())

pair = {}
cnt = {}

for _ in range(n):
    x,y = map(int, input().split())
    pair[x] = y
    pair[y] = x
    cnt[x] = 0
    cnt[y] = 0

m = int(input())
lst = [int(i) for i in input().split()]

for n,i in enumerate(lst):
    if i in pair:
        if n == 0 or n == len(lst)-1:
            pass 
        el