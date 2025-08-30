//Q11 Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main() {
int a;

printf("enter a :",a);
scanf("%d",&a);

int b = a%2;

if (b!=1) {
     printf("Even number");
}
else {
    printf("Odd number");
}
    return 0;
}
