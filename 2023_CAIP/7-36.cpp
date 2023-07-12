/*
# 哥尼斯堡的“七桥问题”
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795301347344
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述

哥尼斯堡是位于普累格河上的一座城市，它包含两个岛屿及连接它们的七座桥，如下图所示。

![](https://images.ptausercontent.com/51)

可否走过这样的七座桥，而且每桥只走过一次？瑞士数学家欧拉(Leonhard Euler，1707—1783)最终解决了这个问题，并由此创立了拓扑学。

这个问题如今可以描述为判断欧拉回路是否存在的问题。欧拉回路是指不令笔离开纸面，可画过图中每条边仅一次，且可以回到起点的一条回路。现给定一个无向图，问是否存在欧拉回路？

## 输入格式:

输入第一行给出两个正整数，分别是节点数$N$ ($1\le N\le 1000$)和边数$M$；随后的$M$行对应$M$条边，每行给出一对正整数，分别是该条边直接连通的两个节点的编号（节点从1到$N$编号）。

## 输出格式:

若欧拉回路存在则输出1，否则输出0。

## 输入样例1:
```in
6 10
1 2
2 3
3 1
4 5
5 6
6 4
1 4
1 6
3 4
3 6
```

## 输出样例1:
```out
1
```

## 输入样例2:
```
5 8
1 2
1 3
2 3
2 4
2 5
5 3
5 4
3 4
```

## 输出样例2:
```
0
```
*/

#include <iostream>

using namespace std;

const int N = 1e3 + 10;

bool vis[N];
bool path[N][N];
static int n, m;

void dfs(int i)
{
    vis[i] = true;
    for (int j = 1; j <= n; j++)
        if (path[i][j] && !vis[j])
            dfs(j);
}

bool check()
{
    dfs(1);
    int odd = 0;
    bool conn = true;
    for (int i = 1; i <= n; i++)
    {
        int degree = 0;
        for (int j = 1; j <= n; j++)
            if (path[i][j])
                degree++;
        odd += degree % 2;
        if (vis[i] == false)
            conn = false;
    }

    return odd == 0 && conn;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        path[a][b] = path[b][a] = true;
    }
    cout << check();
}