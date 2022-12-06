x = eval(input("请输入整数x:"))
y = eval(input("请输入整数y:"))
if x < y:
    x, y = y, x

while True:
    r = x % y
    if r == 0:
        break
    x = y
    y = r

print("GCD(x,y) =", y)
