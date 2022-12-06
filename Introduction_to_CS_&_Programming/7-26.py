d = {'B': 0, 'KB': 1, 'MB': -2, 'GB': -3, 'TB': -4}
s = input()
print(f"{-1024 ** d[s]}byte")
