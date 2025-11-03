#include <stdio.h>
int main ()
{
    char str[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}