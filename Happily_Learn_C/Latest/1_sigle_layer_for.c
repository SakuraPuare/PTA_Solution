#include <stdio.h>

int main()
{
    int num = 0, sum = 10, latest = 10;
    if (scanf("%d", &num) == 1)
    {
        for (int i = 1; i < num; ++i)
        {
            if (i % 2 != 0)
            {
                sum += latest * 2;
                latest *= 2;
            }
            else
            {
                sum += latest * 1.5;
                latest *= 1.5;
            }
        }
        printf("%d", sum);
    }
}