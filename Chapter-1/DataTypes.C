#include <stdio.h>
int main()
{
   int number = 100;                 // Integers Normal Numbers
   float pi = 3.1416;                // Valu with pointes
   char dolar = '$';                 // carecter like *,$ etc
   double percentage = 60.465874512; // the double data type stores these large range numbers with higher precision.

   int a = 50;
   int A = 30;

   int _age = 25;
   int final_price = 250;

   printf("%d\n", number);     // %d to output for int type data
   printf("%f\n", pi);         // %f to output for float type data
   printf("%c\n", dolar);      // %c to output for char type data
   printf("%f\n", percentage); // %f to output double int type data

   printf("%d\n", a);
   printf("%d\n", A);

   printf("%d\n", _age);
   printf("%d\n", final_price);

   return 0;
}