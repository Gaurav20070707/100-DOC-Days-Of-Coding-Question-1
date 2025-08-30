//Q10)Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
#include<math.h>

int main() {
float seconds;
    printf("enter seconds :", seconds);
    scanf("%f", &seconds);

    float c= seconds/3600;
    float d= seconds/60;
    printf("ratio is %f :",c);
    printf("%f :",d);
    printf("%f",seconds);
    return 0;
}
