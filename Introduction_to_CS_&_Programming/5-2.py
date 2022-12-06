a = input()
num1 = eval(a)
numbers = list(num1)


# 请在此添加函数bubbleSort代码，实现编程要求
# ********** Begin *********#


def bubbleSort(ns):
    m = 0
    for j in range(len(ns) - 1):  # 控制轮次
        for i in range(len(ns) - 1 - j):  # 控制每轮比较
            if ns[i] > ns[i + 1]:
                ns[i], ns[i + 1] = ns[i + 1], ns[i]  # 交换，大数放右
    return ns


# ********** End **********#
print(bubbleSort(numbers))
