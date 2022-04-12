/* Grading system -if -else ladder
1.ask the user to enter marks for three subjects
2.calculate the everage marks
3.calculate the grade 70-100:A, 60-69:B, 50-59:C, 40-49:D, 30-39:A, 0-29:F
*/
#include<stdio.h>
int main()
{
   int phyc, chem, bio, everage,grade;
   printf("Enter score (1-100) for phyc,chem ,bio: ");
   scanf("%d,%d,%d",&phyc,&chem,&bio);
   everage=(phyc+chem+bio)/3;
   // check everage is valid or not
   // everage is valid if it belongs to 0-100
   if(everage<0 || everage>100) {
     printf("Invalid Score");
     // stop execution
     return 0;
   }

  //find grade for everage
   // for everage >= 70
   if(everage>=70 && everage<=100)
     printf("gradeA");

   // for everage>=60 and <69
   else if(everage>=60)
    printf("gradeB");

   // for everage>=50 and <59
   else if(everage>=50)
 printf("gradeC");
   // for everage>=40 and <49
   else if(everage>=40)
     printf("gradeD");

   // for everage>=30 and <39
   else if(everage>=50)
     printf("gradeE");

   // for everage<30
   else
 printf("fail");

   return 0;
}






    