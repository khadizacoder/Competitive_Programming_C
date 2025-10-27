#include <stdio.h>
int main ()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox bazar jabo..💃 \n");

        int more_tk = tk - 5000;
        if (more_tk >= 10000)
        {
            printf("Sentmartin o jabo..🏃‍♂️ \n");
        }
        else
        {
            printf("Coxbazar thake back jabo.");
        }
    }
    else
    {
        printf("Khotaw jabo na..😥");
    }
    
    return 0;
}