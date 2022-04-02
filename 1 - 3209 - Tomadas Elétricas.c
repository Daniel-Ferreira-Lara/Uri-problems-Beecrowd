#include <stdio.h>
int main()
{
   int casos, qtd, value, i, sum;
   scanf("%d", &casos);
   while (casos--)
   {
      sum = 0;
      scanf("%d", &qtd);
      for (i = 0; i < qtd; i++)
      {
         scanf("%d", &value);
         sum += value;
      }
      printf("%d\n", sum - qtd + 1);
   }
   return 0;
}