// Oparator Precedence
// *, /, % higher precedence
// +, - lower precedence
// = lowest precedence

#include <stdio.h>
int main()
{
   int a = 5 + 4 * 3; // * high precedence
   printf("%d\n", a);

   float b = 5 * 4.0 / 3.0 * 2; // same precedence , associativity rule for same precedence
   printf("%f", b);             // Perform from left to right - associativity rule

   return 0;
}