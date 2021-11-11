#include <stdio.h>
int main()
{
   int casos, valor, in = 0, out = 0;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d", &valor);
      if (valor >= 10 && valor <= 20)
         in++;
      else
         out++;
   }
   printf("%d in\n%d out\n", in, out);
   return 0;
}