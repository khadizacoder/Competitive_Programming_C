#include <stdio.h>
int main ()
{
    int i = 1;

    while(i <= 10)
    {
        if (i % 2 == 0)
        {
            /* code */
            printf("%d \n", i);
        }
        
        i++;
    }
    return 0;
}