#include <stdio.h>
int main ()
{
    // break
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d \n", i);
    }
    

    // continue
    for (int i = 0; i <= 10; i+=2)
    {
        if (i == 6)
        {
            continue;
        }
        printf("continue = %d \n", i);
    }
    
    return 0;
}