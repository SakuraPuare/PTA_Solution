/*
# 寻宝图
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795301347330
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述

给定一幅地图，其中有水域，有陆地。被水域完全环绕的陆地是岛屿。有些岛屿上埋藏有宝藏，这些有宝藏的点也被标记出来了。本题就请你统计一下，给定的地图上一共有多少岛屿，其中有多少是有宝藏的岛屿。

## 输入格式：

输入第一行给出 2 个正整数 $N$ 和 $M$（$1 < N\times M\le 10^5$），是地图的尺寸，表示地图由 $N$ 行 $M$ 列格子构成。随后 $N$ 行，每行给出 $M$ 位个位数，其中 `0` 表示水域，`1` 表示陆地，`2`\-`9` 表示宝藏。\
注意：两个格子共享一条边时，才是“相邻”的。宝藏都埋在陆地上。默认地图外围全是水域。

## 输出格式：

在一行中输出 2 个整数，分别是岛屿的总数量和有宝藏的岛屿的数量。

## 输入样例：

```in
10 11
01000000151
11000000111
00110000811
00110100010
00000000000
00000111000
00114111000
00110010000
00019000010
00120000001
```

## 输出样例：

```out
7 2
```
*/

#include <iostream>
#include <vector>

using namespace std;

static int n, m, cnt = 0, cnt_treasure = 0;

vector<vector<int>> map;
vector<vector<bool>> visited;

int dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || !map[x][y])
        return 0;

    visited[x][y] = true;

    int m = map[x][y];
    return max(m, max(dfs(x - 1, y), max(dfs(x + 1, y), max(dfs(x, y - 1), dfs(x, y + 1)))));
}

int main()
{
    cin >> n >> m;
    map.resize(n, vector<int>(m));
    visited.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%1d", &map[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!visited[i][j] && map[i][j])
            {
                cnt++;
                if (dfs(i, j) > 1)
                    cnt_treasure++;
            }
    
    cout << cnt << " " << cnt_treasure << endl;
}