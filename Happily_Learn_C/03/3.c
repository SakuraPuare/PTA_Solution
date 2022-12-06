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
    // 01.a=1234.
    printf("\n02.a=%6d.", a);
    // 02.a=  1234.
    printf("\n03.a=%06d.", a);
    // 03.a=001234.
    printf("\n04.a=%2d.", a);
    // 04.a=1234.
    printf("\n05.a=%-6d.", a);
    // 05.a=1234  .
    printf("\n06.f=%f.", f); // f float
    // 06.f=3.141593.
    printf("\n07.f=%6.4f.", f);
    // 07.f=3.1416.
    printf("\n08.x=%lf.", x); // lf double
    // 08.x=0.123457.
    printf("\n09.x=%18.14lf.", x);
    // double bit 位数
    // 09.x=  0.1234567898765432.
    // 09.x=123.1234567898765420.
    // 09.x=  0.12345678987654.
    printf("\n10.c=%c.", c);// 65 int -> char ASCII
    // 10.c=A.
    printf("\n11.c=%x.", c);
    // 11.c=41.
    printf("\n12.%s.", "ABCDEFGHIJK");
    printf("\n13.%4s.", "ABCDEFGHIJK");
    printf("\n14.%14s.", "ABCDEFGHIJK");
    printf("\n15.%-14s.", "ABCDEFGHIJK");
    printf("\n16.%4.6s.", "ABCDEFGHIJK");
    // 12.ABCDEFGHIJK.
    // 13.ABCDEFGHIJK.
    // 14.   ABCDEFGHIJK.
    // 15.ABCDEFGHIJK   .
    // 16.ABCDEF.
    return 0;
}

