// Print the number from 0 to N , where N is entered by the user.
#include <stdio.h>

int main()
{
   int N;
   printf("Enter the number: ");
   scanf("%d", &N);

   // for (int i = 0; i <= N; i++)
   // {
   //    printf("%d\n", i);
   // }

   int i = 0;
   while (i <= N)
   {
      printf("%d\n", i);
      i++;
   }

   return 0;
}