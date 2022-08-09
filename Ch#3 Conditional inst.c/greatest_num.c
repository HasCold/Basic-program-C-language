#include <stdio.h>
#include <math.h>
int main()
{
    // Q6 Write a program to find greatest of four number entered by the user.

    int num1, num2, num3, num4;
    printf("Enter your four number %d \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 > num2)
    {
        if (num1 > num3)
        {

            if (num1 > num4)
            {
                printf("%d is greatest %d \n", num1);
            }
        }
    }
    else
    {
        printf("%d is greatest %d \n", num4);
    }
    if (num2 > num3)
    {

        if (num2 > num4)
        {
            printf("%d is greatest %d \n", num2);
        }
    }
    else
    {
        printf("%d is greatest %d \n", num4);
    }
    if (num3 > num4)
    {
        printf("%d is greatest %d \n", num3);
    }
    else
    {
        printf("%d is greatest %d \n", num4);
    }

    return 0;
}