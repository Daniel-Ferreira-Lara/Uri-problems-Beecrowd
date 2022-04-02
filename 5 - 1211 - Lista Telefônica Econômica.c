#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
   char telefone[201];
} lista;
lista number[1000001];
int comparar(const void *primeiro, const void *segundo)
{
   lista *i = (lista *)primeiro, *j = (lista *)segundo;
   return strcmp(i->telefone, j->telefone);
}
int main()
{
   int qtd, I, J, verif, economia;
   while (scanf("%d", &qtd) != EOF)
   {
      for (I = 0; I < qtd; I++)
         scanf("%s", number[I].telefone);
      qsort(number, qtd, sizeof(lista), comparar);
      economia = 0, J = 0, verif = 0;
      for (I = 0; I < qtd - 1; I++)
      {
         while (verif == 0 && number[I].telefone[J] != '\0')
            if (number[I].telefone[J] == number[I + 1].telefone[J])
               economia++, J++;
            else
               J = 0, verif = 1;
         verif = 0;
      }
      printf("%d\n", economia);
   }
   return 0;
}
//
//
//Funciona, mass é lento demais
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
   char telefone[201];
} lista;
lista number[1000001], aux;
int main()
{
   int qtd, I, verif, economia, J;
   while (scanf("%d", &qtd) != EOF)
   {
      for (I = 0; I < qtd; I++)
         scanf("%s", number[I].telefone);
      for (I = 0; I < qtd; I++)
         for (J = I + 1; J < qtd; J++)
            if (strcmp(number[I].telefone, number[J].telefone) > 0)
            {
               strcpy(aux.telefone, number[I].telefone);
               strcpy(number[I].telefone, number[J].telefone);
               strcpy(number[J].telefone, aux.telefone);
            }
      economia = 0, J = 0, verif = 0;
      for (I = 0; I < qtd - 1; I++)
      {
         while (verif == 0 && number[I].telefone[J] != '\0')
            if (number[I].telefone[J] == number[I + 1].telefone[J])
               economia++, J++;
            else
               J = 0, verif = 1;
         verif = 0;
      }
      printf("%d\n", economia);
   }
   return 0;
}
*/
