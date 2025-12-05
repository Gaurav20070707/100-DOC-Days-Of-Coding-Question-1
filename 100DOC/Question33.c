// Q33)Write a program to check if a number is an Armstrong number.


#include<stdio.h>

int main(){
int num;
int temp_num;
int sum;
int remainder;
printf("Enter number :");
scanf("%d",&num);
temp_num=num;
while(temp_num != 0) {
    remainder=temp_num%10;
    sum=sum+(remainder*remainder*remainder);
    temp_num=temp_num/10;
}
if(num==sum){
    printf("Armstrong number");
}
else
{
    printf("Not Armstrong number");
}




return 0;
}