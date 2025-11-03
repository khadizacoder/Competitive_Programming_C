#include <stdio.h>
int main ()
{
    char s[101];
    scanf("%s", &s);

    int length = strlen(s);

    printf("%d", length);

    return 0;
}