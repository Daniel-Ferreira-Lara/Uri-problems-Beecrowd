#include <stdio.h>
#include <string.h>
typedef struct no
{
   char palavra[51];
} casoTeste;
void ordena(casoTeste *casos, unsigned int tam)
{
   int I = 1, J;
   casoTeste aux;
   while (I < tam)
   {
      J = I - 1;
      aux = casos[I];
      while (J >= 0 && strlen(casos[J].palavra) < strlen(aux.palavra))
         casos[J + 1] = casos[J], J--;
      casos[J + 1] = aux;
      I++;
   }
}
int main()
{
   casoTeste casos[50];
   int I, J, K = 0, N = 0, num;
   char letras[2501];
   scanf("%d%*c", &num);
   for (I = 0; I < num; I++)
   {
      scanf(" %[^\n]", letras);
      J = N = K = 0;
      while (1)
      {
         while (letras[J] != ' ')
         {
            if (letras[J] == '\0')
               break;
            else
               casos[N].palavra[K] = letras[J], K++, J++;
         }
         casos[N].palavra[K] = '\0';
         if (letras[J] == '\0')
            break;
         J++;
         N++;
         K = 0;
      }
      N++;
      ordena(casos, N);
      for (J = 0; J < N; J++)
      {
         if (J != N && J != 0)
            printf(" ");
         printf("%s", casos[J].palavra);
      }
      printf("\n");
   }
   return 0;
}