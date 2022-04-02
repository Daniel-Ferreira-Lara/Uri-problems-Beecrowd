#include <stdio.h>
int main()
{
   unsigned short int lados[4], i, j, aux;
   for (i = 0; i < 4; i++)
      scanf("%hu", &lados[i]);
   for (i = 0; i < 4; i++)
      for (j = i + 1; j < 4; j++)
         if (lados[j] < lados[i])
         {
            aux = lados[j];
            lados[j] = lados[i];
            lados[i] = aux;
         }
   if (lados[3] < lados[1] + lados[2] || lados[2] < lados[0] + lados[1])
      puts("S");
   else
      puts("N");
   return 0;
}