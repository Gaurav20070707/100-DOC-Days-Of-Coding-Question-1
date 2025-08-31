//Q16 Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int a;
    printf("Enter a");
    scanf("%d", &a);
    int b;
    printf("Enter b");
    scanf("%d", &b);
    int c;
    printf("Enter c");
    scanf("%d", &c);


    if (a>b && a>c) {
        printf("a is largest integer");
    }
    else if (b>a && b>c) {
        printf("b is largest integer");
    }
    else if (c>a && c>b) {
        printf("c is largest integer");
    }
    else if (a==b && b==c && c==a){
        printf("all are equal");
    }
    else {
    printf("Not valid");
    }

    return 0;
}
