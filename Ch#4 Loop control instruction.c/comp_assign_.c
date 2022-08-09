#include <stdio.h>
#include <math.h>
int main()
{
    // += -->> compound assignmant operator.
        int i = 5;
    printf("The value of ++i is %d \n", ++i);
    ++i;
    i++;
    
    i+=10;  // -->>  Increment  i by 10 
    printf("The value of i is %d \n", i);

    return 0;
}