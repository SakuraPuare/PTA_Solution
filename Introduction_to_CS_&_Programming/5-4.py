def ISBN(n):
    s = 0
    for i in range(10, 1, -1):
        s += int(str(n)[10 - i]) * i
    N = 11 - s % 11
    if N == 10:
        return str(n) + 'X'
    elif N == 11:
        return str(n) + '0'
    return str(n) + str(N)


for num in [201314525, 488888913, 977889994, 753231846, 701134069]:
    trueISBN = ISBN(num)
    print(trueISBN)
