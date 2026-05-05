#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        char new[100];
        for (int i = 0; i <= len_s || i <= len_t; i++)
        {
            if(i < len_s)
            {
                printf("%c", s[i]);
            }
            if(i < len_t)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}