#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if(i / 3 * 3 == i && i / 7 * 7 == i)
        {
            printf("%d\n", i);
        }
    }

    /*
    ! Different way
    for (int i = 1; i <= n; i++)
    {
        if(i % 21 == 0)
        {
            printf("%d \n", i);
        }
    }
    */
    
    return 0;
}