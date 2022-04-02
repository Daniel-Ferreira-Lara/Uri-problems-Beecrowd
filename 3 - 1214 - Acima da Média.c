#include <stdio.h>
int main()
{
   int I, J, num, alunos, nota[1000], soma, acima;
   float media;
   scanf("%d", &num);
   for (I = 0; I < num; I++)
   {
      scanf("%d", &alunos);
      media = 0, soma = 0, acima = 0;
      for (J = 0; J < alunos; J++)
      {
         scanf("%d", &nota[J]);
         soma += nota[J];
      }
      media = (float)soma / (float)alunos;
      for (J = 0; J < alunos; J++)
         if (nota[J] > media)
            acima++;
      printf("%.3f%%\n", 100.000 * (float)acima / (float)alunos);
   }
   return 0;
}