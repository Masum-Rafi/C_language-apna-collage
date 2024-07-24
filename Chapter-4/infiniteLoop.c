#include <stdio.h>
int main()
{
   for (int i = 0;; i++)
   {
      printf("%d \n", i);
   }
   return 0;
}

// We need to very careful while writing the loop, because if we forget to write the condition in the loop, then it will become an infinite loop. this program will run forever and will not stop until we stop it manually or it will fill our memory and crash the system.