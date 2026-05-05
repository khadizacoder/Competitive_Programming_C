#include <stdio.h>
int main ()
{
    char n;
    scanf("%c", &n);

    if (n >= '0' && n <= '9')
    {
        printf("IS DIGIT");
    }
    
    if (n >= 'A' && n <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }

    if (n >= 'a' && n <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }

    return 0;
}