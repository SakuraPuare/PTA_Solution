#include <stdio.h>
void Array_InputCalculate(int *p, int m, int n);
int main()
{
    int *p = NULL, m, n;
    double aver;
    scanf("%d", &m);                       // 输入学生数
    scanf("%d", &n);                       // 输入课程数
    p = (int *)calloc(m * n, sizeof(int)); // 向系统申请内存
    if (p == NULL)                         /*确保指针使用前是非空指针，当p为空指针时结束程序运行*/
    {
        printf("No enough memory!\n");
        exit(1);
    }

    Array_InputCalculate(p, m, n); // 学生成绩输入及统计输出

    free(p); // 释放向系统申请的内存
    return 0;
}

void Array_InputCalculate(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", p + i * n + j);
            sum += *(p + i * n + j);
        }
        printf("%d %.1lf\n", sum, (double)sum / n);
    }
}
