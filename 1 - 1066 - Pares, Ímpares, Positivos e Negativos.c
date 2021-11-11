#include <stdio.h>
int main()
{
   int i, num, par = 0, impar = 0, pos = 0, neg = 0;
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &num);
      if (num % 2 == 0)
         par++;
      else
         impar++;
      if (num != 0)
         if (num > 0)
            pos++;
         else
            neg++;
   }
   printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
   return 0;
}