#include <stdio.h>
#include <math.h>
int main()
{
    for(int i = 0; i<10; i++){                       //Syntax of for loop looks like 
        // printf("The value of i is %d \n", i);
                      //OR                          // for(initialize; test; increment or decrement){
          //BUT IF WE WANT TO PRINT THE NUMBER 
          //FROM 1 TO  10 THEN BELOW 
        printf("The value of i is %d \n", i+1);     //  code 1;
    }                                               //   code 2;         
                                                    //  }
    return 0;
                                           // Here initialize means shuru karna or put in a condition appropriate 
}                                                   // to the start of an operation.


// Whole implememtation of for loop 
// for(initialize; test; increment or decrement)
// FIRST STEP : first int i = 0 is run then condition is check whether the i < 10 if it true then it will be execute 
// and read the print statement. 
// SECOND STEP : when it returns then our loop tells the compler to execute the i++ condition more.    
// THIRD STEP : Then our value 0 becomes 1. Repeat the procedure until the condition becomes false.
// NOTE :  our initialize value will run only once a time. 