#include <stdio.h>
int main()
{
   int I;
   for (I = 1; I <= 100; I++)
      if (I % 2 == 0)
         printf("%d\n", I);
   return 0;
}