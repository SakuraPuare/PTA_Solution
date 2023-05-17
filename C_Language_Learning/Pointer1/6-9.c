#include <stdio.h>
#include <string.h>
#define MAX_LEN 10
#define N 20

void SortString(char *ptr[], int n);

int main()
{
    int i, n;
    char name[N][MAX_LEN]; // 定义二维字符数组
    char *pStr[N];         // 定义字符指针数组

    scanf("%d", &n);
    getchar(); // 读走缓冲区中的回车符
    for (i = 0; i < n; i++)
    {
        pStr[i] = name[i];
        gets(pStr[i]);
    }

    SortString(pStr, n); // 英文姓名按字典顺序排列

    for (i = 0; i < n; i++)
    {
        puts(pStr[i]); // 输出排序后的n个名字
    }

    return 0;
}

void SortString(char *ptr[], int n)
{
    char *t;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (strcmp(ptr[j], ptr[j + 1]) > 0)
                t = ptr[j], ptr[j] = ptr[j + 1], ptr[j + 1] = t;
}