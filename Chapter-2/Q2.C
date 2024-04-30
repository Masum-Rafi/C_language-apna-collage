// Write a program to print the smallest number of two.

#include <stdio.h>
int main()
{
   int a, b;

   printf("Enter a : \n");
   scanf("%d", &a);

   printf("Enter b : \n");
   scanf("%d", &b);

   (a > b) ? printf("Smallest number is : %d", b) : printf("Smallest Number is : %d", a);
   // in this program i used the Ternary Oparator. its a short from if/else condition

   return 0;
}