#include <stdio.h>
int main ()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int mult1 = a * b;
    long long int mult2 = c * d;
    long long int defference = mult1 - mult2;

    printf("Difference = %lld", defference);

    return 0;
}