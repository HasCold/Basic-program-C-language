#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print all natural numbers from 1 to n using while loop.

    int n ; int a=1;
    printf("Enter the value of n %d \n", n);
    scanf("%d",&n);

    while(a<=n){
        printf("The number is %d \n ", a);
        a++;
    }    

    return 0;
}