#include <stdio.h>
int main()
{
   for (int i = 1; i <= 10; i++)
   {
      if (i == 10) // skip
      {
         continue;
      }
      printf("%d \n", i);
   }

   return 0;
}