#include <stdio.h>

int main()
{
   int number;
   printf("Enter a number : ");
   scanf("%d", &number);

   if (number >= 0)
   {
      printf("Number is porsitive\n");

      if (number % 2 == 0)
      {
         printf("Number Is Even\n");
      }
      else
      {
         printf("Number Is Odd\n");
      }
   }
   else
   {
      printf("Number is Negative\n");
   }

   return 0;
}