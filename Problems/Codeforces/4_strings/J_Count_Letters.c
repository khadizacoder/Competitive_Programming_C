#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100000];
    scanf("%s", str);

    int len = strlen(str);
    char fre_arr[26] = {0};

    for(int i = 0; i < len; i++)
    {
        int res =  str[i] - 'a';
        fre_arr[res]++;
    }
   
    for(int i = 0; i < 26; i++)
    {
       if(fre_arr[i] > 0)
       {
         printf("%c : %d\n",i + 'a', fre_arr[i]);
       }
    }

    return 0;
}