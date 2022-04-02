#include <stdio.h>
#include <string.h>
int main()
{
   int casos, linhas, I, J, hash;
   char texto[60] = {0};
   scanf("%d", &casos);
   getchar();
   while (casos--)
   {
      scanf("%d", &linhas);
      getchar();
      hash = 0;
      for (I = 0; I < linhas; I++)
      {
         fgets(texto, 60, stdin);
         for (J = 0; J < strlen(texto); J++)
         {
            if (texto[J] == ' ' || texto[J] == '\n' || texto[J] == '\0')
               break;
            hash += ((int)texto[J]) - 65 + I + J;
         }
         memset(texto, 0, sizeof(texto));
      }
      printf("%d\n", hash);
   }
   return 0;
}