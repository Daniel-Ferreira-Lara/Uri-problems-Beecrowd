#include <stdio.h>
int main()
{
   int n1, n2, m1, m2, casos;
   scanf("%d", &casos);
   while (casos--)
   {
      scanf(" %d%d%d%d", &n1, &n2, &m1, &m2);
      if ((n1 < m1 && n2 < m2) || (n1 < m2 && n2 < m1))
         puts("S");
      else
         puts("N");
   }
   return 0;
}