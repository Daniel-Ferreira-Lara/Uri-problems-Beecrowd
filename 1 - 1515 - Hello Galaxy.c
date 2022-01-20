#include <stdio.h>
#include <string.h>
int main()
{
   int n, a, t, min, i;
   char p[50], tmp[50];

   while (scanf("%d", &n) && n)
   {
      min = 10000000;
      for (i = 0; i < n; ++i)
      {
         scanf("%s %d %d", p, &a, &t);
         if ((a - t) < min)
         {
            min = (a - t);
            strcpy(tmp, p);
         }
      }
      printf("%s\n", tmp);
   }
   return 0;
}