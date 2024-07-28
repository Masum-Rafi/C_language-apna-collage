// Write a program to print prime numbers in a range
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);
int main()
{
   int a, b;
   printf("Enter the range: ");
   scanf("%d %d", &a, &b);

   for (int i = a; i <= b; i++)
   {
      if (isPrime(i))
      {
         printf("%d ", i);
      }
   }
   return 0;
}

bool isPrime(int n)
{
   if (n <= 1)
   {
      return false;
   }
   for (int i = 2; i * i <= n; i++)
   {
      if (n % i == 0)
      {
         return false;
      }
   }
   return true;
}
