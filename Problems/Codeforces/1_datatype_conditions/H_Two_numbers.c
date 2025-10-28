#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float dev = (float)a / b;
    float fraction = dev - (int)dev;

    printf("floor %d / %d = %d\n", a, b, (int)dev);
    if (a == b)
    {
        /* code */
        printf("ceil %d / %d = %d\n", a, b, (int)dev);
    }
    else
    {
        /* code */
         printf("ceil %d / %d = %d\n", a, b, (int)dev + 1);
    }
    
    
    if (fraction >= .5)
    {
        /* code */
        printf("round %d / %d = %d\n", a, b, (int)dev + 1);
    }
    else
    {
        /* code */
        printf("round %d / %d = %d\n", a, b, (int)dev);
    }

    return 0;
}