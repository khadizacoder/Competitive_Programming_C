#include <stdio.h>
#include <limits.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;

    for(int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d ", max);
    
    return 0;
}