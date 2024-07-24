// Keep taking Numbers as input from user until user enters a number which is multiple of 7

#include <stdio.h>
int main()
{
   int n;
   do
   {
      printf("Enter Number : ");
      scanf("%d", &n);
      printf("%d\n", n);

      if (n % 7 == 0)
      {
         break;
      }

   } while (1);

   printf("thank you");
   return 0;
}