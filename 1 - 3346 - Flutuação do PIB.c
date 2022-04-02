#include <stdio.h>
int main()
{
   double f1, f2, resposta;
   scanf("%lf%lf", &f1, &f2);
   resposta = (100 + f1) * (f2 / 100 + 1) - 100;
   printf("%.6lf\n", resposta);
   return 0;
}