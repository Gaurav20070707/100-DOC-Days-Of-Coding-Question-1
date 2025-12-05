// Q38)Write a program to find the sum of digits of a number.
#include<stdio.h>

int main (){
int num,remainder,sum=0;
printf("Enter number : ");
scanf("%d",&num);
while(num !=0) {
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
printf("Sum is : %d",sum);


    return 0;
}