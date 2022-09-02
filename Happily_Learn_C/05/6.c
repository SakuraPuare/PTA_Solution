#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}