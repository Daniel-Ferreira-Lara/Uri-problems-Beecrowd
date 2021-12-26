#include <stdio.h>
#include <string.h>
int main()
{
   char col[11];
   int value, i;
   long long int sum, unid;
   while (scanf("%s", col) != EOF)
   {
      sum = 0, unid = 1;
      for (i = strlen(col) - 1; i > -1; --i)
         value = col[i] - 'A' + 1, sum += value * unid, unid *= 26;
      if (sum < 16384 + 1)
         printf("%lld\n", sum);
      else
         puts("Essa coluna nao existe Tobias!");
   }
   return 0;
}