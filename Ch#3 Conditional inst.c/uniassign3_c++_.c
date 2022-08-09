#include <stdio.h>
 #include <conio.h>
#include <math.h>
int main()
{
    // Write a program to accept roll numbers and marks for three subjects, print total mark ,average 
    // and also print grade

   int chem, phy, maths, rollno;
   float Total, Avg;
   printf("Enter your rollno ", rollno);
   scanf("%d", &rollno);

   printf("Enter your marks of chem phy and maths %d", chem,phy,maths);
   scanf("%d %d %d ",&chem,&phy,&maths);

//    Total=(chem + phy + maths);
//    printf("Your marks is %d \n");
   
   Avg=(chem + phy + maths)/3;
   if(Avg>=80){
       printf("Your grade is A+ %f \n");
   }
   else if(Avg>=70){
       printf("Your grade is A %f \n");
   }
   else if(Avg>=60){
       printf("Your grade is B %f \n");
   }
   else if(Avg>=50){
       printf("Your grade is C %f \n");
   }
   else if(Avg==49 && Avg<=49){
       printf("Your grade is F = Failed %f \n");
   }

    return 0;
}