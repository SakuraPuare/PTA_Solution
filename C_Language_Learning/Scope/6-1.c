#include <stdio.h>
float Max = 0;
int J = 0;
float fun(float array[], int n);
int main()
{
    float a[10], ave;
    int i = 0;
    for (i = 0; i < 10; i++)
        scanf("%f", &a[i]);
    ave = fun(a, 10);
    printf("ave=%.2f\n", ave);
    printf("max=%.02f\n", Max);
    printf("Total:%d\n", J);
    return 0;
}

float fun(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > Max)
            Max = arr[i];
    }
    for (int i = 0; i < n; i++)
        if (arr[i] == Max)
            J++;
    return sum / n;
}