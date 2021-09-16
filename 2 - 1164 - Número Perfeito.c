#include <stdio.h>
int main()
{
   int i, j, n, m, sum;
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      scanf("%d", &m);
      sum = 0;
      for (j = 1; j <= m / 2; j++)
      {
         if (m % j == 0)
            sum += j;
      }
      if (sum == m)
         printf("%d eh perfeito\n", m);
      else
         printf("%d nao eh perfeito\n", m);
   }
   return 0;
}