/*
Print the sum of the first n Natural numbers
n = 4
Also, Print them is reverse.
*/

#include <stdio.h>
int main()
{

   int n;
   printf("Enter Number : ");
   scanf("%d", &n);

   int sum = 0;
   for (int i = n; i >= 1; i--)
   {
      sum = sum + i;
      printf("%d \n", i);
   }

   printf("sum is %d \n", sum);

   return 0;
}