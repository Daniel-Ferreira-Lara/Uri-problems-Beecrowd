#include <stdio.h>
int main()
{
   int valor, value, n[6];
   scanf("%d", &valor);
   value = valor;
   n[0] = value / 100;
   value -= (n[0] * 100);
   n[1] = value / 50;
   value -= (n[1] * 50);
   n[2] = value / 20;
   value -= (n[2] * 20);
   n[3] = value / 10;
   value -= (n[3] * 10);
   n[4] = value / 5;
   value -= (n[4] * 5);
   n[5] = value / 2;
   value -= (n[5] * 2);
   printf("%d\n", valor);
   printf("%d nota(s) de R$ 100,00\n", n[0]);
   printf("%d nota(s) de R$ 50,00\n", n[1]);
   printf("%d nota(s) de R$ 20,00\n", n[2]);
   printf("%d nota(s) de R$ 10,00\n", n[3]);
   printf("%d nota(s) de R$ 5,00\n", n[4]);
   printf("%d nota(s) de R$ 2,00\n", n[5]);
   printf("%d nota(s) de R$ 1,00\n", value);
   return 0;
}