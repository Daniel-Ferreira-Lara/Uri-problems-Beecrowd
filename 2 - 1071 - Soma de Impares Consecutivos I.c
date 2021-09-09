#include <stdio.h>

int main()
{
   int i, x, y, aux, soma;
   while (scanf("%d%d", &x, &y) == 2)
   {
      soma = 0;
      if (x > y)
      {
         aux = x;
         x = y;
         y = aux;
      }
      if (x % 2 != 0)
      {
         for (i = x + 2; i < y; i++)
         {
            if (i % 2 != 0)
               soma += i;
         }
      }
      else
      {
         for (i = x + 1; i < y; i++)
         {
            if (i % 2 != 0)
               soma += i;
         }
      }
      printf("%d\n", soma);
   }

   return 0;
}