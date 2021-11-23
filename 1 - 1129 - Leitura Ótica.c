#include <stdio.h>
int main()
{
   unsigned short int num, I, J, letra[5], qtd;
   while (scanf("%hu", &num))
   {
      if (num == 0)
         break;
      for (I = 0; I < num; I++)
      {
         qtd = 0;
         scanf("%hu%hu%hu%hu%hu", &letra[0], &letra[1], &letra[2], &letra[3], &letra[4]);
         for (J = 0; J < 5; J++)
            if (letra[J] <= 127)
            {
               letra[J] = 1;
               qtd++;
            }
         if (qtd == 1)
         {
            for (J = 0; J < 5; J++)
               if (letra[J] == 1)
                  printf("%c\n", 65 + J);
         }
         else
            puts("*");
      }
   }
   return 0;
}