# alist = list(map(int, input().split()))
# blist = list(map(int, input().split()))
# print(list(set(alist + blist)))

alist = list(map(int,input().split()))
blist = list(map(int,input().split()))

clist = []
for i in alist:
    if i not in clist:
        clist.append(i)
        
for i in blist:
    if i not in clist:
        blist.append(i)