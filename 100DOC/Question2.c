// Q2)Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main() {

int a;
int b;
printf("enter a :",a);
scanf("%d",&a);
printf("enter b :",b);
scanf("%d",&b);
printf("sum is :%d\n",a+b);
printf("difference is : %d\n",a-b);
printf("product is : %d\n",a*b);
printf("quotient is :%d\n",a/b);
if (b=0)
{
   printf("Not Defined",a/b);
}
else 
{
    printf("quotient is :%d\n",a/b);
}

return 0; 
}