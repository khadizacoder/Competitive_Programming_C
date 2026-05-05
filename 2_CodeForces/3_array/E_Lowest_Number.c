#include <stdio.h>
#include <limits.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min_Val = INT_MAX;
    int min_idx;
    for (int i = 0; i < n; i++)
    {
        if (min_Val > arr[i])
        {
            min_Val = arr[i];
            min_idx = i;
        }
        
    }
    printf("%d %d", min_Val, min_idx + 1);
    
    return 0;
}