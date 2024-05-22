// An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <stdio.h>
int main()
{
   int num, originalNum, remainder, result = 0;
   printf("Enter a three-digit integer: ");
   scanf("%d", &num);
   originalNum = num;

   while (originalNum != 0)
   {
      // remainder contains the last digit
      remainder = originalNum % 10;

      result += remainder * remainder * remainder;

      // removing last digit from the orignal number
      originalNum /= 10;
   }

   if (result == num)
      printf("%d is an Armstrong number.\n", num);
   else
      printf("%d is not an Armstrong number.\n", num);

   return 0;
}