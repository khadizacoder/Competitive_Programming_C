#include <stdio.h>
#include <limits.h>
int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // int min = INT_MAX;
    // int max = INT_MIN;

    // Min mumber
    if (a >= b && c >= b)
    {
        printf("%d ", b);
    }
    else if(b >= a && c >= a)
    {
        printf("%d ", a);
    }
    else if (a >= c && b >= c)
    {
        printf("%d ", c);
    }

    // Max number

    if (a <= b && c <= b)
    {
        printf("%d", b);
    }
    else if(b <= a && c <= a)
    {
        printf("%d", a);
    }
    else if (a <= c && b <= c)
    {
        printf("%d", c);
    }
    
    return 0;
}