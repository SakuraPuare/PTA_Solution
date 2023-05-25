x = int(input())

m = -1
cnt = 0

for _ in range(x):
    s = input()
    x = int(s)
    if x < 0:
        continue
    elif len(s) % 2 != 0:
        continue
    length = len(s)
    a = s[:length//2 ]
    b = s[length//2:]
    lsa = [int(i) for i in a]
    lsb = [int(i) for i in b]
    flag = True

    lst = 10
    for i in lsa:
        if i > lst:
            flag = False
            break
        lst = i
    
    lst = -1
    for i in lsb:
        if i < lst:
            flag = False
            break
        lst = i
    
    if not  flag:
        continue
    
    sa = sum(lsa)
    sb = sum(lsb)

    if sa % 2 != sb % 2:
        cnt += 1
        m = max(m, x)
    
print(cnt, m, sep='\n')





    