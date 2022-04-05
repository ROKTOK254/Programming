#include<stdio.h>
#define PI 3.141
int main()
{
float radius,area;
printf("enter the radius of circle");
scanf("%f",& radius);
area=PI*radius*radius;
printf("Area of circle:%f\n",area);
    return 0;
}