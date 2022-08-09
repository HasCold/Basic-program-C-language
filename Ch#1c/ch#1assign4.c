#include <stdio.h>

int main()
{
    int principal= 100, rate=5, year=1;
    int simpleinterest=  (principal* rate* year)/100;

    printf("The value of simple interest %d", simpleinterest);

    return 0;
}