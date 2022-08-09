#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 7;
    printf("The value opf a + b %d \n", a + b);
    printf("The value opf a - b %d \n", a - b);
    printf("The value opf a * b %d \n", a * b);
    printf("The value opf a / b %d \n", a / b);

    int v;
    v = a * b; // legal> allowed
    // + , - ,*, / = operators , 3 2 1 = operands
    // a * b = v illegal (not allowed)
    printf("The value of v %d \n", v);

    // % = modular division operator
    // % = returns the remainder
    // % = cannot be applied on float
    printf("7 when divided by 4 leaves a remainder %d \n ", 7 % 4);
    printf("-7 when divided by 4 leaves a remainder %d \n ", -7 % 4);
    // sign is same as of numerator (-7%4 = -3)

    // No operator is assumed to be present
    // printf(" The value of 4 * 7 %d \n", (4)(7));--> will not return 28/ wrong
    printf(" The value of 4 * 7 %d \n", (4) * (7));

    // there is no operators to perform exponentiation in C
    printf(" The value of 4 ^ 7 %d \n", 4 ^ 7); // ^ = bitewise XOR operator will not produce 4 to power 7
    printf(" The value of 4 to the power 7 %f \n", pow(4, 7));

    //  Arithmetic operation b\w
    // int and int ---> int
    // int and float ---> float
    //  float and float --> float
    printf(" The value of 5 + 7 %d \n", 5 + 7);
    printf(" The value of 5 + 7.5 %f \n", 5 + 7.5);
    printf(" The value of 5.1 + 7.5 %f \n", 5.1 + 7.5);
 printf(" The value of 5 /2 %d \n", 5/2);
  printf(" The value of 5/2 %f \n", 5/2); // wrong statement bc of %f
 printf(" The value of 2/5 %d \n", 2/5);
 printf(" The value of 2/5 %f \n", 2/5); // wrong statement bc of %f
 printf(" The value of 2.0/5 %f \n", 2.00/5); // operation b/t int(5) and float(2.00) gives float 
 printf(" The value of 5.0/2.0 %f \n", 5.0/2.0);// operation b/t float(5.0) and float(2.0) gives float 

 int k= 3.0/9;
 printf(" The value of 3.0/9 %f \n", 3.0/9);
 
    return 0;

}