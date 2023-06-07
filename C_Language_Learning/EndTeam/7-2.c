#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    ll a, b;

    scanf("%lld%lld", &a, &b);
    
    // except 0
    if (a == 0 || b == 0)
        printf("0");
    else

    printf("%lld", llabs(lcm(a, b)));
}