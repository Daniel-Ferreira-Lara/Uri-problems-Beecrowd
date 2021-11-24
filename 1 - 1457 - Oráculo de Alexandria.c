#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

unsigned long long int kFatorial(int n, int k)
{
   int i;
   unsigned long long int result = n;
   i = 1;
   while (true)
   {
      if ((n - i * k) < 1)
         break;
      result *= n - i * k;
      i++;
   }
   return result;
}

int main()
{
   int n, t, k, i, j;
   char c, nStr[121];
   unsigned long long int result;
   bool flag;
   scanf("%d", &t);
   while (t--)
   {
      scanf("%s", nStr);
      k = 0;
      for (i = strlen(nStr) - 1;; i--)
         if (nStr[i] != '!')
            break;
         else
            k++;
      nStr[i + 1] = '\0';
      n = atoi(nStr);
      result = kFatorial(n, k);
      printf("%llu\n", result);
   }
   return 0;
}