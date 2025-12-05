// Q37)Write a program to find the LCM of two numbers.

#include<stdio.h>

int main() {
int num1,num2,i,hcf;
printf("Enter num1\t");
scanf("%d",&num1);
printf("Enter num2\t");
scanf("%d",&num2);
for(i=1;i<=num1 && i<=num2;i++){
    if(num1%i==0 && num2%i==0){
        hcf=i;
    }
}

printf("LCM is : %d",(num1*num2)/hcf);

    return 0;
}
