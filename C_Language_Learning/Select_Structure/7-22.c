#include <stdio.h>

int main()
{
    int breath, heart;
    scanf("%d %d", &breath, &heart);
    if (15 <= breath && breath <= 20 && 50 <= heart && heart <= 70)
        printf("T");
    else
        printf("F");
}