#include <stdio.h>
int main ()
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d \n", i);
    }

    // more loop

    for (int j = 0; j <= 20; j+=2)
    {
        printf("Even = %d \n", j);
    }
    
    // checking odd or even

    for (int i = 0; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("Mod = %d \n", i);
        }
    }
    
    // dicrement

    for (int i = 20; i >= 1; i--)
    {
        printf("Dicrement = %d \n", i);
    }

    // even dicrement

    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            printf("Even = %d \n", i);
        }
    }
    
    

    return 0;
}