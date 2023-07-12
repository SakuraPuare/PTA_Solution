/*
# 简单计算器
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795297153036
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 MB

# 题目描述


![cal.jpg](https://images.ptausercontent.com/7a19b25d-2a56-49dc-bbc4-698c8b1db505.jpg)

本题要求你为初学数据结构的小伙伴设计一款简单的利用堆栈执行的计算器。如上图所示，计算器由两个堆栈组成，一个堆栈 $S_1$ 存放数字，另一个堆栈 $S_2$ 存放运算符。计算器的最下方有一个等号键，每次按下这个键，计算器就执行以下操作：

1. 从 $S_1$ 中弹出两个数字，顺序为 $n_1$ 和 $n_2$；
1. 从 $S_2$ 中弹出一个运算符 op；
1. 执行计算 $n_2$ op $n_1$；
1. 将得到的结果压回 $S_1$。

直到两个堆栈都为空时，计算结束，最后的结果将显示在屏幕上。

## 输入格式：

输入首先在第一行给出正整数 $N$（$1 < N \le 10^3$），为 $S_1$ 中数字的个数。

第二行给出 $N$ 个绝对值不超过 100 的整数；第三行给出 $N-1$ 个运算符 —— 这里仅考虑 `+`、`-`、`*`、`/` 这四种运算。一行中的数字和符号都以空格分隔。

## 输出格式：

将输入的数字和运算符按给定顺序分别压入堆栈 $S_1$ 和 $S_2$，将执行计算的最后结果输出。注意所有的计算都只取结果的整数部分。题目保证计算的中间和最后结果的绝对值都不超过 $10^9$。

如果执行除法时出现分母为零的非法操作，则在一行中输出：`ERROR: X/0`，其中 `X` 是当时的分子。然后结束程序。

## 输入样例 1：
```in
5
40 5 8 3 2
/ * - +
```

## 输出样例 1：
```out
2
```

## 输入样例 2：
```in
5
2 5 8 4 4
* / - +
```

## 输出样例 2：
```out
ERROR: 5/0
```
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    stack<char> op;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.push(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        char c;
        cin >> c;
        op.push(c);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        char c = op.top();
        op.pop();
        if (c == '+')
            s.push(b + a);
        else if (c == '-')
            s.push(b - a);
        else if (c == '*')
            s.push(b * a);
        else if (c == '/')
            if (a == 0)
            {
                cout << "ERROR: " << b << "/0" << endl;
                return 0;
            }
            else
                s.push(b / a);
    }

    cout << s.top() << endl;
}