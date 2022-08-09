#include <stdio.h>
#include <math.h>
int main()
{
    // Write a c program to find the sum of all natural numbers etween to 1 to n.

    int i; int a=1; int sum;
    printf("Enter the value of i is %d \n", i);
    scanf("%d",&i);

    while(a<=i){
        printf("The numnber is %d \n", a);
        a++;
    }

    printf("The sum of all natural number is %d \n", sum);

    return 0;
}