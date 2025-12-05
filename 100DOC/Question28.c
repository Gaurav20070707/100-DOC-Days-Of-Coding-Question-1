// Q28)Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
int n;
printf("Enter n");
scanf("%d",&n);
int i;
int product=1;
for (i=2;i<=2*n;i+=2) {
    product*=i;
}
printf("sum of first %d even numbers is %d\t",n,product);
    return 0;
}