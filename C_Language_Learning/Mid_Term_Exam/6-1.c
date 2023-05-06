#include <stdio.h>

char ToRank(double score);

int main()
{
    double s;
    char r;
    scanf("%lg", &s);
    r = ToRank(s);
    printf("%c\n", r);
    return 0;
}

char ToRank(double score)
{
    int x = score / 10;
    switch (x)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
        break;
    }
}