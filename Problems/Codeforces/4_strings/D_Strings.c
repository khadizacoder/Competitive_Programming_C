#include <stdio.h>
int main ()
{
    char str1[11], str2[11];
    scanf("%s %s", str1, str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    printf("%d %d\n", str1_len, str2_len);
    printf("%s%s\n", str1, str2);

    printf("%c", str2[0]);
    for(int i = 1; i < str1_len; i++)
    {
        printf("%c", str1[i]);
    }

    printf(" ");
    printf("%c", str1[0]);
    for(int i = 1; i < str2_len; i++)
    {
        printf("%c", str2[i]);
    }

    return 0;
}