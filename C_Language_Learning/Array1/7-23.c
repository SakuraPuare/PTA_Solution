#include <stdio.h>

char q[10000];

int is_alpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int is_email(char q[], int l)
{
    int a = 0, b = 0;
    for (int i = 0; i < l; i++)
        if (q[i] == '@')
            a++;
        else if (q[i] == '.')
            b++;
    if (a != 1 && b != 1)
        return 0;

    int i = -1;
    while (i < l && q[++i] != '@')
        if (!is_alpha(q[i]) && !is_digit(q[i]) && q[i] != '_')
            return 0;
    if (i == 0)
        return 0;
    int j = i;
    while (j < l && q[++j] != '.')
        if (!is_alpha(q[j]) && !is_digit(q[j]))
            return 0;
    if (j == i + 1)
        return 0;
    int k = j + 1;
    if (k + 3 == l && q[k] == 'c' || q[k] == 'C' && q[k + 1] == 'o' || q[k + 1] == 'O' && q[k + 2] == 'm' || q[k + 2] == 'M')
        return 1;
    return 0;
}

int main()
{
    int l = -1;
    while ((q[++l] = getchar()) != EOF)
        ;

    if (is_email(q, l))
        printf("YES");
    else
        printf("NO");
}