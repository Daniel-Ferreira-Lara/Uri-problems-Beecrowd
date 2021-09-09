#include <stdio.h>

int main()
{
   int code[2], n[2];
   float value[2], total;
   scanf("%d %d %f", &code[0], &n[0], &value[0]);
   scanf("%d %d %f", &code[1], &n[1], &value[1]);

   total = (n[0] * value[0]) + (n[1] * value[1]);

   printf("VALOR A PAGAR: R$ %0.2f\n", total);

   return 0;
}