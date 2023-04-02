#include <stdio.h>
#include <math.h>

int main()
{
    // char s[100];
    // scanf("%s", s);
    // int p = 0;
    // while (s[p] != '\0')
    // {
    //     char t[100];
    //     if (p != 0)
    //         printf(" ");
    //     switch (s[p])
    //     {
    //     case '-':
    //         printf("fu");
    //         break;
    //     case '0':
    //         printf("ling");
    //         break;
    //     case '1':
    //         printf("yi");
    //         break;
    //     case '2':
    //         printf("er");
    //         break;
    //     case '3':
    //         printf("san");
    //         break;
    //     case '4':
    //         printf("si");
    //         break;
    //     case '5':
    //         printf("wu");
    //         break;
    //     case '6':
    //         printf("liu");
    //         break;
    //     case '7':
    //         printf("qi");
    //         break;
    //     case '8':
    //         printf("ba");
    //         break;
    //     case '9':
    //         printf("jiu");
    //         break;
    //     }
    //     p++;
    // }

    char *s[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    int n;
    scanf("%d", &n);
    if (n < 0)
        printf("fu "), n = -n;
    int len = n == 0 ? 1 : 0, t = n;
    while (t)
        len++, t /= 10;
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%s", s[n / (int)pow(10, i) % 10]);
        if (i != 0)
            printf(" ");
    }
}