#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    
// write a program to accept three number from user and print them in ascending and desecnding order in c.

int a, b, c;
printf("Enter the number %d \n");
scanf("%d %d %d",&a,&b,&c);
if (a>=b)
{
    if(a>=c){
        if(b>=c){
        printf("Descending order is %d %d %d \n",a,b,c);
        printf("Ascending order is %d %d %d \n",c,b,a);
}}}   

else{
    printf("Descending order is %d %d %d \n",b,c,a);
    printf("Ascending order is %d %d %d \n",a,c,b);
}
if (b>=a)
{
  if(b>=c){
      if(a>=c){
    printf("Descending order is %d %d %d \n",b,a,c);
    printf("Ascending order is %d %d %d \n",c,a,b);
}}}  

else{
    printf("Descending order is %d %d %d \n",b,c,a);
    printf("Ascending order is %d %d %d \n",a,c,b);
}
if (c>=a) 
{
    if(c>=b){
        if(a>=b){ 
    printf("Descending order is %d %d %d \n",c,a,b);
    printf("Ascending order is %d %d %d \n",b,a,c);
}}}
else{
    printf("Descending order is %d %d %d \n",c,b,a);
    printf("Ascending order is %d %d %d \n",a,b,c);
}

    getch();
}