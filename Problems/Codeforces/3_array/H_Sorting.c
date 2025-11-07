#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int ary[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ary[i] > ary[j])
            {
                int tmp = ary[i];
                ary[i] = ary[j];
                ary[j] = tmp;
            }
            
        }
    }

     for(int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}