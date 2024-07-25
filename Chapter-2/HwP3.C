// A program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
   int a, b, c;
   printf("Enter  Three Number : ");
   scanf("%d %d %d", &a, &b, &c);

   printf("Average of three numbers : %.2f \n", (a + b + c) / 3.0);
   /*%.2f is a format specifier. Here's what it means:
   >> % indicates the start of a format specifier.
   >> .2 specifies that the number should be printed with 2 digits after the decimal point.
   >> f specifies that the number is a floating-point value*/

   // And also we need to use a float value for devide the sum aither we will get 0.00 for our answer

   return 0;
}