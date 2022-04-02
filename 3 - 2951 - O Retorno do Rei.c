#include <stdio.h>
#include <string.h>
typedef struct no
{
   char codigo;
   int valor;
} runa;
int main()
{
   int I, J, num, qtd, objetivo, soma = 0;
   char usada;
   scanf("%d%d%*c", &qtd, &objetivo);
   runa runas[qtd];
   for (I = 0; I < qtd; I++)
      scanf("%c%d%*c", &runas[I].codigo, &runas[I].valor);
   scanf("%d%*c", &num);
   for (I = 0; I < num; I++)
   {
      scanf("%c%*c", &usada);
      for (J = 0; J < qtd; J++)
         if (usada == runas[J].codigo)
            soma += runas[J].valor;
   }
   printf("%d\n", soma);
   if (soma >= objetivo)
      puts("You shall pass!");
   else
      puts("My precioooous");
   return 0;
}
