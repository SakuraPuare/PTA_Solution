#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int num = i;
            while (num != 0)
            {
                if(num % 10 == 1)
                    count++;
                num /= 10;
            }
        }
        printf("%d\n", count);
    }
}