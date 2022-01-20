#include <stdio.h>
int main()
{
   int a, n, i, sum = 0;
   scanf("%d %d", &a, &n);
   while (n < 1)
      scanf("%d", &n);
   for (i = 0; i < n; i++)
      sum += a + i;
   printf("%d\n", sum);
   return 0;
}