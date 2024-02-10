#include <stdio.h>
int main()
{
    int radius,area;
    printf("enter the radius");
    scanf("%d" ,&radius);
    area=3.14*radius*radius;
    printf("area of circle is %d" , area);
    return 0; 
}