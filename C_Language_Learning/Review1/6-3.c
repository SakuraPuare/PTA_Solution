#include <stdio.h>
float *search(float (*pointer)[4], int n);
int main()
{
    float score[][4] = {{60, 70, 80, 90}, {56, 89, 67, 88}, {34, 78, 90, 66}};

    float *p;
    int i, k;
    scanf("%d", &k);
    p = search(score, k);
    for (i = 0; i < 4; i++)
        printf("%.2f ", *(p + i));
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
float *search(float (*pointer)[4], int n)
{
    return pointer[n];
}