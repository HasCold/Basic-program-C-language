#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
//  if (age != 95){  // != is not equal to
 if (age >= 95){
        printf("You are above 95, you cannot drive \n", age);
    }
    else{ printf("Below 95, you can drive \n", age);
    }

if(age=50){      // == double equals(Equality check)
    printf("Half century \n");
}

    return 0;
}