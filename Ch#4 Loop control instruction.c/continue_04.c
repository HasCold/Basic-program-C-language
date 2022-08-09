#include <stdio.h>
#include <math.h>
int main()
{
    int skip = 5; int i = 0;
    while(i< 6){
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("The value of i is %d \n", i++);
            i++;
        }
    } 

    return 0;
}