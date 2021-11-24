#include <stdio.h>
int main()
{
   int casos, x, y, beto, rafa, carlos;
   char maior;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d%d", &x, &y);
      rafa = (9 * x * x) + (y * y);
      beto = (2 * x * x) + (25 * y * y);
      carlos = (y * y * y) - (100 * x);
      if (beto > carlos && beto > rafa)
         maior = 'b';
      if (rafa > carlos && rafa > beto)
         maior = 'r';
      if (carlos > rafa && carlos > beto)
         maior = 'c';
      switch (maior)
      {
      case 'b':
         puts("Beto ganhou");
         break;
      case 'r':
         puts("Rafael ganhou");
         break;
      case 'c':
         puts("Carlos ganhou");
         break;
      default:
         break;
      }
   }
   return 0;
}