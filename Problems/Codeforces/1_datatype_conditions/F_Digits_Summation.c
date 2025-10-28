#include <stdio.h>
int main ()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    int first = n % 10;
    int last = m % 10;

    int sum = first + last;
    printf("%d", sum);

    return 0;
}