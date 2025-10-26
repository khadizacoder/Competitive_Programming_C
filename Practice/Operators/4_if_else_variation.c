#include <stdio.h>
int main ()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox bazar jabo");
    }
    if (tk >= 6000)
    {
        printf("Sajek jabo");
    }
    if (tk > 8000)
    {
        printf("Cox bazar jabo and onk khabar khabo");
    }
    if (tk < 5000)
    {
        printf("Mon kharap 😥");
    }
    
    return 0;
}