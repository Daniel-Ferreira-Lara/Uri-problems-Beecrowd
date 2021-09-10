#include <stdio.h>

int main()
{
   double valor;
   int value, n[6], m[6];
   scanf("%lf", &valor);

   value = (int)valor;
   n[0] = value / 100;
   value %= 100;
   n[1] = value / 50;
   value %= 50;
   n[2] = value / 20;
   value %= 20;
   n[3] = value / 10;
   value %= 10;
   n[4] = value / 5;
   value %= 5;
   n[5] = value / 2;
   value %= 2;

   m[0] = value;
   valor *= 100;
   value = (int)valor;
   value %= 100;
   m[1] = value / 50;
   value %= 50;
   m[2] = value / 25;
   value %= 25;
   m[3] = value / 10;
   value %= 10;
   m[4] = value / 5;
   value %= 5;
   m[5] = value;

   printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n[0], n[1], n[2], n[3], n[4], n[5]);

   printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", m[0], m[1], m[2], m[3], m[4], m[5]);
   return 0;
}
/*printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n[0], n[1], n[2], n[3], n[4], n[5],m[0], m[1], m[2], m[3], m[4], m[5]);*/