#include <stdio.h>
int media()
{
   int opcao = 0, cont = 0;
   float nota, resultado = 0;
   resultado = 0;
   while (cont != 2)
   {
      scanf("%f", &nota);
      if (nota < 0 || nota > 10)
         printf("nota invalida\n");
      else
         cont++, resultado += nota;
   }
   cont = opcao = 0;
   printf("media = %.2f\n", resultado / 2);
   do
   {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &opcao);
      if (opcao == 1)
         media();
   } while ((opcao != 1) && (opcao != 2));
}
int main()
{
   media();
   return 0;
}