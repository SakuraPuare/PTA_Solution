/*
# 这是二叉搜索树吗？
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1674039795297153032
 - 代码长度限制：16 KB
 - 时间限制：400 ms
 - 内存限制：65536 KB

# 题目描述

一棵二叉搜索树可被递归地定义为具有下列性质的二叉树：对于任一结点，

- 其左子树中所有结点的键值小于该结点的键值；
- 其右子树中所有结点的键值大于等于该结点的键值；
- 其左右子树都是二叉搜索树。

所谓二叉搜索树的“镜像”，即将所有结点的左右子树对换位置后所得到的树。

给定一个整数键值序列，现请你编写程序，判断这是否是对一棵二叉搜索树或其镜像进行前序遍历的结果。

## 输入格式：

输入的第一行给出正整数 $N$（$\le 1000$）。随后一行给出 $N$ 个整数键值，其间以空格分隔。

## 输出格式：

如果输入序列是对一棵二叉搜索树或其镜像进行前序遍历的结果，则首先在一行中输出 `YES` ，然后在下一行输出该树后序遍历的结果。数字间有 1 个空格，一行的首尾不得有多余空格。若答案是否，则输出 `NO`。

## 输入样例 1：
```in
7
8 6 5 7 10 8 11
```

## 输出样例 1：
```out
YES
5 7 6 8 11 10 8
```

## 输入样例 2：
```in
7
8 10 11 8 6 7 5
```

## 输出样例 2：
```out
YES
11 8 10 7 5 6 8
```

## 输入样例 3：
```in
7
8 6 8 5 10 9 11
```

## 输出样例 3：
```out
NO
```
*/

#include <iostream>

using namespace std;

struct TreeNode
{
    int value;
    TreeNode *left, *right;
    TreeNode(int value) : value(value), left(NULL), right(NULL) {}
};

const int N = 1e3 + 10;
int q[N], t[N];
static int p = 0;

void insert(TreeNode *&root, int value)
{
    if (root == NULL)
    {
        root = new TreeNode(value);
        return;
    }
    if (value < root->value)
        insert(root->left, value);
    else
        insert(root->right, value);
}

void preTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    t[p++] = root->value;
    preTraverse(root->left);
    preTraverse(root->right);
}

void postTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    postTraverse(root->left);
    postTraverse(root->right);
    t[p++] = root->value;
}

void mirrorTree(TreeNode *root)
{
    if (root == NULL)
        return;
    TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    mirrorTree(root->left);
    mirrorTree(root->right);
}

int main()
{
#ifdef LOCAL
    freopen("../in", "r", stdin);
    freopen("../out", "w", stdout);
#endif // LOCAL
    int n;
    cin >> n;
    TreeNode *root = nullptr;
    for (int i = 0; i < n; i++)
        cin >> q[i], insert(root, q[i]);
    preTraverse(root);
    bool isBST = true;
    for (int i = 0; i < n; i++)
        if (q[i] != t[i])
        {
            isBST = false;
            break;
        }

    if (!isBST)
    {
        isBST = true;
        mirrorTree(root);
        p = 0;
        preTraverse(root);
        for (int i = 0; i < n; i++)
            if (q[i] != t[i])
            {
                isBST = false;
                break;
            }
    }

    if (isBST)
    {
        puts("YES");
        p = 0;
        postTraverse(root);
        for (int i = 0; i < n - 1; i++)
            cout << t[i] << ' ';
        cout << t[n - 1];
    }
    else
        puts("NO");
}