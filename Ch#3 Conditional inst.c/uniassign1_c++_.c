#include <stdio.h>
#include <conio.h>
int main()
{
    // write a program to accept two number from user and compare them in c language.

     int a, b;
     printf("Enter the number %d \n", a,b);
     scanf("%d %d", &a ,&b);
     if(a>b){
         printf("%d a is bigger \n", a);
     }
    else if(b>a){ 
         printf("%d b is bigger \n", b);
     }
     else{
         printf("%d both a and b are equal \n" ,a, b);
     }

    getch ();
}