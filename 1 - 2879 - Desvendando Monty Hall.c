#include <stdio.h>
int main()
{
   int casos, player = 1, carro, win = 0;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d", &carro);
      if (carro != player)
         win++;
   }
   printf("%d\n", win);
   return 0;
}