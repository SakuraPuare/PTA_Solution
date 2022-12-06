s = input().lower()
print('每个字母出现的次数：')
for i in range(ord('a'), ord('z') + 1):
    if (i - ord('a')) % 10 == 9:
        print('{} {}'.format(s.count(chr(i)), chr(i)))
    else:
        print('{} {} '.format(s.count(chr(i)), chr(i)), end='')
