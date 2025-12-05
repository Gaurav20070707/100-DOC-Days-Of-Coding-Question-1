// Q31)Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>

int main () {
int num;
printf("Enter num : ");
scanf("%d",&num);

if(num==0) {
    printf("Binary is 0");
}
int i=0;
int binary[50];
while(num>0) {
    binary[i]=num%2;
    num=num/2;
    i++;

}
printf("Binary is : \n");
int j;
for(j=i-1;j>=0;j--) {
printf("%d",binary[j]);
}

    return 0;
}