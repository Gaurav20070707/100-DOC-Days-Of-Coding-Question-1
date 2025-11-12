// Q34)Write a program to check if a number is prime.

#include<stdio.h> 

int main(){
int num,i,remainder,pri=0;
printf("Enter number");
scanf("%d",&num);
if(num<=1){
    printf("Not a prime number");
    return 0;
}

for(i=2;i<num;i++){
    if(num%i==0){
        pri=1;
        break;
}
}
if(pri==0){
    printf("Prime number");
}
else {
    printf("Not a prime number");
}
    return 0;
}
