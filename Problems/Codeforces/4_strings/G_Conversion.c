#include <stdio.h>
int main()
{
    char str[100005];
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ',')
        {
            printf(" ");
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }
    }
    return 0;
}