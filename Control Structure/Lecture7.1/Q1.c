#include  <stdio.h>
int main(){

int x,y,min;

  printf("enter the value of x :");
  scanf("%d",&x);

  printf("enter the value of by :");
  scanf("%d",&y);

 if(x<y){
   min=x;
 }else{
   min=y;
 }
  printf("the  minimum value is : %d", min);
  return 0;
}