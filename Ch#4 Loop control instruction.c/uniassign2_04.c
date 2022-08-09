#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print all natural numbers in reverse from n to 1.

     int n; 
     printf("Enter the value of n %d \n", n);
     scanf("%d",&n);

     while(n>=1){
         
         printf("The number is %d \n",n);
         --n;
     }

    return 0;
}