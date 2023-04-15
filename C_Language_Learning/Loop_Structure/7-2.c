#include <stdio.h>

int nums[2000];

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, p = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (i % 3 == 2 && i % 7 == 1)
            {
                nums[p] = i;
                p++;
            }
        }

        if (p == 0)
            printf("none\n");
        else
        {
            for (int i = 0; i < p - 1; i++)
            {
                printf("%d ", nums[i]);
            }
            printf("%d\n", nums[p - 1]);
        }
    }
}