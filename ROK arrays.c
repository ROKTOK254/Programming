//printing array elements in reversed order
#include<stdio.h>
int main()
{
int i=(21,32,32,34,54,56,67,89,90);
 int score[9]={21,32,32,34,54,56,67,89,90};
//normal order
for(i=0;i<9;i++)
{
printf("%d\t",i);
}
printf("\n");
//reverse order
for (i=89; i>=20; i--)
{
printf("%d\t",i--);
}
return 0;
}