// Q42)Write a program to check if a number is a perfect number.

#include<stdio.h>

int main () {
int i,num,sum=0,res=1;
printf("Enter number : \n");
scanf("%d",&num);

for(i=1;i<num;i++) {
    if(num%i==0) {
        sum+=i;
        }
    }
if(sum==num) {
    printf("Perfect number");
}
if(sum!=num) {
    printf("Not a perfect number");
}

return 0;
}
