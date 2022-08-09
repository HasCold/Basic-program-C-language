#include <stdio.h>

int main()
{
    // int a = 4;       // type declaration instruction
    int a = 4, b, c; // type declaration instruction
    b = c = a;
    printf("The Value of a is %d\n", a);
    printf("The Value of a is %d\n", b);
    printf("The Value of a is %d\n", c);
    return 0;
}