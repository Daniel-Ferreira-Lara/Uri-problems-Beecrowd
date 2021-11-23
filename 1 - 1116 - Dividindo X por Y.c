#include <stdio.h>
int main()
{
   int casos, x, y;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf("%d%d", &x, &y);
      if (y == 0)
         puts("divisao impossivel");
      else
         printf("%.1f\n", (1.0 * x) / (1.0 * y));
   }
   return 0;
}