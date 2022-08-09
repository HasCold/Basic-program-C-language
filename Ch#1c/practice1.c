#include <stdio.h>

int main()
{
    int _ = 7;
    float d = 98.5;
    // int d is not an integer because 98.5 is not integer
    float f = 66.2;
    // int f is not recommended because it is not also an integer
    int z = 58;
    printf("Multiply the value of d and f %f \n", d * f);
    printf("Sum the value of _ and z %d \n", _ + z);

    return 0;
}