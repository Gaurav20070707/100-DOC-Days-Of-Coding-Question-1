// Q32)Write a program to check if a number is a palindrome.
#include<stdio.h>

int main() {

int num;
int rev_num=0;
int remainder;
int fakenum;
printf("Enter num :\n");
scanf("%d",&num);
fakenum=num;
while(num!=0) {
    remainder=num%10;
    rev_num=rev_num*10;
    rev_num=rev_num + remainder;
    num=num/10;
}
if(fakenum==rev_num){
    printf("Numder is a palindrome");
}
else {
    printf("Number is not a palindrome");
}

    return 0;
}
