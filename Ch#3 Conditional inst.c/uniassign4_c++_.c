#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // write a program to take input age in year and converted into days and months

    int year, months, days;
    months = year * 12, days = year * 365;
    printf("Enter the year %d \n", year);
    scanf("%d",&year);

    // months = year * 12, days = year * 365;
    printf("Your months and days are %d \n");

    getch();
}