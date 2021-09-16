#include <stdio.h>
#include <string.h>
int main()
{
   int n, i, j, k;
   char txt[1000], aux;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf(" %[^\n]", txt); //gets(txt);
      for (j = 0; j < strlen(txt); j++)
         if (((txt[j] >= 65) && (txt[j] <= 90)) || ((txt[j] >= 97) && (txt[j] <= 122)))
            txt[j] += 3;
      for (j = 0, k = strlen(txt) - 1; j < strlen(txt) / 2; j++, k--)
      {
         aux = txt[k];
         txt[k] = txt[j];
         txt[j] = aux;
      }
      for (j = strlen(txt) / 2; j < strlen(txt); j++)
         if (((txt[j] >= 32) && (txt[j] <= 176)))
            txt[j] -= 1;
      printf("%s\n", txt);
   }
   return 0;
}