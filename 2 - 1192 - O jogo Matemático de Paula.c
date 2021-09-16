#include <stdio.h>
int main()
{
   char ch;
   int i, a, b, n, res;
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      scanf("%d%c%d", &a, &ch, &b);
      if (a == b)
         printf("%d\n", a * b);
      else if ((ch >= 65) && (ch <= 90))
         printf("%d\n", b - a);
      else if ((ch >= 97) && (ch <= 122))
         printf("%d\n", a + b);
   }
   return 0;
}