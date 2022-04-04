#include<stdio.h>
int main()
{
double number;
printf(" Enter a number:");
scanf("%d", & number);
if (number<=0){
if (number==0)
printf("%d you entered a negative num.");
}
else
printf("%d  you entered a positive num.");
return 0;
}