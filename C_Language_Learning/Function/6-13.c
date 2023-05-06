#include <stdio.h>
int n;

int Peach(int day)
{
    return day == n ? 1 : (Peach(day + 1) + 1) * 2;
}

int main()
{
    scanf("%d", &n);
    printf("%d\n", Peach(1));
    return 0;
}