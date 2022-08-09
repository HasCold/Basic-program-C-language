#include <stdio.h>
#include <math.h>
// switchcase control instruction(it means star rating)
int main()
{
    int rating;
    printf("Enter rating(1-5)\n");
    scanf("%d",&rating);
    switch(rating){            // switch(integer expression)
        case 1:                      
        printf("Your rating is 1 \n");    // Here break is a reserved word it means it should be exit from switchcase 
        break;                            // statement if any case is matched.
        case 2:
        printf("Your rating is 2 \n");
        break;
        case 3:
        printf("Your rating is  3 \n");
        break;
        case 4:
        printf("Your rating is 4 \n");
        break;
        case 5:
        printf("Your rating is 5 \n");
        break;
        default:
        printf("Invalid rating \n");
        break;

    }
  
    return 0;
}