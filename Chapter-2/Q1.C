// A program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
   int a, b, c;
   printf("Enter  Three Number : ");
   scanf("%d %d %d", &a, &b, &c);

   printf("Average of three numbers : %.2f \n", (a + b + c) / 3.0);
   return 0;
}