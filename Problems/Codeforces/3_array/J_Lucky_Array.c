#include <stdio.h>
#include <limits.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int ary[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    int min = INT_MAX;
    int lucky = 0;

    for(int i = 0; i < n; i++)
    {
        if(min > ary[i])
        {
            min = ary[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(min == ary[i])
        {
            lucky++;
        }
    }
    if(lucky % 2 != 0)
    {
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }

    return 0;
}