#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print first n natural numbers using do-while loop.

    int a = 0;
    int n;
    printf("Enter the number of n \n", n);
    scanf("%d", &n);

    do{
       printf("The number is  %d \n", a+1);
       a++;
    }while(a<n);

    return 0;
}