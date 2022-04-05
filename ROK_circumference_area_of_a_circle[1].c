#include<stdio.h>
#define PI=3.141
int main()
{
int radius;
int area, circumference;
printf("Please enter the radius\n");
scanf("%d,",& radius);
area=3.141*radius*radius;
circumference=3.141*2*radius;
printf("The area of a circle is%d",area);
printf("The circumference of a circle is%d", circumference);
    return 0;
}