#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a \n");
    scanf("%d", &a);
    // One liner statement=> not recommended every time especially in creating sophisticated logic programs
    (a<=5)? printf("The value of a less than 5"):printf("The value of a not less than 5");

    return 0;
}