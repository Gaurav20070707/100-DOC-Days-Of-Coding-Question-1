//Q17)Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>

int main()
{
float a;

    printf("enter a:");

    scanf("%f", &a);
float b;

    printf("enter b:");

    scanf("%f", &b);
float c;

    printf("enter c:");
    
    scanf("%f", &c);

float ans= ((b*b)-4*(a*c));

float d=((-b+sqrt(ans))/(2*a));

float e=((-b-sqrt(ans))/(2*a));

if (ans<0) {
    printf("Roots are : %f\t%f and they are two complex conjugate roots",d,e , ans);
}

else if(ans==0) {
    printf("Roots are : %f\t%f and they are two equal real roots",d,e , ans);
}

else {
    printf("Roots are : %f\t%f and they are two real distinct roots",d,e , ans);
}

return 0;

}
