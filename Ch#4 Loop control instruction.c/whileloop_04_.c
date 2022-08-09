#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    while (a > 10)    //==>The block keeps executing as long as the condition is true.
    {
        printf(" %d \n", a);
        a++;
    }               //NOTE==> If the condition never becomes false the while loop keeps getting executed.Such a 
                      // loop is known as infinite loop.    

    return 0;
}