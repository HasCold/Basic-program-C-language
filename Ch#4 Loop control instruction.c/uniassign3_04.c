#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to print all alphabets from a to z using while loop.

    char ch = 97;
    printf("The alphabets from a - z are  \n");
    
    while(ch<=122){
        printf("%c \n",ch);
        ch++;
    }
    

    return 0;
}