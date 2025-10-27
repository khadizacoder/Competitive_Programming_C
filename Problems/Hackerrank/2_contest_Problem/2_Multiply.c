#include <stdio.h>
int main ()
{
    long long int a;
    long long int b;
    scanf("%lld %lld", &a, &b);

    long long int mult = a * b;
    printf("%lld", mult);

    return 0;
}