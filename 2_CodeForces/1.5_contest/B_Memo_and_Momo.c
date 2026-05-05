#include <stdio.h>
int main ()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }

    if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    }

    if (a % k != 0 && b % k == 0)
    {
        printf("Momo");
    }

    if (a % k != 0 && b % k != 0)
    {
        printf("No One");
    }
    
    return 0;
}