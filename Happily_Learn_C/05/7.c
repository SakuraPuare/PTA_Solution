#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    double last = 99999999.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        last = sqrt(last + 2);
    }
    printf("x[%d]=%.10lf", n, last);
    return 0;
}