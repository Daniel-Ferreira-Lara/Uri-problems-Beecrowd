#include <stdio.h>
#include <string.h>

int main()
{
   int n, i, j, k;
   char str1[51], str2[51], result[101];
   int len1, len2;

   scanf("%d", &n);

   for (i = 0; i < n; ++i)
   {
      scanf("%s%s", str1, str2);

      len1 = strlen(str1);
      len2 = strlen(str2);

      for (j = 0, k = 0; j < len1 && j < len2; ++j, k += 2)
      {
         result[k] = str1[j];
         result[k + 1] = str2[j];
      }

      for (; j < len1; ++j, ++k)
         result[k] = str1[j];

      for (; j < len2; ++j, ++k)
         result[k] = str2[j];

      result[k] = '\0';

      printf("%s\n", result);
   }

   return 0;
}