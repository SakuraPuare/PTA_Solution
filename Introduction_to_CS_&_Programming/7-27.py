def s(x):
    if x == -1:
        return 0
    if x == 0:
        return 1
    return 2 ** x + s(x - 1)


print(s(int(input()) - 1))
