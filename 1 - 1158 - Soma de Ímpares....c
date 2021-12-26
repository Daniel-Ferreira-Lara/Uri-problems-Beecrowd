#include <stdio.h>
int main()
{
   int x, y, n, i, sum;
   scanf("%d", &n);
   while (n--)
   {
      sum = 0;
      scanf("%d %d", &x, &y);
      if (x % 2 == 0)
         for (i = x + 1; i < x + (2 * y) + 1; i += 2)
            sum += i;
      else
         for (i = x; i < x + (2 * y); i += 2)
            sum += i;
      printf("%d\n", sum);
   }
   return 0;
}