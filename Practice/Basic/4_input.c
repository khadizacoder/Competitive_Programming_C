#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    printf("%d \n", n);

    float f;
    char c;

    scanf("%f %c", &f, &c);
    printf("%f \n %c \n", f, c);
    printf("%.3f \n", f);

    return 0;
}