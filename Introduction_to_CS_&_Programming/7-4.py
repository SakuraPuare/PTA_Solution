n = int(input())
sum = 0
for i in range(n):
    sum += 1 / (2 * i + 1)
# sum = 0.0
# i = 1
# k = 0
# while k < n:
#     sum += 1.0 / i
#     i += 2
#     k += 1

print('sum={:.6f}'.format(sum))
