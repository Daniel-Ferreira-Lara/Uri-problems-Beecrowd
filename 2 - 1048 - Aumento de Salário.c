#include <stdio.h>
int main()
{
   float salario, reajuste;
   int percentual;
   scanf("%f", &salario);
   if (salario <= 400.00)
      reajuste = 0.15, percentual = 15;
   else if (salario <= 800.0)
      reajuste = 0.12, percentual = 12;
   else if (salario <= 1200.0)
      reajuste = 0.10, percentual = 10;
   else if (salario <= 2000.0)
      reajuste = 0.07, percentual = 7;
   else
      reajuste = 0.04, percentual = 4;
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario * (1.00 + reajuste), reajuste * salario, percentual);
   return 0;
}