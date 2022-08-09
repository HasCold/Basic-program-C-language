#include <stdio.h>
#include <math.h>
int main()
{
    // Q5 Write a program to determine whether a character entered by the user is lowercase or not.

char ch;
// 97-122 = a-z according to  ASCII TABLE
printf("Enter your character \n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
    printf("Your character is lowercase \n");
}
else{
    printf("It is not lowercase character \n");
}

    return 0;
}
