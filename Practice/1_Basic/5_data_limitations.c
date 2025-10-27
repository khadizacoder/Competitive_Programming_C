/*
* 4 byte => 32 bit
* 1 bit - 2 => 2^1
* 2 bit - 4 => 2^2
* 3 bit - 8 => 2^3
* 4 bit - 16 => 2^4
* 32 bit - 4294967296 => 2^32     -> 10^9 porjonto shonkha rhakta parbo

? long long int => 8 byte
* 64 bit - ? => 2^64        -> 10^18 porjonto shonkha rhakta parbo

* float => 4 byte       -> ( . ) ar 8 desit por garbes value dekhay
* double => 8 byte

*/

#include <stdio.h>
int main ()
{
    //? "int" 10^9 + value neay kaj kora jai na. jode proyjon hoi tahole "long long int" neay kaj korta hobe

    long long int n = 10000000000;
    printf("%lld \n", n);

    float f = 3.54622594580345;
    printf("%f \n", f);

    double d = 8.3849243424;
    printf("%llf", d);

    return 0;
}