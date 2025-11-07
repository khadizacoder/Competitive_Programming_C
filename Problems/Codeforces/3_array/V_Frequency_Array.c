#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int fre_ary[m];

    for (int i = 1; i <= m; i++)
    {
        fre_ary[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        fre_ary[val]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre_ary[i]);
    }

    return 0;
}