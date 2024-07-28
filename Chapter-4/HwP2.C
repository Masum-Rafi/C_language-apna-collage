/* Write a program to check if a number is prime or not.

# Prime numbers - prime numbers are positive integers greater than 1 with exactly two factors, 1 and the number itself. Some of the prime numbers include 2, 3, 5, 7, 11, 13, etc.

## All prime numbers are odd numbers except 2, 2 is the smallest prime number and is the only even prime number.
*/
#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isPrime(int n);

int main()
{
   int number;
   printf("Enter a number: ");
   scanf("%d", &number);

   if (isPrime(number))
   {
      printf("%d is a prime number.\n", number);
   }
   else
   {
      printf("%d is not a prime number.\n", number);
   }

   return 0;
}

// Function to check if a number is prime
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
