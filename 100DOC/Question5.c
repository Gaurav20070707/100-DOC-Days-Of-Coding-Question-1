//Q5)Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main() {
    float Celcius;
    printf("enter Celcius :", Celcius);
    scanf("%.0f", &Celcius);

    printf("Fahrenite is : %f", Celcius*1.8+32);
    return 0;
}