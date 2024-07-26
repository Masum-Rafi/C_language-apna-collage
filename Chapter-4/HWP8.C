/* print thispattern using nested loop.
 *****
 *****
 *****
 ***** */
#include <stdio.h>
int main()
{

   int Row = 4;
   int Colums = 5;

   for (int i = 0; i < Row; i++)
   {
      for (int j = 0; j < Colums; j++)
      {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}