// Q24): Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

#include <stdio.h>

int main() {
   int unit;
   printf("Enter unit");
   scanf("%d",&unit);
   if(0<unit && unit<101) { 
    printf("Bill is :%d rupees",(unit*5));
   }
    else if(unit<201) {
    printf("Bill is :%d rupees",((unit-100)*7)+500);
    }
   else if(unit<301) {
    printf("Bill is :%d rupees",((unit-200)*10)+1200);
   }
   else if(unit>300) {
    printf("Bill is :%d rupees",(unit*12)-2200);
   }
   else {
    printf("Not valid");
   }
    return 0;
}
