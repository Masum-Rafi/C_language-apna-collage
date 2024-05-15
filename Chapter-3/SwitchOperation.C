// Switch Operation Day Using Charecter
#include <stdio.h>

int main()
{
   int Day; // 1-saturday 2-sunday 3-monday so go on like 7
   printf("Enter Day (1-7) : ");
   scanf("%d", &Day);

   switch (Day) // we can also use Charecters as our case constant
   {

   case 1: // 'a'
      printf("Saturday");
      break;

   case 2: // 'b'
      printf("Sunday");
      break;

   case 3: // 'c'
      printf("Monday");
      break;

   case 4:
      printf("Tueaday");
      break;

   case 5:
      printf("wednsday");
      break;

   case 6:
      printf("Thursday");
      break;

   case 7:
      printf("Friday");
      break;

   default:
      printf("Invalid Day");
   }

   return 0;
}