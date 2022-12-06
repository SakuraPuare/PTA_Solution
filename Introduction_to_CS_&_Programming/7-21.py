l = input().split()
s = set(list(l))
a = [{i: l.count(i)} for i in s]
a.sort(key=lambda x: list(x.items())[0][1], reverse=True)
for i in a:
    for k, v in i.items():
        print(f"{k}:{v}")
