#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // write a program to accept a single value integer from user and print corresponding their months names
    //  in c language

    int integer;
    printf("Enter interger (1-12) %d \n");
    scanf("%d",&integer);

    switch (integer){
        case 1:
        printf("Month is January \n");
        break;
        
        case 2:
        printf("Month is February \n");
        break;
        
        case 3:
        printf("Month is March \n");
        break;

        case 4:
        printf("Month is April \n");
        break;

        case 5:
        printf("Month is May \n");
        break;

        case 6:
        printf("Month is June \n");
        break;

        case 7:
        printf("Month is July \n");
        break;

        case 8:
        printf("Month is August \n");
        break;

        case 9:
        printf("Month is September \n");
        break;

        case 10:
        printf("Month is October \n");
        break;

        case 11:
        printf("Month is November \n");
        break;

        case 12:
        printf("Month is December \n");
        break;
        
        default:
        printf("Invalid integer \n");

    }

    getch();
}