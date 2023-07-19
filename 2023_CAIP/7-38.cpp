/*
# 列出所有祖先结点
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795301347346
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述 

对于给定的二叉树，本题要求你按从上到下顺序输出指定结点的所有祖先结点。

## 输入格式:

首先第一行给出一个正整数 N（≤10），为树中结点总数。树中的结点从 0 到 N−1 编号。

随后 N 行，每行给出一个对应结点左右孩子的编号。如果某个孩子不存在，则在对应位置给出 "-"。编号间以 1 个空格分隔。

最后一行给出一个结点的编号i（0≤i≤N-1）。

## 输出格式:

在一行中按规定顺序输出i的所有祖先结点的编号。编号间以 1 个空格分隔，行首尾不得有多余空格。

## 输入样例:

```in
7
2 -
- 6
- -
0 5
- -
4 1
- -
4
```

## 输出样例:

```out
3 5
```
*/

#include <iostream>
#include <vector>

using namespace std;

const int N = 1e4 + 10;

struct TreeNode
{
    int val;
    TreeNode *parent;
    TreeNode(int x) : val(x), parent(NULL) {}
};

void dfs(TreeNode *node)
{
    if (node->parent == NULL)
    {
        cout << node->val;
        return;
    }
    dfs(node->parent);
    cout << " " << node->val;
}

int main()
{
    int n;
    cin >> n;
    if (n < 2)
        return 0;
    vector<TreeNode *> tree(n);
    for (int i = 0; i < n; i++)
        tree[i] = new TreeNode(i);
    for (int i = 0; i < n; i++)
    {
        char a, b;
        scanf("\n%c %c", &a, &b);
        if (a != '-')
            tree[a - '0']->parent = tree[i];
        if (b != '-')
            tree[b - '0']->parent = tree[i];
    }

    int q;
    cin >> q;
    dfs(tree[q]->parent);
}