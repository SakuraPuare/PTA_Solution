#include <stdio.h>

char q[1000];

int main()
{

    char c;
    scanf("%c", &c);
    getchar();
    int p = 0;
    while ((q[p++] = getchar()) != '\n')
        ;


    while (p >= 0)
        if (q[p--] == c)
        {
            printf("index = %d", p + 1);
            return 0;
        }
    puts("Not Found");
}
