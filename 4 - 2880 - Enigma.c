#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned short enigma(char *, char *);

void main()
{
   char crib[10500], cifra[10500];
   scanf("%s %s", cifra, crib);
   enigma(cifra, crib);
   printf("%hu\n", enigma(cifra, crib));
}
unsigned short enigma(char *cifra, char *crib)
{

   bool verif = false;
   unsigned short i, j, k;
   unsigned limite = strlen(cifra) - strlen(crib);
   unsigned short qtdpos;
   i = j = k = 0;
   verif = 0;
   qtdpos = 0;
   if (!limite)
   {
      while (cifra[i])
      {
         if (cifra[i] == crib[j])
         {
            verif = true;
            break;
         }
         i++;
         j++;
      }
      if (!verif)
         return 1;
      else
         return 0;
   }
   while (k <= limite)
   {
      j = 0;
      i = k;
      verif = 0;
      while (cifra[i] && crib[j])
      {
         if (cifra[i] == crib[j])
         {
            verif = true;
            break;
         }
         ++j;
         ++i;
      }
      k++;
      if (!verif)
         qtdpos++;
   }
   return qtdpos;
}