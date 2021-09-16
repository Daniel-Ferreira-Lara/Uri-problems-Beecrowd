#include <stdio.h>
int mdc(int a, int b)
{
   if (a < 0)
      a = -a;
   if (b < 0)
      b = -b;
   if (a % b == 0)
      return b;
   else
      return mdc(b, a % b);
}
int main()
{
   char op;
   int n, n1, d1, n2, d2, i, n3, d3, aux;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
      if (op == '+')
      {
         n3 = (n1 * d2 + n2 * d1);
         d3 = (d1 * d2);
      }
      else if (op == '-')
      {
         n3 = (n1 * d2 - n2 * d1);
         d3 = (d1 * d2);
      }
      else if (op == '*')
      {
         n3 = (n1 * n2);
         d3 = (d1 * d2);
      }
      else if (op == '/')
      {
         n3 = (n1 * d2);
         d3 = (n2 * d1);
      }
      aux = mdc(n3, d3);
      printf("%d/%d = %d/%d\n", n3, d3, n3 / aux, d3 / aux);
   }
   return 0;
}