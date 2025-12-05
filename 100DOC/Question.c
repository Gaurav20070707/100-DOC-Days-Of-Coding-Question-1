#include<stdio.h>

int main () {
int i,j,x,y;
printf("Enter row");
scanf("%d",&x);
printf("Enter column");
scanf("%d",&y);
for(i=0;i<=x;i++) {

for (j=0;j<=y;j++) {
    if((i==1)&&(j==1 || j==2 || j==3)) {
        printf(" ");
    
}
else {
    printf("*");
}

}
printf("\n");
}


    return 0;
}