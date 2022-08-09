#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print first n natural numbers using for loop.

    // int n;
    // printf("Enter the value of n %d \n", n);
    // scanf("%d", &n);

    // for(int a = 0; a<n; a++){
    //     printf("The numkber is %d \n",a+1);
    // }
       

// Write a program to print n natural numbers in reverse order.

int n;
printf("Enter the value of n %d \n", n);
scanf("%d",&n);

for(int i = n; i; i--){               
    printf("The value of i is %d \n",i);
}

    return 0;
}