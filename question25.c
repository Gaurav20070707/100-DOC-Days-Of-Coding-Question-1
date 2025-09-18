// Q25) Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
   int a;
   printf("Enter a");
   scanf("%d",&a);
   int b;
   printf("Enter b");
   scanf("%d",&b);
   char op;
   printf("Enter operator");
   scanf(" %c",&op);
   int result;
   
   switch(op) {
    case '+':
    result = a+b;
    printf("Result is %d",result);
    break;
    case '-':
    result= a-b;
    printf("Result is %d",result);
    break;
    case '/':
    if (b!=0) 
    printf("Result is %d",a/b);
    else 
    printf("Divsion by 0 is not valid");
    break;
    case '%':
    result= a%b;
    printf("Result is %d",result);
    break;
    case '*':
    result = a*b;
    printf("Result is %d",result);
    break;
    default:
    printf("Invalid operator");
   }
    return 0;
}
