# l = input()[1:-1].split(', ')
# print(int(''.join(sorted(l))))

l = eval(input())
print(int(''.join(map(str, sorted(l)))))
