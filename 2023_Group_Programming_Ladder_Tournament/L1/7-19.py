n = int(input())

for _ in range(n):
    s = input()
    # print([i.endswith('ong.') or i.endswith('ong') for i in s.split(',')])
    if all([i.endswith('ong.') or i.endswith('ong') for i in s.split(',')]):
        s = s.split(' ')
        print(' '.join(s[:-3] + ['qiao', 'ben', 'zhong.']))
    else:
        print('Skipped')
