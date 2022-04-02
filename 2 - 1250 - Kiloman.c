#include <stdio.h>
int main()
{
   int I, J, num, tiros, acertos;
   scanf("%d", &num);
   for (I = 0; I < num; I++)
   {
      acertos = 0;
      scanf("%d", &tiros);
      char pulo[tiros];
      int tiro[tiros];
      for (J = 0; J < tiros; J++)
         scanf("%d", &tiro[J]);
      scanf("%s", pulo);
      for (J = 0; J < tiros; J++)
      {
         if ((pulo[J] == 'S') && (tiro[J] <= 2))
            acertos++;
         if ((pulo[J] == 'J') && (tiro[J] > 2))
            acertos++;
      }
      printf("%d\n", acertos);
   }
   return 0;
}