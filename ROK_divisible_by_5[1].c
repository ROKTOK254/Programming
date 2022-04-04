#include<stdio.h>
int main()
{
int num;
printf(" Enter an integer:");
scanf("%d",&num);
//true if num is perfectly divisible by 5
if(num %5==0)
printf("%d is divisible.",num);
else
printf("%d is not.",num);
return 0;
}