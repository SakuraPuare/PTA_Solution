n = input()

for i in range(10):
    if n.count(str(i)) ==0:
        continue
    print(f'{i}:{n.count(str(i))}')