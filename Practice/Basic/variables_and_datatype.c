/*
* int => -100, 0, 100          => 4 byte
* float => -2.5, 5.353         => 4 byte
* double => 2.534, 3.2
* char => 'A', 'a', '@', '#'   => 1 byte
* bool => true, false

* 8 bit = 1 byte
* 1024 byte = 1 KB
* 1024 KB = 1 MB
* 1024 MB = 1 GB
* 1024 GB = 1 TB

! DATA TYPE FORMET
* int => %d
* long long int => %lld
* char => %c & %s
* float => %f
* double => %lf
* bool => %d       == result 1(true) or 0(false)

*/
#include <stdio.h>
int main ()
{
    int num = 10;
    num = 20;
    printf("%d\n", num);

    char c = '@';
    printf("%c\n", c);

    float f = 3.54;
    printf("%f \n", f);
    printf("%.2f \n", f);

    return 0;
}