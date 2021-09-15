#include <stdio.h>
int main()
{
   long int j, k, l, n, m, i;
   while (scanf("%ld", &j))
   {
      if (j <= 0)
         break;
      scanf("%ld%ld", &k, &l);
      for (i = 0; i < j; i++)
      {
         scanf("%ld%ld", &n, &m);
         n -= k;
         m -= l;
         if (n == 0 || m == 0)
            printf("divisa\n"); //puts("divisa");
         else if (n > 0 && m > 0)
            printf("NE\n"); //puts("NE");
         else if (n < 0 && m > 0)
            printf("NO\n"); //puts("NO");
         else if (n < 0 && m < 0)
            printf("SO\n"); //puts("SO");
         else if (n > 0 && m < 0)
            printf("SE\n"); // puts("SE");
      }
   }
   return 0;
}
