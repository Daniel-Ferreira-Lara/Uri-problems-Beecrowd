#include <stdio.h>
int main()
{
   int a, b, c, orig[3];
   scanf("%d%d%d", &a, &b, &c);
   orig[0] = a;
   orig[1] = b;
   orig[2] = c;
   if (a > c)
   {
      int tmp = c;
      c = a;
      a = tmp;
   }
   if (a > b)
   {
      int tmp = b;
      b = a;
      a = tmp;
   }
   if (b > c)
   {
      int tmp = c;
      c = b;
      b = tmp;
   }
   printf("%d\n%d\n%d\n\n", a, b, c);
   printf("%d\n%d\n%d\n", orig[0], orig[1], orig[2]);
   return 0;
}
