# n = int(input())

# sum = 0
# k = 1
# while k <= n:
#     m = 1
#     for i in range(2, k+1):
#         m *= i
#     sum += m
#     k += 1

# print(sum)


def frac(x):
    if x == 1:
        return 1
    return x * frac(x - 1)

# frac(5) -> return 5 * frac(4)
# frac(4) -> return 4 * frac(3)
# frac(3) -> return 3 * frac(2)
# frac(2) -> return 2 * frac(1)
# frac(1) -> return 1

n = int(input())
sum = 0
for i in range(1, n + 1):
    sum += frac(i)
print(sum)
