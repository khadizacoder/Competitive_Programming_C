#include <stdio.h>
int main ()
{
    char str[101];

    // gets(str);
    fgets(str, 101, stdin); // new line print kore
    printf("%s", str);

    return 0;
}