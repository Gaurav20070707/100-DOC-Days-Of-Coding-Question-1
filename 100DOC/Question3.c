// Q3)Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main() {

int a;
int b;
printf("enter length a: ",a);
scanf("%d",&a);
printf("enter breadth b: ",b);
scanf("%d",&b);

printf("area of rectangle is : %d\n",a*b);

printf("perimeter of rectangle is : %d\n",2*(a+b));



return 0; 
}