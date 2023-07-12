/*
# 公路村村通
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795301347343
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述

现有村落间道路的统计数据表中，列出了有可能建设成标准公路的若干条道路的成本，求使每个村落都有公路连通所需要的最低成本。

## 输入格式:

输入数据包括城镇数目正整数$N$（$\le 1000$）和候选道路数目$M$（$\le 3N$）；随后的$M$行对应$M$条道路，每行给出3个正整数，分别是该条道路直接连通的两个城镇的编号以及该道路改建的预算成本。为简单起见，城镇从1到$N$编号。

## 输出格式:

输出村村通需要的最低成本。如果输入数据不足以保证畅通，则输出$-1$，表示需要建设更多公路。

## 输入样例:
```in
6 15
1 2 5
1 3 3
1 4 7
1 5 4
1 6 2
2 3 4
2 4 6
2 5 2
2 6 6
3 4 6
3 5 1
3 6 1
4 5 10
4 6 8
5 6 3
```

## 输出样例:
```out
12
```
*/

#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

const int N = 1e3 + 10;
int path[N][N];

int prim(int n)
{
    vector<bool> visited(n + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int mst_weight = 0;

    visited[1] = true;
    for (int i = 1; i <= n; i++)
        if (path[1][i] != -1)
            pq.push(make_pair(path[1][i], i));

    while (!pq.empty())
    {
        pair<int, int> edge = pq.top();
        pq.pop();

        int weight = edge.first;
        int node = edge.second;

        if (!visited[node])
        {
            visited[node] = true;
            mst_weight += weight;

            for (int i = 1; i <= n; i++)
                if (path[node][i] != -1 && !visited[i])
                    pq.push(make_pair(path[node][i], i));
        }
    }
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return -1;
    return mst_weight;
}

int main()
{
    memset(path, -1, sizeof(path));

    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        path[a][b] = path[b][a] = c;
    }

    int res = prim(n);
    cout << res;
    return 0;
}