#include <stdio.h>
#include <string.h>
int main()
{
   int I, num, J, N, K;
   char a[1001], b[1001];
   scanf("%d", &num);
   for (I = 0; I < num; I++)
   {
      N = 0;
      scanf("%s%s", a, b);
      K = strlen(a);
      for (J = strlen(b); J >= 0; J--)
      {
         if (b[J] == a[K])
            N++;
         K--;
      }
      if (N == strlen(b) + 1)
         puts("encaixa");
      else
         puts("nao encaixa");
   }
   return 0;
}