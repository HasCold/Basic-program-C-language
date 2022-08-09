#include <stdio.h>

int main()
{
    int length, breadth;
    printf("What is the length of rectangle %d \n");
    scanf("%d", &length);

    printf("What is the breadth of rectangle %d \n");
    scanf("%d", &breadth); 
   printf("The area of your rectangle %d \n", length * breadth);
    return 0;
}