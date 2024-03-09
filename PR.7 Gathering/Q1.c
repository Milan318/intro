#include <stdio.h>
#include <math.h>

float addition(float x,float y);
float subraction(float x,float y);
float multiplication(float x,float y);
float division(float x,float y);
float modulo(float x,float y);

int main()
{
  int choice;
  float x,y,z;
  do
    {
      printf("\nPress1 for addition.");
      printf("\nPress2 for subraction.");
      printf("\nPress3 for multiplication.");
      printf("\nPress4 for division.");
      printf("\nPress5 for modulo.");
      printf("\nPress0 for exit.");
      printf("\n\nEnter your choice:");
      scanf("%d",&choice);

      switch(choice)
        {
          case 0:
          printf("\nThank you for using my calculator.");
          break;

          case 1:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          z=addition(x,y);
          printf("The sum of %f and %f is %f.\n",x,y,z);
          break;

          case 2:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          z=subraction(x,y);
          printf("The sum of %f and %f is %f.\n",x,y,z);
           break;

          case 3:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          z=multiplication(x,y);
          printf("The sum of %f and %f is %f.\n",x,y,z);
           break;

          case 4:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          z=division(x,y);
          printf("The sum of %f and %f is %f.\n",x,y,z);
           break;

          case 5:
          printf("Enter the value of x:");
          scanf("%f",&x);
          printf("Enter the value of y:");
          scanf("%f",&y);
          z=modulo(x,y);
          printf("The sum of %f and %f is %f.\n",x,y,z);
           break;

          default:
          printf("\nInvalid choice.");
           break;
        }
    }
    while (choice !=0);
  return 0;
}
 float addition(float x,float y)
{
  return x+y;
}
float subraction(float x,float y)
{
  return x-y;
}
float multiplication(float x,float y)
{
  return x*y;
}
float division(float x,float y)
{
  return x/y;
}
float modulo(float x,float y)
{
  return fmod(x,y);
}