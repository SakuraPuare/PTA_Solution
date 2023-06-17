#include <stdio.h>
void InputArray(int *p, int n)
{
    for (int i = 0; i < n; i++, p++)
        scanf("%d", p);
}
/* 你编写的函数放在这里 */

int EvenStatistics(int *p, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++, p++)
        if (*p % 2 == 0)
            cnt++;
    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    InputArray(a, n);
    printf("Even = %d\n", EvenStatistics(a, n));
    return 0;
}