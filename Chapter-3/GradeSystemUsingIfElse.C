#include <stdio.h>

int main()
{
   int Marks;
   printf("Enter Marks : ");
   scanf("%d", &Marks);

   if (Marks < 40)
   {
      printf("Grade - F \n");
      printf(" Exm kesa dia tu khud i janta hy\n fhir marks ke liye kiu aye BSDK");
   }
   else if (Marks >= 40 && Marks <= 44)
   {
      printf("Grade - D \n");
   }
   else if (Marks >= 45 && Marks <= 49)
   {
      printf("Grade - C \n");
   }
   else if (Marks >= 50 && Marks <= 54)
   {
      printf("Grade - C+ \n");
   }
   else if (Marks >= 55 && Marks <= 59)
   {
      printf("Grade - B- \n");
   }
   else if (Marks >= 60 && Marks <= 64)
   {
      printf("Grade - B \n");
   }
   else if (Marks >= 65 && Marks <= 69)
   {
      printf("Grade - B+ \n");
   }
   else if (Marks >= 70 && Marks <= 74)
   {
      printf("Grade - A- \n");
   }
   else if (Marks >= 75 && Marks <= 79)
   {
      printf("Grade - A \n");
   }
   else if (Marks >= 80)
   {
      printf("Grade - A+ \n");
      printf(" Congratulations You  are Doing Great ");
   }

   return 0;
}