#include <stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    long long int sum = x + y;
    long long int mult = x * y;
    long long int sub = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mult);
    printf("%lld - %lld = %lld\n", x, y, sub);

    return 0;
}