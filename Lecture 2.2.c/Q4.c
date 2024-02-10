#include <stdio.h>
int main(){
    int x,y,z,SI;

    printf("enter the value of x ");
    scanf("%d" ,&x);
    
    printf("enter the value of y ");
    scanf("%d" ,&y);

    printf("enter the value of z ");
    scanf("%d" ,&z);
   
    SI=(x*y*z)/100;

    printf("the amount is %d" ,SI);

    return 0;

    }