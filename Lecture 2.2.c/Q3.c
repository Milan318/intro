#include <stdio.h>
int main()
{
    int base,hight,area;
    
    printf("enter the base of the triangle:");
    scanf("%d" ,&base);

    printf("enter the hight of the triangle");
    scanf("%d" ,&hight);

    area=0.5*base*hight;

printf("the area of the triangle with base %d and hight %d is %d\n",
base,hight,area);

return 0;

}