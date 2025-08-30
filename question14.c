//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char x;

    printf("Enter an alphabet: ");
    scanf("%c", &x);

    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {

    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ) {
        printf("%c is a vowel");
    }
    else {
        printf("%c is a consonant.\n");
    }
}
    else {
        printf("Not an alphabet");
    }

    return 0;
}
