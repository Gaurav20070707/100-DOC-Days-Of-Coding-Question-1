//Q15 Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char x;

    printf("Enter a character: ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z') {
        printf("'%c' is an Uppercase Alphabet.\n", x);
    }
    else if (x >= 'a' && x <= 'z') {
        printf("'%c' is a Lowercase Alphabet.\n", x);
    }
    else if (x >= '0' && x <= '9') {
        printf("'%c' is a Digit.\n", x);
    }
    else {
        printf("'%c' is a Special Character.\n", x);
    }

    return 0;
}
