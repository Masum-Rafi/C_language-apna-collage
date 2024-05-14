// A program to Checking if A number is Even or odd
// Even - 1
// odd - 0

#include <stdio.h>
int main()
{
   int x;
   printf("Enter a number : ");
   scanf("%d", &x);

   printf("%d", x % 2 == 0);
   return 0;
}