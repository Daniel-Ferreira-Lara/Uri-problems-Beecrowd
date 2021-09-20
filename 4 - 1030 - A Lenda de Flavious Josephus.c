#include <stdio.h>
unsigned short int result(unsigned short int qtd, unsigned short int salto)
{
   unsigned short int i, n = 0;
   for (i = 2; i <= qtd; i++)
      n = (n + salto) % i;
   return n;
}
int main()
{
   unsigned short int num, i, qtd, salto;
   scanf("%hu", &num);
   for (i = 0; i < num; i++)
   {
      scanf("%hu%hu", &qtd, &salto);
      printf("Case %hu: %hu\n", i + 1, result(qtd, salto) + 1);
   }
   return 0;
}