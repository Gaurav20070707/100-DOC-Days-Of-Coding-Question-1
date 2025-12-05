// Q27)Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
int n;
printf("Enter n");
scanf("%d",&n);
int i;
int sum=0;
for (i=1;i<=2*n;i+=2) {
    sum+=i;
}
printf("sum of first %d odd numbers is %d\t",n,sum);
    return 0;
}