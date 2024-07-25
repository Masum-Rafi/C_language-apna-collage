// A program to check if given character is digit or not.

#include <stdio.h>
int main()
{

   char a;
   printf("Enter a character : ");
   scanf("%c", &a);

   (a >= '0' && a <= '9') ? printf("%c Is a Digit", a) : printf("%c is a Character"); // in this program i used the Ternary Oparator. its a short from if/else condition
   return 0;
}