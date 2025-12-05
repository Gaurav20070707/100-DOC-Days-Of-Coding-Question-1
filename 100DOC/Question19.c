//Q19)Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter side a: ");
    scanf("%d", &a);

    printf("Enter side b: ");
    scanf("%d", &b);

    printf("Enter side c: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles triangle\n");
        }
        else if (a*a == b*b + c*c || 
                 b*b == a*a + c*c || 
                 c*c == a*a + b*b) {
            printf("Right angle triangle\n");
        }
        else if (a != b && b != c && c != a) {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}