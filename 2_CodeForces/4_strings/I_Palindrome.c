#include <stdio.h>
int main ()
{
    char str[1001];
    scanf("%s", str);

    int len = strlen(str);
    int i = 0, j = len - 1;
    int flag = 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if(flag == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}