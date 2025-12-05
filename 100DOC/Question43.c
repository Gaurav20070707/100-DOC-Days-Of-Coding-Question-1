// Q43)Write a program to check if a number is a strong number.

#include<stdio.h>

int main () {
    int num, remainder, temp, sum = 0, fact;
    printf("enter num: ");
    scanf("%d", &num);
    temp = num;  

    while (num > 0) {
        remainder = num % 10;
        fact = 1;
    for (int i = remainder; i >= 1; i--) {
        fact *= i;
    }
        sum += fact;     
        num /= 10;  
    }
    if (sum == temp) {
    printf("Strong number");
    } 
    else {
    printf("Not a strong number");
    }
    return 0;
}