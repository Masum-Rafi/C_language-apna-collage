// Logical operator
// Ans = 1 mean True
// Ans = 0 mean false

#include <stdio.h>
int main()

{
   int a = 5, b = 6;

   printf("%d\n", 5 < 4 && 6 > 5);    // AND operator &&
   printf("%d\n", 5 > 4 && 3 < 5);    // AND operator
   printf("%d\n", 5 < 3 || 7 > 5);    // OR operator ||
   printf("%d\n", !(5 < 6 && 4 < 5)); // NOT Operator !

   return 0;
}