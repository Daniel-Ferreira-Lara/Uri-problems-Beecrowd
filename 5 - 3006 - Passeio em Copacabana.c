#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
   unsigned short casos;
   long int i, j, numR, passos, menor, rest[100000];
   char texto[1000001];
   bool coffe, farm;
   scanf("%hu", &casos); //R dps C/F
   getchar();
   while (casos--)
   {
      numR = 0;
      memset(texto, 0, sizeof(texto));
      memset(rest, 0, sizeof(rest));
      fgets(texto, 1000001, stdin);
      for (i = 0; i < strlen(texto); i++)
         if (texto[i] == 'R')
         {
            rest[numR] = i;
            numR++;
         }
      printf("%d restaurantes\n", numR);
      //
      //C...R...F
      menor = 1000000;
      for (i = 0; i < numR; i++)
      {
         passos = 0;
         farm = false, coffe = false;
         //printf("%d - R = %d\n", i, rest[i]);
         for (j = rest[i]; j < strlen(texto) - 1; j++)
         {
            if (coffe == false && texto[j] == 'C')
               coffe = true;
            if (farm == false && texto[j] == 'F')
               farm = true;
            if (coffe == true && farm == true)
               break;
            passos++;
            printf("Passos %ld, posicao %ld\n", passos, j);
         }
         printf("\n");
         if (coffe == false || farm == false)
            for (j = strlen(texto) - 2; j >= 0; j--)
            {
               if (coffe == false && texto[j] == 'C')
                  coffe = true;
               if (farm == false && texto[j] == 'F')
                  farm = true;
               if (coffe == farm == true)
                  break;
               passos++;
               printf("Passos %ld, posicao %ld\n", passos, j);
            }
         printf("\nRestaurante %ld = %ld passos\n", i, passos);
         if ((passos) < menor)
            menor = passos;
      }
      printf("%ld\n", menor);

      return 0;
   }
}
/*int main()
{
   unsigned short casos, visitas;
   short taxa;
   long int Inicio, i, j, numR, passos, passosVolta, menor, rest[100000];
   char texto[1000001];
   char prox;
   bool fim;
   scanf("%hu", &casos); //R dps C/F
   getchar();
   while (casos--)
   {
      numR = 0, fim = false;
      memset(texto, 0, sizeof(texto));
      memset(rest, 0, sizeof(rest));
      fgets(texto, 1000001, stdin);
      for (i = 0; i < strlen(texto); i++)
         if (texto[i] == 'R')
         {
            rest[numR] = i;
            numR++;
         }
      printf("%d\n", numR);

      //
      //
      menor = 100000;
      for (i = 0; i < numR; i++)
      {
         taxa = 1, visitas = 0, passos = 0, passosVolta = 0;
         prox = '*';
         //printf("%d - R = %d\n", i, rest[i]);
         for (j = rest[i]; j < strlen(texto); j++)
         {
         }
         if (fim == true)
            for (j = strlen(texto); j >= 0; j--)
            {
               if ((texto[j] == 'C' || texto[j] == 'F') && prox == '*')
               {
                  visitas++;
                  if (texto[j] == 'C')
                     prox = 'F';
                  else
                     prox = 'C';
               }
               if ((texto[j] == 'C' && prox == 'C') || (texto[j] == 'F' && prox == 'F'))
               {
                  visitas++;
               }
               if (visitas == 2)
                  break;
               passosVolta++;
            }
         printf("Passos %d =%d+%d\n", i, passos, passosVolta);
         if ((passos + passosVolta) < menor)
            menor = passos + passosVolta;
      }
      printf("%d\n", menor);

      return 0;
   }
   }*/