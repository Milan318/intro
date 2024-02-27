#include <stdio.h>

 int main(){

   int x;

   printf("enter the value of x :");
   scanf("%d",&x);

    if (x<0){
      printf("the value is negative",x);
    }else if(x>0){
      printf("the value is positive",x);
    }else {
      printf("the value is neutral",x);
    }
   return 0;
 }