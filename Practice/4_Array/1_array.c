#include <stdio.h>
int main()
{
    int arr[10];
    arr[2] = 100;
    arr[3] = 30;
    arr[1] = 52;

    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);

    return 0;
}