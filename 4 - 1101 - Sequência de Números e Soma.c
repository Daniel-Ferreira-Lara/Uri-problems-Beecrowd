#include <stdio.h>
int main()
{
   int n1, n2, aux, i, sum;
   while (scanf("%d%d", &n1, &n2))
   {
      sum = 0;
      if (n1 < 1 || n2 < 1)
         break;
      if (n1 > n2)
         aux = n1, n1 = n2, n2 = aux;
      for (i = n1; i < n2 + 1; i++)
      {
         printf("%d ", i);
         sum += i;
      }
      printf("Sum=%d\n", sum);
   }
   return 0;
}