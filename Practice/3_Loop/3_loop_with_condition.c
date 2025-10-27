#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d \n", arr[i]);
        }
    }

    // more

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("More = %d \n", i);
        }
    }

    return 0;
}