/*
# 列出连通集
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795301347347
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述

给定一个有$N$个顶点和$E$条边的无向图，请用DFS和BFS分别列出其所有的连通集。假设顶点从0到$N-1$编号。进行搜索时，假设我们总是从编号最小的顶点出发，按编号递增的顺序访问邻接点。

## 输入格式:

输入第1行给出2个整数$N$($0<N\le 10$)和$E$，分别是图的顶点数和边数。随后$E$行，每行给出一条边的两个端点。每行中的数字之间用1空格分隔。

## 输出格式:

按照"{ $v_1$ $v_2$ ... $v_k$ }"的格式，每行输出一个连通集。先输出DFS的结果，再输出BFS的结果。

## 输入样例:
```in
8 6
0 7
0 1
2 0
4 1
2 4
3 5
```

## 输出样例:
```out
{ 0 1 4 2 7 }
{ 3 5 }
{ 6 }
{ 0 1 2 7 4 }
{ 3 5 }
{ 6 }
```
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 10 + 2;

vector<vector<int>> path(N, vector<int>(N, false));
static int n, e;

void print(vector<vector<int>> &ans)
{
    for (auto &v : ans)
    {
        cout << "{ ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "}" << endl;
    }
}

void dfs(int i, vector<bool> &visited, vector<int> &conn)
{
    visited[i] = true;
    conn.push_back(i);

    for (int j = 0; j < n; j++)
        if (!visited[j] && path[i][j])
            dfs(j, visited, conn);
}

void bfs(int i, vector<bool> &visited, vector<int> &conn)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        conn.push_back(node);

        for (int j = 0; j < n; j++)
            if (!visited[j] && path[node][j])
            {
                visited[j] = true;
                q.push(j);
            }
    }
}

void find(int i, vector<vector<int>> &ans)
{
    vector<bool> visited(N, false);

    for (int i = 0; i < n; i++)
        if (!visited[i])
        {
            vector<int> conn;
            dfs(i, visited, conn);
            ans.push_back(conn);
        }

    visited.assign(N, false);

    for (int i = 0; i < n; i++)
        if (!visited[i])
        {
            vector<int> conn;
            bfs(i, visited, conn);
            ans.push_back(conn);
        }
}

int main()
{
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        path[a][b] = path[b][a] = true;
    }

    vector<vector<int>> ans;
    find(0, ans);
    print(ans);
}