// program to determine the temp of the day
#include<stdio.h>
int main()
{
   int temp;
   printf("Enter days temp: ");
   scanf("%d",&temp);
   // for temp <0
   if(temp<0 )
     printf("freezing weather");
    //for temp>=0and<10
   else if(temp<10)
    printf("very cold weather");

   // for temp>10 and <20
   else if(temp<20)
 printf("cold weather");
   // for temp>=20 and <30
   else if(temp<30)
     printf("normal temp");

   // for temp>=30 and <40
   else if(temp<40)
     printf("hot ");

   // for temp >=40
   else if (temp>40)
 printf("very hot");

   return 0;
}






    