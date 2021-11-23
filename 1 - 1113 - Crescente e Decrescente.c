#include <stdio.h>
int main()
{
   int n1, n2;
   while (scanf("%d%d", &n1, &n2))
   {
      if (n1 == n2)
         break;
      else if (n1 > n2)
         puts("Decrescente");
      else
         puts("Crescente");
   }
   return 0;
}