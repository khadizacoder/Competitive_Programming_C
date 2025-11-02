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

    int max = INT_MIN;
    int min = INT_MAX;
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }
    
    int tmp = max;
    arr[max_idx] = min;
    arr[min_idx] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}