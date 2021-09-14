#include <stdio.h>

int main()
{
   char nome[30];
   double sal, ven, fim;
   scanf("%s", nome);
   scanf("%lf %lf", &sal, &ven);
   fim = sal + (0.15 * ven);
   printf("TOTAL = R$ %.2lf\n", fim);

   return 0;
}