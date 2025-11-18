// Q41)Write a program to swap the first and last digit of a number

#include<stdio.h>

int main () {
int first,num,original,last,middle,digit=0,power=1;
printf("Enter number : \n");
scanf("%d",&num);
original=num;
last=num%10;
while(num>=10) {
    num=num/10;
    digit++;
    power*=10;
}
first=num;

middle=(original%power)/10;

printf("%d",(last*power)+(middle*10)+first);


    return 0;
}
