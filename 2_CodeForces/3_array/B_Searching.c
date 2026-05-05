#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int idx;
    scanf("%d", &idx);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == idx)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}