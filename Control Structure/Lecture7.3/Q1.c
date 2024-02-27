#include  <stdio.h>
int main(){

int x,y,z,result;

  printf ("enter the value of x :");
  scanf ("%d",&x);

  printf ("enter the value of y :");
  scanf ("%d",&y);

  printf ("enter the value of z :");
  scanf("%d",&z);

  result = z<(x<y?x:y)?z:((x<y)?x:y);

  printf("the smallest number is : %d",result);

  return 0;
}