#include <stdio.h>
#include <string.h>
int main()
{
   int casos, I, J, soma;
   char numero[10000];
   scanf("%d", &casos);
   getchar();
   for (I = 0; I < casos; I++)
   {
      soma = 0;
      fgets(numero, 10000, stdin);
      for (J = 0; J < strlen(numero); J++)
      {
         if (numero[J] == '1')
            soma += 2;
         else if (numero[J] == '7')
            soma += 3;
         else if (numero[J] == '4')
            soma += 4;
         else if (numero[J] == '2' || numero[J] == '3' || numero[J] == '5')
            soma += 5;
         else if (numero[J] == '0' || numero[J] == '6' || numero[J] == '9')
            soma += 6;
         else if (numero[J] == '8')
            soma += 7;
      }
      printf("%d leds\n", soma);
   }
   return 0;
}