#include <stdio.h>
#include <math.h>
int main()
{
    // Break statement is used in all three loops

    int i = 0;
    do{
       printf("The value of i is %d \n", i);
       if(i==4){
           break;
       }
       i++;

    }while(i<10);

    return 0;
}