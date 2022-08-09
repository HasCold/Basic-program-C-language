#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print a natural number from 10 to 20 when initial loop counter is initialized to 0.

    int i = 0;  //The loop counter need not be int, it can be float as well. 
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;  // i = i + 1;
    }
    return 0;
}