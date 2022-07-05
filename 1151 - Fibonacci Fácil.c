#include <stdio.h>
int main()
{
   int n, i, fibo = 0, fibo2 = 1, res = 0;
   scanf("%d", &n);
   if (n == 0 || n == 1)
   {
      printf("%d", fibo);
      return 0;
   }
   printf("%d ", fibo);
   for (i = 2; i < n; i++)
   {
      fibo = fibo2, fibo2 = res, res = fibo + fibo2;
      printf("%d ", res);
   }
   printf("%d\n", res + fibo2);
   return 0;
}