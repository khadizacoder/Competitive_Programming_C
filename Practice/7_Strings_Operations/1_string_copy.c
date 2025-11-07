#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", a,b);

    int len = strlen(a);
    
    // for(int i = 0; a[i] != '\0'; i++)
    // {
    //    a[i] = b[i];
    // }

    for(int i = 0; i <= len; i++)
    {
       a[i] = b[i];
    }

    printf("%s %s", a,b);
    return 0;
}