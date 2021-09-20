#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct no
{
   char nome[60];
   char cor[20];
   char tamanho;
} camisa;
void ordenaTamanho(camisa *, unsigned short);
void ordenaAlpha(camisa *, unsigned short);
void ordenaCor(camisa *, unsigned short);
void main()
{
   unsigned short numCamisas, i;
   scanf("%hu", &numCamisas);
   while (true)
   {
      if (numCamisas == 0)
         break;
      camisa camisas[numCamisas];
      for (i = 0; i < numCamisas; i++)
      {
         scanf(" %[^\n]", camisas[i].nome);
         scanf("%s %c", camisas[i].cor, &camisas[i].tamanho);
      }
      ordenaAlpha(camisas, numCamisas);
      ordenaTamanho(camisas, numCamisas);
      ordenaCor(camisas, numCamisas);
      for (i = 0; i < numCamisas; i++)
         printf("%s %c %s\n", camisas[i].cor, camisas[i].tamanho, camisas[i].nome);
      scanf("%hu", &numCamisas);
      if (numCamisas != 0)
         printf("\n");
   }
}
void ordenaAlpha(camisa *camisas, unsigned short tam)
{
   short i = 1, j;
   camisa pivo;
   while (i < tam)
   {
      j = i - 1;
      pivo = camisas[i];
      while (j >= 0 && strcmp(camisas[j].nome, pivo.nome) > 0)
         camisas[j + 1] = camisas[j], j--;
      camisas[j + 1] = pivo;
      i++;
   }
}

void ordenaCor(camisa *camisas, unsigned short tam)
{
   short i = 1, j;
   camisa pivo;
   while (i < tam)
   {
      j = i - 1;
      pivo = camisas[i];
      while (j >= 0 && strcmp(camisas[j].cor, pivo.cor) > 0)
         camisas[j + 1] = camisas[j], j--;
      camisas[j + 1] = pivo;
      i++;
   }
}
void ordenaTamanho(camisa *camisas, unsigned short tam)
{
   short i = 1, j;
   camisa pivo;
   while (i < tam)
   {
      j = i - 1;
      pivo = camisas[i];
      while (j >= 0 && camisas[j].tamanho < pivo.tamanho)
         camisas[j + 1] = camisas[j], j--;
      camisas[j + 1] = pivo;
      i++;
   }
}