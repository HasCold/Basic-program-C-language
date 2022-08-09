#include <stdio.h>
#include <math.h>
int main()
{
    int age;
    int Vippass = 0;
    Vippass = 1;
    printf("Enter your age \n");
    scanf("%d", &age);
//  if (age != 95){  // != is not equal to
//  if (age <= 80 && age>= 18){   // single & shows bitwise operations
 if ((age <= 80 && age>= 18) || !(Vippass == 1)){   // single (&) shows bitwise operations
// ! NOT opearator works as if condition evaluate in true then it becomes false or if evaluate in false then becomes true.
        printf("You are above 18 and below 80, you can drive \n", age);
    }
    else{ printf("You cannot drive \n", age);
    }
    return 0;
}