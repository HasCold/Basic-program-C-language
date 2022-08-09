#include <stdio.h>
#include <math.h>
int main()
// Write a program to find grade of a student given his marks based on below:
{
    int marks;
    
    printf("Enter your marks (60-100)  \n");
    scanf("%d", &marks);
    if (marks>=90 && marks<= 100)
    {
        printf("Your grade is A \n" );
    }
    else if (marks>=80 && marks<= 89)
    {
        printf("Your grade is B \n");
    }

    else if (marks>=70 && marks<= 79)
    {
        printf("Your grade is C \n");
    }
    else if (marks>=60 && marks<= 69)
    {
        printf("Your grade is D \n");
    }

    else
    {
        printf("Your grade is F \n");
    }



// Another way to write this program by using swicthcase instruction

    printf("Enter your marks(0 - 100)\n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Your Grade is A\n");
        break;
    case 8:
        printf("Your Grade is B\n");
        break;
    case 7:
        printf("Your Grade is C\n");
        break;
    case 6:
        printf("Your Grade is D\n");
        break;
    case 5:
        printf("Your Grade is E\n");
        break;
    default:
        printf("Your Grade is F\n");
    }

    return 0;
}