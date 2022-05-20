#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(void)
{

   char codBacteria[110], codResistencia[110];

   while (scanf(" %s %s", codBacteria, codResistencia) != EOF)
   {

      if (!strstr(codBacteria, codResistencia))
         printf("Nao resistente\n");
      else
         printf("Resistente\n");
   }
}