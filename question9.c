//Q9)Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>

int main() {
float P;
    printf("enter P :", P);
    scanf("%f", &P);

    float R;
    printf("enter R :", R);
    scanf("%f", &R);

    float T;
    printf("enter T :", T);
    scanf("%f", &T);

    printf("Simple Interest is: %f\n", (P*R*T)/100);

    float c;
    c=pow(P*(1+R),T);


    printf("Compound Interest is : %f\n",c);
    return 0;
}
