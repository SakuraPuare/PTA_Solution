unr = [2,3,4,5,7]
noc = [0,1,8]
pair = {
    6:9,
    9:6,
}

x = int(input())

for _ in range(x):
    s = input()
    imposs = False
    ans = ''
    for i in s:
        if int(i) in unr:
            imposs = True
            break
        elif int(i) in noc:
            ans += i
        else:
            ans += str(pair[int(i)])
    if imposs:
        print('bu ke neng')
    else:
        print(ans)

