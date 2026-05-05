#include <stdio.h>
int main()
{
    char f1[200], f2[200], s1[200], s2[200];
    scanf("%s %s %s %s", &f1, &f2, &s1, &s2);

    int len_f2 = strlen(f2);
    int len_s2 = strlen(s2);

    char s2_res[200];
    char f2_res[200];

    for (int i = 0; i < len_s2; i++)
    {
        s2_res[i] = s2[i];
    }

    for (int i = 0; i < len_f2; i++)
    {
        f2_res[i] = f2[i];
    }
    // printf("%s ", f2_res);
    // printf("%s", s2_res);

    int flag = 1;
    for (int i = 0; i < len_f2; i++)
    {
        if (s2_res[i] != f2_res[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}