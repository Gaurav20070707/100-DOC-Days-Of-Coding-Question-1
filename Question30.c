// Q30)Write a program to reverse a given number

#include<stdio.h>

int main () {
int number = 0;
int reverse = 0;
int remainder = 0;
printf("Enter number : ");
scanf("%d",&number);

while (number != 0) {
    remainder = number % 10;
    reverse = reverse*10;
    reverse = reverse + remainder;
    number = number/10;
}

printf("Reversed number is : %d",reverse);

    return 0;
}
