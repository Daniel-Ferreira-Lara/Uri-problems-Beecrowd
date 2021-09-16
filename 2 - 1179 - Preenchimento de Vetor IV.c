#include <stdio.h>
int main()
{
   int a = 0, b = 0, c = 0, d = 0, i, j;
   int par[5], impar[5], num[15];

   for (i = 0; i < 15; i++)
      scanf("%d", &num[i]);
   for (i = 0; i < 15; i++)
   {
      if (a == 5)
      {
         for (j = 0; j < 5; j++)
            printf("impar[%d] = %d\n", j, impar[j]);
         a = 0;
      }
      if (b == 5)
      {
         for (j = 0; j < 5; j++)
            printf("par[%d] = %d\n", j, par[j]);
         b = 0;
      }

      if (num[i] % 2 != 0)
      {
         impar[c] = num[i];
         ++c;
         a++;
         if (c == 5)
            c = 0;
      }
      if (num[i] % 2 == 0)
      {
         par[d] = num[i];
         ++d;
         b++;
         if (d == 5)
            d = 0;
      }
   }
   for (i = 0; i < a; i++)
      printf("impar[%d] = %d\n", i, impar[i]);
   for (i = 0; i < b; i++)
      printf("par[%d] = %d\n", i, par[i]);
   return 0;
}