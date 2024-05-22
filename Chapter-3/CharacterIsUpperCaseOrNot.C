#include <stdio.h>

int main()
{
   char ch;

   printf("Enter a character : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')
   {
      printf("Character is Uppercase\n");
   }
   else
   {
      printf("Character is not Uppercase\n");
   }

   return 0;
}
