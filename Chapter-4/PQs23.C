// calculate the sum of all numbers between 5 and 50
// [Including 5 and 50]

#include <stdio.h>
int main()
{
   int sum = 0;
   for (int i = 5; i <= 50; i++)
   {
      sum = sum + i;
      printf("%d \n", sum);
   }

   return 0;
}