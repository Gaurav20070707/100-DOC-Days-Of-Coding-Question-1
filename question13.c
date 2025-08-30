//Q13 Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main() {
int a;

printf("enter a :",a);
scanf("%d",&a);
int b = a%4;
int c = a%100;
int d = a%400;
if((b==0 && d==0) || (c!=0) ){
    printf("Leap year");
}
else {
    printf("Not a leap year");
}
    return 0;
}
