#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter ypur number \n");
    scanf("%d", &num);
    // else if clause => instead of using multiple statements, we can also use else if along with if thus forming an
    // if-else if-else ladder structure
    if(num==1){                   // == means equality check 
        printf("Your number is 1 \n");
    }
    else if(num==2){
        printf("Your number is 2 \n");
    }
    else if(num==3){
        printf("Your number is 3 \n");
    }
    else {
        printf("Its not 1, 2or 3! \n");
    }
    return 0;
}