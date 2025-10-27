#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    //! if else

    /*
    if (n >= 100)
    {
        printf("Ami barger khabo..😍");
    }
    else
    {
        printf("Ami kichu khabo na😥");
    }
    */

    //! if else ladder

    if(n >= 100)
    {
        printf("Barger khabo..😍");
    }
    else if (n >= 50)
    {
        printf("Fuska khabo..😋");
    }
    else if (n >= 20)
    {
        printf("Badam khabo..🙂");
    }
    else
    {
        printf("Kichu kawa holo na 😥");
    }

    return 0;
}