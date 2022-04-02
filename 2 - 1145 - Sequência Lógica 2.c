#include <stdio.h>
int main()
{
   int n1, n2, i;
   scanf("%d%d", &n1, &n2);
   for (i = 1; i < n2 + 1; i++)
   {
      printf("%d", i);
      if (i % n1 == 0)
         printf("\n");
      else
         printf(" ");
   }
   return 0;
}