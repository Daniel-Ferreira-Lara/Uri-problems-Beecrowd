#include <stdio.h>
#include <string.h>
int main()
{
   unsigned casos;
   char num1[11], num2[11];
   short i, j, contador = 0, tamanhoNum2, tamanhoNum1;
   scanf("%u", &casos);
   while (casos--)
   {
      scanf(" %s %s", num1, num2);
      for (i = strlen(num2) - 1, j = strlen(num1) - 1; i > -1; i--, j--)
         if (num2[i] == num1[j])
            contador++;
      if (contador == strlen(num2))
         puts("encaixa");
      else
         puts("nao encaixa");
      contador = 0;
   }
   return 0;
}