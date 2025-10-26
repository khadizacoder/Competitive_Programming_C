#include <stdio.h>
int main()
{
    //! Arithmatic Operators

    int a = 10;
    int b = 5;
    int sum = a + b;

    printf("Summation = %d \n", sum);

    int sub = a - b;
    printf("Substraction = %d \n", sub);

    int mul = a * b;
    printf("Multiplication = %d \n", mul);

    int div = a / b;
    printf("Divition = %d \n", div);

    float x = 5;
    int z = 2;

    float div2 = x / z;
    printf("Division = %f \n", div2);

    //! Mod Operators

    int n = 18;
    int m = 5 ; 
    int rem = n % m;
    printf("Mod Operators => %d \n", rem); // vagsesh

    //! Relational Operator

    /*
    *   <     - less then
    *   <=    - less or equal then
    *   >     - Greater than
    *   >=    - Greater or equal than
    *   ==    - Equels to
    *   !=    - Not Equels to
    */

    int k = 10;
    int j = 5;
    int less = k > j;
    printf("Less than = %d \n", less);

    int equels = k == j;
    printf("Equels = %d", equels);

    //! Logical Operator
    /*
    *   Logical AND     =>  &&
    *   Logical OR      =>  ||
    *   Logical NOT     =>  !
    * 
    *   5 > 2 && 6 < 10     // 2 tai true hote hobe
    *   5 > 2 || 6 < 10     // je kono 1 ta true hote hobe
    */

    return 0;
}