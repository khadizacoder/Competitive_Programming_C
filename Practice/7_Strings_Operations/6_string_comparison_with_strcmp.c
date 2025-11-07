#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int str = strcmp(a, b);

    // printf("%d", str);

    /*
     *1. first desit small => return -1 / nag value
     *2. two desit same => return 0
     *3. second desit small => return 1
     */

    if (str < 0)
    {
        printf("A is smaller");
    }
    else if (str == 0)
    {
        printf("Equal");
    }
    else if (str > 0)
    {
        printf("B is smaller");
    }

    return 0;
}