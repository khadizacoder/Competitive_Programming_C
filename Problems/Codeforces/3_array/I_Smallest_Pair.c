#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int res = arr[i] + arr[j] + j - i;
                if (res < min)
                {
                    min = res;
                }
            }
        }
        printf("%d\n", min);
    }

    return 0;
}