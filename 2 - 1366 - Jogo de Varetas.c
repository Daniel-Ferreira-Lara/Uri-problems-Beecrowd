
#include <stdio.h>
int main()
{
   int I, qtdTipos, comprim, quantidade, total;
   //scanf("%d", &qtdTipos);
   while (scanf("%d", &qtdTipos) && qtdTipos != 0)
   {
      total = 0;
      for (I = 0; I < qtdTipos; I++)
      {
         scanf("%d%d", &comprim, &quantidade);
         if (quantidade % 2 != 0)
            total += quantidade - 1;
         else
            total += quantidade;
      }
      printf("%d\n", total / 4);
   }
   return 0;
}