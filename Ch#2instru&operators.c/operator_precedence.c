#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    int b = 3;

//    1 priority = * / %
//    2  priority = + -
//    3 priority =  (=)

    printf("The value of 3*a - 8*b %d \n", 3*a - 8*b); //operations of higher priority are evaluated first in 
    // the absence of parenthesis( parenthesis means= 3* (a - 8*b))    
    printf("The value of 8*b / 3*a %d \n",  8*b / 3*a );
    // 8*b / 3*a = 24 / 6 will give wrong answer
    // opearator associativity = when operators of equal priority are present in an expression, the tie is taken
    // care of by associatvity.
    // x * y / z = (x * y) / z
    // x / y * z = (x / y) * Z
    //  * / follows left to right associativity

      // 8*b / 3*a = 24 / 6 will give wrong answer
    //   24 / 3* 2
    //  8 * 2
    //   16
    return 0;
}