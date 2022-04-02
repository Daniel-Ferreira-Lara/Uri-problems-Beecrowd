#include <stdio.h>
int main()
{
   unsigned casos, ano;
   int resultado;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d", &ano);
      resultado = ano - 2015;
      if (resultado > 0)
         printf("%d A.C.\n", resultado + 1);
      else if (resultado < 0)
         printf("%d D.C.\n", -resultado);
      else
         printf("1 A.C.\n");
   }
}