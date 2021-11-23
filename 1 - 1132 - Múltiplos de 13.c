#include <stdio.h>
int main()
{
   int base, topo, aux, i, sum = 0;
   scanf("%d%d", &base, &topo);
   if (base > topo)
      aux = base, base = topo, topo = aux;
   for (i = base; i < topo; i++)
      if (i % 13 != 0)
         sum += i;
   printf("%d\n", sum);
   return 0;
}