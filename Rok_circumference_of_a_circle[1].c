#include<stdio.h>

int main()
{
int length;
int width;
int area, perimeter;
printf("Please enter the length\n");
scanf("%d,",& length);
printf("please enter the width\n");
scanf("%d",& width);
area=length*width;
perimeter=length+width+length+width;
printf("The area of a rectangle is%d",area);
printf("The perimeter of a rectangle is%d", perimeter);
    return 0;
}