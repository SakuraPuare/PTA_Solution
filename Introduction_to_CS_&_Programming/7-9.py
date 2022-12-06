def frac(x):
    if x == 1:
        return 1
    return x * frac(x - 1)


n = int(input())
sum = 0
for i in range(1, n + 1):
    sum += frac(i)
print(sum)
