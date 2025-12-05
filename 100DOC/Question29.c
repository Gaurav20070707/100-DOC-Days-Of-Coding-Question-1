// Q29)Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
int n;
printf("Enter n");
scanf("%d",&n);
int i;
int product=1;
for (i=1;i<=n;i++) {
    product*=i;
}
printf("%d! : %d\t",n,product);
    return 0;
}