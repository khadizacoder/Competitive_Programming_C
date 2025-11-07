#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    while (n--)
    {
        int ary[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &ary[i]);
        }

        int i = 0, j = m - 1;

        while (i < j)
        {
            int tmp = ary[i];
            ary[i] = ary[j];
            ary[j] = tmp;
            i++;
            j--;
        }

        for (int i = 0; i < m; i++)
        {
            printf("%d ", ary[i]);
        }
        printf("\n");
    }

    return 0;
}