//Q6)Write a program to swap two numbers using a third variable.
#include<stdio.h>

int main() {

int a;
int b;
int c;

printf("enter a ",a);
scanf("%d",&a);

printf("enter b ",b);
scanf("%d",&b);


printf("enter c ",c);
scanf("%d",&c);

printf("before swapping a :%d, b : %d\n",a, b);
c=a;
a=b;
b=c;

printf("after swapping a : %d b : %d",a, b);    



return 0; 
}