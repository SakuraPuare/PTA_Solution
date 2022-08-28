#include <stdio.h>
int main()
{
    int a = 1234, i;
    char c;
    float f = 3.141592653589;
    double x = 0.12345678987654321;
    i = 12;
    c = '\x41';
    printf("\n01.a=%d.", a);
    printf("\n02.a=%6d.", a);
    printf("\n03.a=%06d.", a);
    printf("\n04.a=%2d.", a);
    printf("\n05.a=%-6d.", a);
    printf("\n06.f=%f.", f);
    printf("\n07.f=%6.4f.", f);
    printf("\n08.x=%lf.", x);
    printf("\n09.x=%18.16lf.", x);
    printf("\n10.c=%c.", c);
    printf("\n11.c=%x.", c);
    printf("\n12.%s.", "ABCDEFGHIJK");
    printf("\n13.%4s.", "ABCDEFGHIJK");
    printf("\n14.%14s.", "ABCDEFGHIJK");
    printf("\n15.%-14s.", "ABCDEFGHIJK");
    printf("\n16.%4.6s.", "ABCDEFGHIJK");
    return 0;
}

