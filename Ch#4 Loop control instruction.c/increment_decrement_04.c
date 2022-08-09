#include <stdio.h>
#include <math.h>
int main()
{
    // There are two types of increment operators below
    // i++ ==>> Phele print phir increment kare.
    // ++i -->> Pehle increment phr print kare.
    // i++ or ++i ==> matlb 1 se increment.

    int i = 5;
    // printf("The value of ++i is %d \n", ++i);
    // printf("The value of i is %d \n", i);
    // ++i;
    //             // OR                                // You can comment out any one of these and then run it.
    printf("The value after i++ is %d \n", i++);
    printf("The value of i is %d \n", i);
    i++;


    //    i-- ==>> Pehle print phr decrement karega.
    //    --i ===>> Pehle decrement phr print karega.

    // printf("The value after --i is %d \n", --i);
    // printf("The value after i is %d \n", i);
    //                // OR
    // printf("The value after i-- is %d \n", i--);
    // printf("The value of i is %d \n", i);
    
    return 0;
}