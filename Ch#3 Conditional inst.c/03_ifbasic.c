// C program to check whether the number is even or odd 
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter the number \n");

    scanf("%d", &a);

if(a%2==0) {
    printf("%d is even \n", a);  
}
else{
    printf("%d is odd \n", a);  //else block is not necessary but optional
}

    return 0;
}