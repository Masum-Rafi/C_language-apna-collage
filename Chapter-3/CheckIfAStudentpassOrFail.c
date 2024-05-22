// A progmar for check if a student pass or fail
#include <stdio.h>

int main()
{
   int marks;
   printf("Enter Marks : ");
   scanf("%d", &marks);

   if (marks >= 0 && marks <= 33)
   {
      printf("Student is Fail\n");
   }
   else if (marks >= 33 && marks <= 100)
   {
      printf("Student is Pass\n");
   }
   else
   {
      printf("Invalid Marks\n");
   }

   // // We can also use Ternary Operator
   // (marks >= 33) ? printf("Student is Pass\n") : printf("Student is Fail\n");

   return 0;
}