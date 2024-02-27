#include<stdio.h>
int main()
{
  int x,y,z,min;
  printf("enter the value of x:");
  scanf("%d", &x);
  printf("enter the value of y:");
  scanf("%d", &y);
  printf("enter the value of z:");
  scanf("%d", &z);
   if (x < y) {
          if (x < z) {
              min = x;
          } else {
              min = z;
          }
      } else {
          if (y < z) {
              min = y;
          } else {
              min = z;
          }
      }

      printf("Minimum number is: %d", min);

      return 0;
  }