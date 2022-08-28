inp = input().split(" ")
ans = [i for i in str(inp[0]) if i not in inp[1]]
print(''.join(inp[0])) if len(ans) == 0 else print(''.join(ans))
