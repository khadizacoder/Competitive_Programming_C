#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
        i++;

    } while (i <= 10);

    // dicrement

    int j = 5;
    do
    {
        printf("dicrement = %d \n", j);
        j--;
    } while (j >= 1);

    return 0;
}