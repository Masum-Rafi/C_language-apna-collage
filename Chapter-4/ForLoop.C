// print the number from 0 to 10,
// 0 to 10.0 and
// a to z using for loop
// 0 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
int main()
{
   for (int i = 0; i <= 10; i = i + 1) // we can also use float or char as a iterator/loop-counter
      printf("%d\n", i);

   printf("\n\n");
   for (float j = 0.0; j <= 10.0; j++)
   {
      printf("%.2f\n", j);
   }

   printf("\n\n");
   for (char Ch = 'A'; Ch <= 'Z'; Ch++)
   {
      printf("%c\n", Ch);
   }

   return 0;
}