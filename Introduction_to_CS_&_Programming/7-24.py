b = [chr(i) for i in range(65, 91)]
s = input().title()
print(''.join([i for i in s if i in b]))
