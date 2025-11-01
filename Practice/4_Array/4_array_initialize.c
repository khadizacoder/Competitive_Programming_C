#include <stdio.h>
int main ()
{
    int a[10] = {0}; // int a[n] = {0} --> fixed side array ai jonno kaj kore
    int a1[10] = {10,20}; // first 2 index puron hobe baki gula 0 value thakbe

    int arr[5] = {5, 10, 15, 20, 25};
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
