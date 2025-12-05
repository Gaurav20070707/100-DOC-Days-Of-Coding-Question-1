//Q22)Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float CP;
    printf("Enter cost price :");
    scanf("%f",&CP);
    float SP;
    printf("Enter selling price :");
    scanf("%f",&SP);
   if(CP>0 && SP>=0) {
   if(CP>SP) {
    printf("Loss percentage is : %.2f",((CP-SP)/CP)*100);
   }
   else if (SP>CP) {
    printf("Profit percentage is : %.2f",((SP-CP)/CP)*100);
   }
   else {
    printf("No profit, no loss");
   }
}
else {
    printf("Not valid");
}
    return 0;
}