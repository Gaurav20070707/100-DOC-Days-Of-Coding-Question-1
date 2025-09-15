// Q23)Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.
#include <stdio.h>

int main() {
   int day;
   printf("Enter day number");
   scanf("%d",&day);
   if(day<6) { 
    printf("Fine is :%d rupees",(day*2));
   }
   else if(day<10) {
    printf("Fine is :%d rupees",(day*4)-10);
   }
   else if(day<20) {
    printf("Fine is :%d rupees",(day*6)-30);
   }
   else if (day>30) {
    printf("Membership cancelled");
   }
   else {
    printf("Not valid");
   }
    return 0;
}
