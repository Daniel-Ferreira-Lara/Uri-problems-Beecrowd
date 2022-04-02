#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main()
{
   int casos;
   double pessoas, qtd, base, Base, altura, Hf, Vf;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%lf%lf%lf%lf%lf", &pessoas, &qtd, &base, &Base, &altura);
      Vf = cbrt((qtd / pessoas) * 3.0 * (Base - base) / (PI * altura) + pow(base, 3));
      Hf = (qtd / pessoas) * 3.0 / (PI * (pow(Vf, 2) + Vf * base + pow(base, 2)));
      printf("%.2lf\n", Hf);
   }
   return 0;
}