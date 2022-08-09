#include <stdio.h>
#include <math.h>
int main()
{
    //Q1 What will be the output of this program 
    int a = 10;
    if (a = 11)
    { printf("I am 11 \n"); 
    }
    else{ printf("I am not 11 \n");}


//Q2 Write a program to find out whetehr a student is pass or fail; if it requires total 40% and atleast 33%in each subject 
//  to pass. assume 3 subjects and take marks as an input from the user.    
     int phy, chem, maths;
     float total;

     printf("Enter phy marks \n", phy);
     scanf("%d", &phy); 
  
     printf("Enter chem marks \n", chem);
     scanf("%d", &chem); 

     printf("Enter maths marks \n", maths);
     scanf("%d", &maths); 
     total= (phy + chem + maths)/3;
     if(total<40 || phy<=33 || chem<=33 || maths<=33)
     {
         printf("Your total percentage is %f and you are fail \n", total);
     }
     else{
          printf("Your total percentage is %f and you are pass \n", total);
     }


//Q3 Calculate income tax paid by an employee to the governent as per slab mention below;
// Note that there is no tax below 2.5lac. Take income amount as an input from the user


// Q4 write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

int year;
printf("Enter the year %d");
scanf("%d",&year);
if( year % 4==0)
{ printf("Your year is leap year",year);

}
else{
    printf("Your year is not leap year", year);
}


// Q6 Write a program to find greatest of four number entered by the user.

int num1, num2, num3, num4;
printf("Enter your number \n");
scanf("%d,%d,%d,%d",&num1,&num2,&num3,&num3);
if(num1>num2)
{
  if(num1>num3){

    if(num1>num4){
        printf("num1 is greatest %d \n");

    }}}
else{
    printf("num4 is greatest %d \n");
}
 if(num2>num3)
{
  
    if(num2>num4){
        printf("num2 is greatest %d \n");

    }}
else{
    printf("num4 is greatest %d \n");
} 
if(num3>num4)
{
        printf("num3 is greatest %d \n");

    }
else{
    printf("num4 is greatest %d \n");
}

    return 0;
}