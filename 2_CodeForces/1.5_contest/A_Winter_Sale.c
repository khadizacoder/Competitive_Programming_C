#include <stdio.h>
int main ()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float disPrice = (1 - (float) x / 100);
    float price = p / disPrice;

    printf("%.2f", price);
    return 0;
}