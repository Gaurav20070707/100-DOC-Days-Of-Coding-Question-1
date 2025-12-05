// Q39)Write a program to find the product of odd digits of a number.

#include<stdio.h>


int main() {
int num,remainder,prod=1;
printf("Enter number");
scanf("%d",&num);
while(num!=0){
    remainder=num%10;
    if(num%2 !=0) {
        prod=prod*remainder;
    }
    num=num/10;
}
printf("%d",prod);


    return 0;
}