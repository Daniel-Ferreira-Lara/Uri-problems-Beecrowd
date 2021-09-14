#include <stdio.h>

int main()
{
   int i = 1, j = 60, k;
   for (k = 0; k < 13; k++)
   {
      printf("I=%d J=%d\n", i, j);
      i += 3;
      j -= 5;
   }
   return 0;
}