#include <stdio.h>

int main()
{
   int age;
   printf("Enter age : ");
   scanf("%d", &age);

   if (age >= 18)
   {
      printf("Adult\n");
      printf("He is Eligeble for vote\n");
   }
   else if (age >= 13 && age <= 18)
   {
      printf("Teenager \n");
   }
   else
   {
      printf("Child\n");
   }

   printf("Thank You for your Quary");

   return 0;
}