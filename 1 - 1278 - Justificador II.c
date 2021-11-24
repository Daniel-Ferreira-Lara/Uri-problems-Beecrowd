#include <stdio.h>
#include <string.h>
typedef struct no
{
   char entrada[51], saida[51];
} texto;

int main()
{

   unsigned short casos, aux;
   unsigned short maior, atual, i, j, k;

   scanf("%hu", &casos);
   while (1)
   {
      if (casos == 0)
         break;
      aux = casos;
      texto palavra[casos];
      i = 0;
      while (aux--)
         scanf(" %[^\n]", palavra[i++].entrada);

      i = 0;
      aux = casos;
      while (aux--)
      {
         j = 0;
         k = 0;
         while (1)
         {
            while (isalpha(palavra[i].entrada[j]))
               palavra[i].saida[k++] = palavra[i].entrada[j++];
            if (palavra[i].entrada[j] == '\0')
               break;
            while (!isalpha(palavra[i].entrada[j]))
            {
               j++;
               if (palavra[i].entrada[j] == '\0')
                  break;
            }
            if (palavra[i].entrada[j] == '\0')
               break;
            palavra[i].saida[k++] = ' ';
         }
         palavra[i].saida[k] = '\0';
         i++;
      }
      maior = 0;
      for (i = 0; i < casos; i++)
      {
         atual = strlen(palavra[i].saida);
         if (atual > maior)
            maior = atual;
      }
      for (i = 0; i < casos; i++)
         printf("%*s\n", maior, palavra[i].saida);

      scanf("%hu", &casos);
      if (casos != 0)
         printf("\n");
   }
   return 0;
}