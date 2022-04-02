#include <stdio.h>
int main()
{
   int I, num, quantidade = 0, coelho = 0, rato = 0, sapo = 0, total = 0;
   char raca;
   scanf("%d", &num);
   for (I = 0; I < num; I++)
   {
      scanf("%d %c", &quantidade, &raca);
      total += quantidade;
      if (raca == 'C')
         coelho += quantidade;
      else if (raca == 'R')
         rato += quantidade;
      else if (raca == 'S')
         sapo += quantidade;
   }
   printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, coelho, rato, sapo);
   printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", (float)coelho * 100.0 / total, rato * 100.0 / total, sapo * 100.0 / total);
   return 0;
}