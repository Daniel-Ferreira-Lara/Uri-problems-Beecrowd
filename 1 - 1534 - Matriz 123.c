#include <stdio.h>

int main()
{
   int i, j, k, lado;
   while (scanf("%d", &lado) != EOF)
      for (i = 0, j = lado - 1; i < lado; i++, j--)
      {
         for (k = 0; k < lado; k++)
            if (k == j)
               printf("2");
            else if (k == i)
               printf("1");
            else
               printf("3");
         printf("\n");
      }
   return 0;
}