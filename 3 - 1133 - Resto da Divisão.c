#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a, b, i, aux;
   scanf("%d%d", &a, &b);
   if (a > b)
   {
      aux = a;
      a = b;
      b = aux;
   }
   for (i = a + 1; i < b; i++)
      if ((abs(i % 5) == 2) || (abs(i % 5) == 3))
         printf("%d\n", i);
   return 0;
}