#include <stdio.h>
#include <math.h>
int main()
{
    int i = 9;
    do{
         printf("The value of i is %d \n", i);
        i++;
    }while(i<=10);             // In do while loop first our compiler print the code and then check the condition.
 
// while ==>>  checks the condition and then executes the code.
// do-while==>> executes the code and then check the condition.
// matlb do-while loop ak aisa loop ha jo ak baar tu chalta hi chalta ha phr uske baad condition check karta.

    return 0;
}