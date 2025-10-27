#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    if (n / 3 * 3 == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}