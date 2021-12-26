#include <stdio.h>
int main()
{
   unsigned short int num, I, player, qtd = 0;
   scanf("%hu", &num);
   for (I = 0; I < 5; I++)
   {
      scanf("%hu", &player);
      if (player == num)
         qtd++;
   }
   printf("%d\n", qtd);
   return 0;
}